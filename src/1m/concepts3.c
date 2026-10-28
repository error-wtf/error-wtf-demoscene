/* ERROR.wtf // 1MiB — Concept Triad v3 (art restart, per directive)
 * A3 NEURAL SANCTUM  — SDF raymarch + fbm domain-warp, volumetric red/cyan shafts
 * B3 GLYPH SWARM     — analytic glyph swarm, beat-synced orbit + collapse
 * C3 WOBBLE BASIN    — warped terrain basin, low camera, red sun in frame
 * Score v2 (dark breakbeat/dubstep/IDM) segments, muxed by wrapper.
 * stdout = raw rgb24; logs = stderr. 12s @ 30fps.
 */
#include "gl33.h"
#include <math.h>
#include <string.h>

static const char GLSL_COMMON_STR[] =
    "float ew_hash(vec2 p){return fract(sin(dot(p,vec2(127.1,311.7)))*43758.5453);}\n"
    "float ew_noise(vec2 p){vec2 i=floor(p),f=fract(p);f=f*f*(3.-2.*f);\n"
    " return mix(mix(ew_hash(i),ew_hash(i+vec2(1,0)),f.x),mix(ew_hash(i+vec2(0,1)),ew_hash(i+vec2(1,1)),f.x),f.y);}\n"
    "float ew_fbm(vec2 p){float a=0.5,s=0.0;for(int i=0;i<5;i++){s+=a*ew_noise(p);p=p*2.07+vec2(1.7,9.2);a*=0.5;}return s;}\n"
    "mat2 ew_rot(float a){float c=cos(a),s=sin(a);return mat2(c,-s,s,c);}\n";
static char FS_A3_FULL[16384], FS_B3_FULL[16384], FS_C3_FULL[16384], FS_D3_FULL[16384];
static const char *FS_A3_BODY, *FS_B3_BODY, *FS_C3_BODY, *FS_D3_BODY;
static void ew_build_shaders(void) {
    snprintf(FS_A3_FULL, sizeof FS_A3_FULL, "%s%s%s", "#version 330 core\nuniform float u_time;uniform vec2 u_res;out vec4 o;\n", GLSL_COMMON_STR, FS_A3_BODY);
    snprintf(FS_B3_FULL, sizeof FS_B3_FULL, "%s%s%s", "#version 330 core\nuniform float u_time;uniform vec2 u_res;out vec4 o;\n", GLSL_COMMON_STR, FS_B3_BODY);
    snprintf(FS_C3_FULL, sizeof FS_C3_FULL, "%s%s%s", "#version 330 core\nuniform float u_time;uniform vec2 u_res;out vec4 o;\n", GLSL_COMMON_STR, FS_C3_BODY);
    snprintf(FS_D3_FULL, sizeof FS_D3_FULL, "%s%s%s", "#version 330 core\nuniform float u_time;uniform vec2 u_res;out vec4 o;\n", GLSL_COMMON_STR, FS_D3_BODY);
}

#ifndef EW_W
#define EW_W 1280
#define EW_H 720
#endif
#define W EW_W
#define H EW_H
#define DUR 12
#define FPS 30

static const char *GLSL_COMMON =
    "#version 330 core\n"
    "uniform vec2 u_res;\n"
    "float ew_hash(vec2 p){return fract(sin(dot(p,vec2(127.1,311.7)))*43758.5453);}\n"
    "float ew_noise(vec2 p){vec2 i=floor(p),f=fract(p);f=f*f*(3.-2.*f);\n"
    " return mix(mix(ew_hash(i),ew_hash(i+vec2(1,0)),f.x),mix(ew_hash(i+vec2(0,1)),ew_hash(i+vec2(1,1)),f.x),f.y);}\n"
    "float ew_fbm(vec2 p){float a=0.5,s=0.0;for(int i=0;i<5;i++){s+=a*ew_noise(p);p=p*2.07+vec2(1.7,9.2);a*=0.5;}return s;}\n"
    "mat2 ew_rot(float a){float c=cos(a),s=sin(a);return mat2(c,-s,s,c);}\n";

static const char *VS_TRI =
    "#version 330 core\n"
    "const vec2 v[3]=vec2[3](vec2(-1.,-1.),vec2(3.,-1.),vec2(-1.,3.));\n"
    "void main(){gl_Position=vec4(v[gl_VertexID],0.,1.);}";

