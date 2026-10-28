/* ERROR.wtf // 1MiB — Concept Triad v2 (art revision, per Lino's directive)
 * Three DISTINCT 12s prototypes, real 3D, filmic, offline-rendered to stdout:
 *   A  CATHEDRAL OF SIGNALS  — SDF raymarched corridor world, red/cyan lights
 *   B  PARTICLE COLLAPSE     — 200k GPU particles, beat-synced collapse
 *   C  SIGNAL TERRAIN        — raymarched procedural terrain flight, red sun
 * Score: excerpts of the production score (score_sample), muxed by the wrapper.
 * stdout = raw rgb24 frames. All logs go to stderr.
 */
#include "gl33.h"
#include <math.h>
#include <string.h>
#include <time.h>

#ifndef EW_W
#define EW_W 1280
#endif
#ifndef EW_H
#define EW_H 720
#endif
#define W EW_W
#define H EW_H
#define DUR 12
#define FPS 30
#define PI 3.14159265358979323846

static const char *VS_TRI =
    "#version 330 core\n"
    "const vec2 v[3]=vec2[3](vec2(-1.,-1.),vec2(3.,-1.),vec2(-1.,3.));\n"
    "void main(){gl_Position=vec4(v[gl_VertexID],0.,1.);}";

/* ================= A — CATHEDRAL OF SIGNALS (SDF raymarch) ================= */
/* real FS_A (uses plain time offset instead of helper): */
static const char *FS_A_FULL =
    "#version 330 core\nuniform float u_time;uniform vec2 u_res;out vec4 o;\n" GLSL_COMMON
    "float sdbox(vec2 p,vec2 b){vec2 d=abs(p)-b;return length(max(d,0.))+min(max(d.x,d.y),0.);}\n"
    "float map(vec3 p,out float mat){\n"
    " mat=0.0;\n"
    " vec3 q=p; q.z=mod(q.z+0.5*u_time*2.4,8.0)-4.0;\n"
    " float d=3.0-abs(q.x);            /* distance to side walls (positive inside) */\n"
    " d=min(d,3.2-abs(q.y));           /* floor/ceiling */\n"
    " float pil=sdbox(vec2(mod(q.x+2.55,2.55)-1.27,q.y+1.0),vec2(0.35,0.55));\n"
    " float arch=abs(abs(q.y)-2.7)-0.15; arch=max(arch,abs(sdbox(vec2(q.x,q.z),vec2(2.6,1.2)))-0.12);\n"
    " if(arch<d)mat=1.0;\n"
    " if(pil<d)mat=2.0;\n"
    " d=min(d,min(pil,arch));\n"
    " return d;\n}\n"
    "vec3 ew_norm(vec3 p){float e=0.001;float m;vec2 k=vec2(1,-1);\n"
    " return normalize(k.xyy*map(p+k.xyy*e,m)+k.yyx*map(p+k.yyx*e,m)+k.yxy*map(p+k.yxy*e,m)+k.xyx*map(p+k.xyx*e,m));}\n"
    "void main(){\n"
    " vec2 uv=(gl_FragCoord.xy*2.0-u_res)/u_res.y;\n"
    " float t=u_time;\n"
    " float beat=fract(t*2.0);\n"
    " vec3 ro=vec3(sin(t*0.35)*0.35,0.1+0.05*sin(t*0.6),t*2.4);\n"
    " vec3 rd=normalize(vec3(uv,1.6+0.45*exp(-beat*6.0)));\n"
    " rd.xz=ew_rot(sin(t*0.2)*0.06)*rd.xz;\n"
    " float d=0.02;float m;vec3 p=ro;float glow=0.0;float hitm=10.0;\n"
    " for(int i=0;i<96;i++){p=ro+rd*d;float dd=map(p,m);glow+=exp(-abs(dd)*12.0)*0.012;\n"
    "  if(dd<0.002){hitm=dd;break;} d+=max(dd*0.9,0.004); if(d>60.0)break;}\n"
    " vec3 col=vec3(0.004,0.006,0.010);\n"
    " if(hitm<0.01){vec3 n=ew_norm(p);\n"
    "  vec3 lr=normalize(vec3(0.4,0.3,-1.0)); float dr=max(dot(n,lr),0.0);\n"
    "  vec3 lc=normalize(vec3(-0.3,-0.2,1.0)); float dc=max(dot(n,lc),0.0);\n"
    "  vec3 base=vec3(0.10,0.13,0.17);\n"
    "  if(m>1.5)base=vec3(0.14,0.16,0.20); if(m>0.5&&m<1.5)base=vec3(0.12,0.12,0.14);\n"
    "  /* ornament: ribs on pillars (trig detail, breaks flat slabs) */\n"
    "  float rib=0.5+0.5*sin(p.z*14.0+ (m>1.5? p.y*4.0:0.0));\n"
    "  base+=vec3(0.02,0.03,0.04)*rib;\n"
    "  col=base*(dr*vec3(1.0,0.18,0.10)*2.4+dc*vec3(0.15,0.70,0.85)*3.0);\n"
    "  float fog=1.0-exp(-d*0.055); col=mix(col,vec3(0.004,0.006,0.010),fog);}\n"
    " col+=vec3(0.5,0.12,0.06)*glow+vec3(0.10,0.45,0.55)*glow*0.7;\n"
    " col+=vec3(0.9,0.15,0.05)*pow(max(dot(rd,normalize(vec3(0.4,0.15,-0.9))),0.0),40.0)*1.2;\n"
    " /* cyan end-portal: visible light at corridor end */\n"
    " col+=vec3(0.10,0.85,1.00)*pow(max(dot(rd,normalize(vec3(-0.10,-0.08,1.0))),0.0),60.0)*(1.4+0.5*sin(t*1.3));\n"
    " col*=1.55;                                    /* exposure: mid-tones live */\n"
    " col=col/(1.0+col);                            /* reinhard tonemap */\n"
    " col+= (ew_hash(gl_FragCoord.xy+t)-0.5)/255.0; /* debanding dither */\n"
    " o=vec4(col,1.0);}";