/* ============ A3 NEURAL SANCTUM — raymarched warped sanctum ============ */
static const char *FS_A3_BODY =
    "float smin(float a,float b,float k){float h=clamp(0.5+0.5*(b-a)/k,0.,1.);return mix(b,a,h)-k*h*(1.-h);}\n"
    "float map(vec3 p){\n"
    " vec3 q=p; q.z=mod(q.z+0.35*u_time*3.0,7.0)-3.5;\n"
    " /* domain warp: neural tissue displacement */\n"
    " q.x+=0.25*ew_fbm(q.xy*1.5+u_time*0.2)-0.12;\n"
    " q.y+=0.25*ew_fbm(q.zy*1.3-u_time*0.15)-0.12;\n"
    " float walls=3.1-abs(q.x);\n"
    " walls=min(walls,3.4-abs(q.y));\n"
    " /* pillars with folded cross-section */\n"
    " vec2 pc=vec2(mod(q.x+1.8,3.6)-1.8,q.y+0.9);\n"
    " pc=abs(pc)-0.18; pc=max(pc,-pc); pc=ew_rot(0.78)*pc; pc=abs(pc)-0.10;\n"
    " float pillar=length(max(pc,vec2(0.)))+min(max(pc.x,pc.y),0.)-0.06;\n"
    " float d=min(walls,pillar);\n"
    " /* floating signal rings (rotating, beat-locked) */\n"
    " float bt=fract(u_time*2.0); float bp=mod(q.z+u_time*2.4,3.5)-1.75;\n"
    " float ring=abs(length(q.xz*vec2(1.0,0.45))-1.9)-0.05-0.03*exp(-bt*6.0);\n"
    " ring=max(ring,abs(bp)-0.06);\n"
    " d=min(d,ring*0.9);\n"
    " return d;\n}\n"
    "vec3 ew_norm(vec3 p){float e=0.0012;vec2 k=vec2(1,-1);\n"
    " return normalize(k.xyy*map(p+k.xyy*e)+k.yyx*map(p+k.yyx*e)+k.yxy*map(p+k.yxy*e)+k.xyx*map(p+k.xyx*e));}\n"
    "void main(){\n"
    " vec2 uv=(gl_FragCoord.xy*2.0-u_res)/u_res.y;\n"
    " float t=u_time; float beat=fract(t*2.0);\n"
    " vec3 ro=vec3(0.0,0.05+0.08*sin(t*0.5),t*3.0);\n"
    " vec3 rd=normalize(vec3(uv,1.5+0.5*exp(-beat*7.0)));\n"
    " rd.xy=ew_rot(sin(t*0.25)*0.05)*rd.xy;\n"
    " float d=0.02;vec3 p=ro;float shafts=0.0;float mmax=0.0;\n"
    " for(int i=0;i<110;i++){p=ro+rd*d;float dd=map(p);\n"
    "  /* volumetric shafts: red from left wall, cyan from right wall */\n"
    "  shafts+=exp(-abs(dd)*10.0)*exp(-abs(p.x-1.8)*0.8)*vec3(1.0,0.12,0.06).r*0.02;\n"
    "  shafts+=exp(-abs(dd)*10.0)*exp(-abs(p.x+1.8)*0.8)*vec3(0.06,0.5,0.6).r*0.02;\n"
    "  if(dd<0.0015)break; d+=max(dd*0.85,0.004); if(d>55.0)break; mmax=max(mmax,dd);}\n"
    " vec3 col=vec3(0.006,0.008,0.014);\n"
    " if(d<55.0){vec3 n=ew_norm(p);\n"
    "  float dr=max(dot(n,normalize(vec3(0.5,0.35,-0.6))),0.0);\n"
    "  float dc=max(dot(n,normalize(vec3(-0.4,-0.15,0.7))),0.0);\n"
    "  vec3 base=vec3(0.07,0.09,0.13);\n"
    "  col=base*(dr*vec3(1.0,0.18,0.09)*3.6+dc*vec3(0.12,0.62,0.78)*1.8);\n"
    "  col+=vec3(0.6,0.09,0.04)*exp(-max(p.y,0.0)*0.8)*0.45*dr;\n"
    "  float fog=1.0-exp(-d*0.05);\n"
    "  vec3 fogc=vec3(0.006,0.008,0.014)+vec3(0.12,0.018,0.007)*max(0.0,-rd.x);\n"
    "  col=mix(col,fogc,fog);}\n"
    " col+=vec3(0.6,0.10,0.04)*shafts*3.0;\n"
    " col+=vec3(0.08,0.5,0.62)*shafts*1.2;\n"
    " /* cyan portal at corridor end */\n"
    " col+=vec3(0.10,0.85,1.00)*pow(max(dot(rd,normalize(vec3(0.0,0.05,1.0))),0.0),50.0)*(1.6+0.5*sin(t*1.2));\n"
    " col*=1.45; col=col/(1.0+col);\n"
    " col+=(ew_hash(gl_FragCoord.xy+t)-0.5)/85.0;\n"
    " o=vec4(col,1.0);}";

/* ============ B3 GLYPH SWARM — analytic swarm, beat dynamics ============ */
static const char *FS_B3_BODY =
    "float h1(float n){return fract(sin(n*12.9898)*43758.5453);}\n"
    "void main(){\n"
    " vec2 uv=(gl_FragCoord.xy*2.0-u_res)/u_res.y;\n"
    " float t=u_time;\n"
    " float beat=fract(t*2.0); float bexp=exp(-beat*5.0);\n"
    " float cl=smoothstep(7.0,10.0,t)*(1.0-smoothstep(10.0,12.0,t));\n"
    " vec3 col=vec3(0.003,0.005,0.009)*(1.0+0.8*bexp);\n"
    " /* vignette-free deep field: 480 glyph-particles, 2 passes (near/far) */\n"
    " for(int layer=0;layer<2;layer++){\n"
    "  int count=(layer==0)?320:160; float scale=(layer==0)?1.0:0.55; float sz=(layer==0)?0.022:0.016;\n"
    "  for(int i=0;i<count;i+=4){\n"
    "   for(int j=0;j<4;j++){\n"
    "    float fi=float(i+j); float s1=h1(fi*0.753+float(layer)*7.1); float s2=h1(fi*1.311+2.0+float(layer)*3.7); float s3=h1(fi*2.077+5.0);\n"
    "    float ph=s1*6.2831;\n"
    "    float r=(0.14+0.92*s2)*(1.0-0.55*cl*(0.3+0.7*s3));\n"
    "    vec2 p=vec2(sin(ph*1.4+t*(0.4+0.3*s1))*r*1.55, cos(ph*1.1+t*(0.35+0.25*s2))*r*0.95);\n"
    "    p+=vec2(sin(t*2.0+s1*40.0),cos(t*2.0+s2*40.0))*bexp*0.06;\n"
    "    p*=scale;\n"
    "    float d=length(uv-p);\n"
    "    /* glyph: small cross/box shape instead of dot */\n"
    "    vec2 g=(uv-p)*vec2(1.0,-1.0)/sz;\n"
    "    g=abs(g)-vec2(0.35); float box=length(max(g,0.0));\n"
    "    float cross=max(smoothstep(0.22,0.05,abs(g.x)),smoothstep(0.22,0.05,abs(g.y)))*smoothstep(0.9,0.5,box);\n"
    "    float halo=exp(-d*d*90.0)*0.22;\n"
    "    float cyanm=clamp(1.25-cl*1.6-s2*0.4,0.0,1.0);\n"
    "    vec3 pc=mix(vec3(0.12,0.88,1.0),vec3(1.0,0.16,0.08),1.0-cyanm);\n"
    "    col+=pc*(cross*(0.55+0.3*bexp)+halo);\n"
    "   }\n"
    "  }\n"
    " }\n"
    " /* horizontal streaks (motion energy) */\n"
    " float streak=exp(-abs(uv.y)*6.0)*exp(-fract(t*2.0)*4.0)*0.08;\n"
    " col+=vec3(0.4,0.8,0.9)*streak;\n"
    " col=col/(1.0+col);\n"
    " float lum=dot(col,vec3(0.333));\n"
    " col=mix(vec3(lum),col,1.0-0.3*smoothstep(0.55,0.95,lum));\n"
    " o=vec4(col,1.0);}";