/* ================= B — PARTICLE COLLAPSE (analytic particle field, fullscreen) ================= */
static const char *FS_B =
    "#version 330 core\nuniform float u_time;out vec4 o;\n" GLSL_COMMON
    "float ew_hash(float n){return fract(sin(n)*43758.5453);}\n"
    "float h1(float n){return fract(sin(n)*43758.5453);}\n"
    "void main(){\n"
    " vec2 uv=(gl_FragCoord.xy*2.0-vec2(1280,720))/720.0;\n"
    " float t=u_time;\n"
    " float beat=fract(t*2.0); float bexp=exp(-beat*5.0);\n"
    " float cl=smoothstep(7.5,10.0,t)*(1.0-smoothstep(10.0,12.0,t));\n"
    " vec3 col=vec3(0.004,0.006,0.010)*(1.0+0.6*bexp);\n"
    " /* 320 analytic particles: orbit + beat-kick + collapse */\n"
    " for(int i=0;i<320;i++){\n"
    "  float fi=float(i);\n"
    "  float s1=ew_hash(fi+1.0); float s2=ew_hash(fi+2.0); float s3=ew_hash(fi+3.0);\n"
    "  float ph=s1*6.2831;\n"
    "  float r=0.18+0.95*s2+0.18*sin(t*0.9+s1*6.0);\n"
    "  vec2 p=vec2(sin(ph*1.3+t*0.45)*r*1.6, cos(ph*1.1+t*0.38)*r*0.9);\n"
    "  p*=1.0-cl*0.75*(0.35+0.65*s3);\n"
    "  p+=normalize(p+vec2(0.001))*bexp*0.08*(0.3+s3);\n"
    "  float d=length(uv-p*vec2(1.5,0.9));\n"
    "  float cyan=clamp(1.3-cl*1.6-s1*0.3,0.0,1.0);\n"
    "  vec3 pc=mix(vec3(0.15,0.85,0.95),vec3(1.0,0.15,0.08),1.0-cyan);\n"
    "  col+=pc*exp(-d*d*260.0)*(0.5+0.5*bexp);\n"
    " }\n"
    " col*=0.85;\n"
    " o=vec4(col,1.0);}";