/* ============ C3 WOBBLE BASIN — warped terrain, red sun in frame ============ */
static const char *FS_C3_BODY =
    "float wob(float t,float p){return sin(t*4.0+p*0.35)*0.35*(0.6+0.4*sin(t*0.5));}\n"
    "float terrain(vec2 p){\n"
    " p*=0.05; p.y+=u_time*1.1;\n"
    " /* domain warp: terrain warps itself */\n"
    " vec2 w=vec2(ew_fbm(p*0.8+u_time*0.05),ew_fbm(p*0.8-4.2));\n"
    " float h=ew_fbm(p+w*2.2)*6.5;\n"
    " h+=wob(u_time,p.x+p.y)*1.1;\n"
    " return h-2.2;\n}\n"
    "vec3 ew_normT(vec2 p){float e=0.05;\n"
    " return normalize(vec3(terrain(p-vec2(e,0))-terrain(p+vec2(e,0)),2.0*e,terrain(p-vec2(0,e))-terrain(p+vec2(0,e))));}\n"
    "void main(){\n"
    " vec2 uv=(gl_FragCoord.xy*2.0-u_res)/u_res.y;\n"
    " float t=u_time;\n"
    " vec3 ro=vec3(0.0,1.15,t*6.0);\n"
    " vec3 rd=normalize(vec3(uv.x*0.95,uv.y*0.85+0.12,1.1));\n"
    " rd.xz=ew_rot(sin(t*0.22)*0.1)*rd.xz;\n"
    " float d=0.1;float hit=0.0;vec3 p=ro;\n"
    " for(int i=0;i<150;i++){p=ro+rd*d;float h=terrain(p.xz)-p.y;\n"
    "  if(h<0.008){hit=1.0;break;} d+=max(0.05,h*0.45); if(d>80.0)break;}\n"
    " /* sky: red sun IN FRAME at horizon center-left, cyan haze band */\n"
    " vec3 sun_dir=normalize(vec3(-0.28,0.22,0.95));\n"
    " vec3 col=vec3(0.010,0.012,0.020);\n"
    " float sd=max(dot(rd,sun_dir),0.0);\n"
    " col+=vec3(1.0,0.14,0.05)*pow(sd,900.0)*3.0;          /* sun disc */\n"
    " col+=vec3(0.95,0.18,0.06)*pow(sd,8.0)*0.55;          /* sun glow */\n"
    " col+=vec3(0.05,0.30,0.38)*exp(-abs(rd.y-0.02)*14.0)*0.5;  /* cyan haze band at horizon */\n"
    " float st=ew_hash(floor(gl_FragCoord.xy*0.5)+floor(t*4.0));\n"
    " col+=vec3(0.5,0.7,0.8)*step(0.9985,st)*rd.y*2.0;     /* faint stars above horizon */\n"
    " if(hit>0.5){vec3 n=ew_normT(p.xz);\n"
    "  float dif=max(dot(n,normalize(vec3(-0.28,0.35,0.8))),0.0);\n"
    "  vec3 base=vec3(0.03,0.05,0.07);\n"
    "  base+=vec3(0.05,0.07,0.09)*(ew_fbm(p.xz*0.15)-0.5)*1.6;\n"
    "  float lines=smoothstep(0.05,0.0,abs(fract(p.y*3.0)-0.5)-0.30);\n"
    "  base+=vec3(0.08,0.34,0.42)*lines*0.8;\n"
    "  base+=vec3(0.9,0.18,0.06)*dif*0.9;                 /* red sun rim on terrain */\n"
    "  float fog=1.0-exp(-d*0.055); col=mix(base*(0.35+dif*1.4),vec3(0.05,0.14,0.20),fog);}\n"
    " col*=1.3; col=col/(1.0+col*0.85);\n"
    " col+=(ew_hash(gl_FragCoord.xy+t*7.0)-0.5)/255.0;\n"
    " o=vec4(col,1.0);}";

/* ============ D3 NEON MITOSIS — kaleido-IFS fractal organism, red neon ============ */
static const char *FS_D3_BODY =
    "float smin(float a,float b,float k){float h=clamp(0.5+0.5*(b-a)/k,0.,1.);return mix(b,a,h)-k*h*(1.-h);}\n"
    "float map(vec3 p,float t){\n"
    " float sc=1.0;\n"
    " for(int i=0;i<6;i++){\n"
    "  p=abs(p)-vec3(0.85,0.70,0.55);\n"
    "  p.xy*=ew_rot(0.42+0.14*sin(t*0.31)+0.06*sin(t*0.9+float(i)));\n"
    "  p.xz*=ew_rot(0.33*t*0.12+0.10*cos(t*0.23+float(i)*1.7));\n"
    "  p*=1.38; sc*=1.38;\n"
    "  p+=vec3(0.10*sin(t*0.7+float(i)*2.1),0.08*cos(t*0.5+float(i)),0.06*sin(t*0.33));\n"
    " }\n"
    " float core=length(p)-0.62;\n"
    " float lobes=length(abs(p.xy)-vec2(0.28,0.22))-0.14;\n"
    " float d=smin(core,lobes,0.10);\n"
    " return d/sc;\n}\n"
    "vec3 ew_normD(vec3 p,float t){float e=0.0015;vec2 k=vec2(1,-1);\n"
    " return normalize(k.xyy*map(p+k.xyy*e,t)+k.yyx*map(p+k.yyx*e,t)+k.yxy*map(p+k.yxy*e,t)+k.xyx*map(p+k.xyx*e,t));}\n"
    "void main(){\n"
    " vec2 uv=(gl_FragCoord.xy*2.0-u_res)/u_res.y;\n"
    " float t=u_time;\n"
    " float beat=fract(t*2.0); float bexp=exp(-beat*5.0);\n"
    " vec3 ro=vec3(0.0,0.0,-2.6+0.35*sin(t*0.27));\n"
    " vec3 rd=normalize(vec3(uv*1.05,1.7));\n"
    " rd.xy=ew_rot(sin(t*0.21)*0.22)*rd.xy;\n"
    " float d=0.35;vec3 p=ro;float glow=0.0;float hit=0.0;\n"
    " for(int i=0;i<110;i++){p=ro+rd*d;float dd=map(p,t);\n"
    "  /* red neon membrane glow accumulates along the march */\n"
    "  glow+=exp(-abs(dd)*14.0)*0.016;\n"
    "  if(dd<0.0012){hit=1.0;break;} d+=max(dd*0.8,0.0035); if(d>7.0)break;}\n"
    " vec3 col=vec3(0.006,0.004,0.008);\n"
    " if(hit>0.5){vec3 n=ew_normD(p,t);\n"
    "  float dif=max(dot(n,normalize(vec3(0.45,0.35,-0.6))),0.0);\n"
    "  float dc=max(dot(n,normalize(vec3(-0.5,-0.2,0.5))),0.0);\n"
    "  /* fold-index based material bands (procedural texture) */\n"
    "  float band=0.5+0.5*sin(dot(p,p)*24.0+t*1.3);\n"
    "  vec3 base=vec3(0.05,0.04,0.06)+vec3(0.10,0.015,0.02)*band;\n"
    "  col=base*(dif*vec3(1.0,0.16,0.07)*2.9+dc*vec3(0.10,0.5,0.62)*1.4);\n"
    "  float fog=1.0-exp(-d*0.4); col=mix(col,vec3(0.006,0.004,0.008),fog);}\n"
    " /* red neon organism glow + beat-cyan discharge */\n"
    " col+=vec3(1.0,0.10,0.05)*glow*(1.5+0.7*bexp);\n"
    " col+=vec3(0.08,0.6,0.75)*glow*0.5*bexp;\n"
    " col*=1.5; col=col/(1.0+col);\n"
    " float lum=dot(col,vec3(0.333));\n"
    " col=mix(vec3(lum),col,1.0-0.25*smoothstep(0.55,0.95,lum));\n"
    " col+=(ew_hash(gl_FragCoord.xy+t*3.0)-0.5)/120.0;\n"
    " o=vec4(col,1.0);}";

int main(int argc, char **argv) {
    if (argc < 2 || !strchr("ABCD", argv[1][0])) { fprintf(stderr, "usage: concepts3 <A|B|C|D>\n"); return 1; }
    char DIRC = argv[1][0];
    EGLDisplay dpy; EGLSurface surf; EGLContext ctx;
    int rc = ewtf_headless_init(W, H, &dpy, &surf, &ctx);
    if (rc) { fprintf(stderr, "EVIDENCE_FAIL: egl %d\n", rc); return 2; }
    ewtf_load_gl();
    ew_build_shaders();
    fprintf(stderr, "EVIDENCE: renderer=%s dir=%c\n", glGetString_p(GL_RENDERER), DIRC);

    const char *fs_sel = DIRC == 'A' ? FS_A3_FULL : (DIRC == 'B' ? FS_B3_FULL : (DIRC == 'D' ? FS_D3_FULL : FS_C3_FULL));
    unsigned prog = ewtf_program(VS_TRI, fs_sel);
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
        glDrawArrays_p(GL_TRIANGLES, 0, 3);
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