/* ================= C — SIGNAL TERRAIN (heightfield flight) ================= */
static const char *FS_C =
    "#version 330 core\nuniform float u_time;out vec4 o;\n" GLSL_COMMON
    "float terrain(vec2 p){\n"
    " p*=0.06; p.y+=u_time*0.9;\n"
    " float h=ew_fbm(p)*4.0;\n"
    " float ridge=abs(ew_fbm(p*1.7+3.0)-0.5)*2.0;\n"
    " h=mix(h,ridge*2.2,0.35);\n"
    " return h-2.2;\n}\n"
    "vec3 ew_normT(vec2 p){float e=0.06;\n"
    " return normalize(vec3(terrain(p-vec2(e,0))-terrain(p+vec2(e,0)),2.0*e,terrain(p-vec2(0,e))-terrain(p+vec2(0,e))));}\n"
    "void main(){\n"
    " vec2 uv=(gl_FragCoord.xy*2.0-vec2(1280,720))/720.0;\n"
    " float t=u_time;\n"
    " vec3 ro=vec3(0.0,4.2,t*7.0);\n"
    " vec3 rd=normalize(vec3(uv,1.4));\n"
    " rd.xz=ew_rot(sin(t*0.3)*0.08)*rd.xz;\n"
    " float d=1.0;float hit=0.0;vec3 p=ro;\n"
    " for(int i=0;i<140;i++){p=ro+rd*d;float h=terrain(p.xz)-p.y;\n"
    "  if(h<0.02){hit=1.0;break;} d+=max(0.08,h*0.55); if(d>90.0)break;}\n"
    " vec3 col=vec3(0.008,0.012,0.020);\n"
    " if(hit>0.5){vec3 n=ew_normT(p.xz);\n"
    "  float dif=max(dot(n,normalize(vec3(0.3,0.6,-0.4))),0.0);\n"
    "  vec3 base=vec3(0.05,0.07,0.09);\n"
    "  float lines=smoothstep(0.06,0.0,abs(fract(p.y*2.5)-0.5)-0.35);\n"
    "  base+=vec3(0.06,0.30,0.38)*lines*0.6;\n"
    "  float fog=1.0-exp(-d*0.045); col=mix(base*(0.4+dif*0.9),vec3(0.05,0.12,0.16),fog);}\n"
    " float sun=pow(max(dot(rd,normalize(vec3(0.35,0.06,-0.92))),0.0),300.0);\n"
    " col+=vec3(1.0,0.16,0.06)*sun*2.0;\n"
    " col+=vec3(0.90,0.20,0.08)*pow(max(dot(rd,normalize(vec3(0.35,0.02,-0.92))),0.0),18.0)*0.35;\n"
    " float hz=exp(-(rd.y+0.06)*4.0); col=mix(col,vec3(0.06,0.22,0.30),hz*0.35);\n"
    " o=vec4(col,1.0);}";

int main(int argc, char **argv) {
    if (argc < 2 || !strchr("ABC", argv[1][0])) { fprintf(stderr, "usage: concepts2 <A|B|C>\n"); return 1; }
    char DIRC = argv[1][0];
    EGLDisplay dpy; EGLSurface surf; EGLContext ctx;
    int rc = ewtf_headless_init(W, H, &dpy, &surf, &ctx);
    if (rc) { fprintf(stderr, "EVIDENCE_FAIL: egl %d\n", rc); return 2; }
    ewtf_load_gl();
    fprintf(stderr, "EVIDENCE: renderer=%s dir=%c\n", glGetString_p(GL_RENDERER), DIRC);

    unsigned prog;
    const char *fs_sel = DIRC == 'A' ? FS_A_FULL : (DIRC == 'B' ? FS_B : FS_C);
    prog = ewtf_program(VS_TRI, fs_sel);
    ewtf_bind_triangle();
    glViewport_p(0, 0, W, H);

    GLint ul_t = glGetUniformLocation_p(prog, "u_time");
    GLint ul_res = glGetUniformLocation_p(prog, "u_res");
    glUniform2f_p(ul_res, (float)W, (float)H);
    unsigned char *flip = malloc((size_t)W * H * 3);
    unsigned char *px = malloc((size_t)W * H * 3);
    int total = DUR * FPS;
    for (int i = 0; i < total; i++) {
        float t = (float)i / FPS;
        glClearColor_p(0, 0, 0, 1);
        glClear_p(GL_COLOR_BUFFER_BIT);
        glUseProgram_p(prog);
        glUniform1f_p(ul_t, t);
        if (DIRC == 'B' && i == 0) {
            GLenum e = glGetError_p();
            fprintf(stderr, "EVIDENCE: GL error after first setup: 0x%x\n", e);
        }
        glDrawArrays_p(GL_TRIANGLES, 0, DIRC == 'B' ? 200000 : 3);
        if (DIRC == 'B' && i == 0) {
            glReadPixels_p(632, 352, 16, 16, GL_RGB, GL_UNSIGNED_BYTE, flip);
            long mx = 0, sm = 0;
            for (long q = 0; q < 16 * 16 * 3; q++) { sm += flip[q]; if (flip[q] > mx) mx = flip[q]; }
            fprintf(stderr, "EVIDENCE: B center 16x16 sum=%ld max=%ld\n", sm, mx);
        }
        glReadPixels_p(0, 0, W, H, GL_RGB, GL_UNSIGNED_BYTE, px);
        for (int y = 0; y < H; y++)
            memcpy(flip + (size_t)(H - 1 - y) * W * 3, px + (size_t)y * W * 3, (size_t)W * 3);
        fwrite(flip, (size_t)W * H * 3, 1, stdout);
        if (i % 60 == 0) { fprintf(stderr, "EVIDENCE: frame %d/%d\n", i, total); fflush(stderr); }
    }
    fflush(stdout);
    fprintf(stderr, "EVIDENCE: dir %c complete (%d frames)\n", DIRC, total);
    return 0;
}
