/* ERROR.wtf — shared GL 3.3 core bootstrap for prototype/production renderers.
 * Function-pointer loading (EGL headless or GLFW window context), shader
 * compile/link helpers, fullscreen-triangle helper. No external deps beyond
 * GLFW/GL/EGL headers.
 */
#ifndef ERRORWTF_GL33_H
#define ERRORWTF_GL33_H

#include <GLFW/glfw3.h>
#include <GL/gl.h>
#include <EGL/egl.h>
#include <stdio.h>
#include <stdlib.h>

#define GLFN(name, ret, args) static ret (*name##_p) args;
GLFN(glClear, void, (unsigned))
GLFN(glClearColor, void, (float, float, float, float))
GLFN(glGetString, const char *, (unsigned))
GLFN(glViewport, void, (int, int, int, int))
GLFN(glReadPixels, void, (int, int, int, int, unsigned, unsigned, void *))
GLFN(glCreateShader, unsigned, (unsigned))
GLFN(glShaderSource, void, (unsigned, int, const char **, const int *))
GLFN(glCompileShader, void, (unsigned))
GLFN(glGetShaderiv, void, (unsigned, unsigned, int *))
GLFN(glGetShaderInfoLog, void, (unsigned, int, int *, char *))
GLFN(glCreateProgram, unsigned, (void))
GLFN(glAttachShader, void, (unsigned, unsigned))
GLFN(glLinkProgram, void, (unsigned))
GLFN(glGetProgramiv, void, (unsigned, unsigned, int *))
GLFN(glUseProgram, void, (unsigned))
GLFN(glGenVertexArrays, void, (int, unsigned *))
GLFN(glBindVertexArray, void, (unsigned))
GLFN(glGenBuffers, void, (int, unsigned *))
GLFN(glBindBuffer, void, (unsigned, unsigned))
GLFN(glBufferData, void, (unsigned, long, const void *, unsigned))
GLFN(glEnableVertexAttribArray, void, (unsigned))
GLFN(glVertexAttribPointer, void, (unsigned, int, unsigned, char, int, const void *))
GLFN(glDrawArrays, void, (unsigned, int, int))
GLFN(glGetUniformLocation, int, (unsigned, const char *))
GLFN(glUniform1f, void, (int, float))
GLFN(glUniform1i, void, (int, int))
GLFN(glUniform2f, void, (int, float, float))
GLFN(glUniform3f, void, (int, float, float, float))
GLFN(glEnable, void, (unsigned))
GLFN(glBlendFunc, void, (unsigned, unsigned))
GLFN(glGetError, unsigned, (void))

static void *ewtf_getfn(const char *n) {
    void *p = (void *)eglGetProcAddress(n);
    if (!p) { fprintf(stderr, "EVIDENCE_FAIL: missing %s\n", n); exit(2); }
    return p;
}
static void ewtf_load_gl(void) {
    glClear_p = ewtf_getfn("glClear"); glClearColor_p = ewtf_getfn("glClearColor");
    glGetString_p = ewtf_getfn("glGetString"); glViewport_p = ewtf_getfn("glViewport");
    glReadPixels_p = ewtf_getfn("glReadPixels"); glCreateShader_p = ewtf_getfn("glCreateShader");
    glShaderSource_p = ewtf_getfn("glShaderSource"); glCompileShader_p = ewtf_getfn("glCompileShader");
    glGetShaderiv_p = ewtf_getfn("glGetShaderiv"); glGetShaderInfoLog_p = ewtf_getfn("glGetShaderInfoLog");
    glCreateProgram_p = ewtf_getfn("glCreateProgram"); glAttachShader_p = ewtf_getfn("glAttachShader");
    glLinkProgram_p = ewtf_getfn("glLinkProgram"); glGetProgramiv_p = ewtf_getfn("glGetProgramiv");
    glUseProgram_p = ewtf_getfn("glUseProgram"); glGenVertexArrays_p = ewtf_getfn("glGenVertexArrays");
    glBindVertexArray_p = ewtf_getfn("glBindVertexArray"); glGenBuffers_p = ewtf_getfn("glGenBuffers");
    glBindBuffer_p = ewtf_getfn("glBindBuffer"); glBufferData_p = ewtf_getfn("glBufferData");
    glEnableVertexAttribArray_p = ewtf_getfn("glEnableVertexAttribArray");
    glVertexAttribPointer_p = ewtf_getfn("glVertexAttribPointer");
    glDrawArrays_p = ewtf_getfn("glDrawArrays");
    glGetUniformLocation_p = ewtf_getfn("glGetUniformLocation");
    glUniform1f_p = ewtf_getfn("glUniform1f"); glUniform1i_p = ewtf_getfn("glUniform1i");
    glUniform2f_p = ewtf_getfn("glUniform2f"); glUniform3f_p = ewtf_getfn("glUniform3f");
    glEnable_p = ewtf_getfn("glEnable"); glBlendFunc_p = ewtf_getfn("glBlendFunc");
    glGetError_p = ewtf_getfn("glGetError");
}

/* EGL pbuffer context (headless). Returns 0 on success. */
static int ewtf_headless_init(int w, int h, EGLDisplay *dpy, EGLSurface *surf, EGLContext *ctx) {
    eglBindAPI(EGL_OPENGL_API);
    *dpy = eglGetDisplay(EGL_DEFAULT_DISPLAY);
    if (*dpy == EGL_NO_DISPLAY || !eglInitialize(*dpy, NULL, NULL)) return 1;
    EGLint ca[] = { EGL_SURFACE_TYPE, EGL_PBUFFER_BIT, EGL_RED_SIZE, 8, EGL_GREEN_SIZE, 8,
                    EGL_BLUE_SIZE, 8, EGL_RENDERABLE_TYPE, EGL_OPENGL_BIT, EGL_NONE };
    EGLConfig cfg; EGLint nc = 0;
    if (!eglChooseConfig(*dpy, ca, &cfg, 1, &nc) || nc < 1) return 2;
    EGLint pa[] = { EGL_WIDTH, w, EGL_HEIGHT, h, EGL_NONE };
    *surf = eglCreatePbufferSurface(*dpy, cfg, pa);
    if (*surf == EGL_NO_SURFACE) return 3;
    EGLint cattrs[] = { EGL_CONTEXT_MAJOR_VERSION, 3, EGL_CONTEXT_MINOR_VERSION, 3, EGL_NONE };
    *ctx = eglCreateContext(*dpy, cfg, EGL_NO_CONTEXT, cattrs);
    if (*ctx == EGL_NO_CONTEXT) return 4;
    eglMakeCurrent(*dpy, *surf, *surf, *ctx);
    return 0;
}

/* compile+link a program from 2 sources; exits(2) with log on failure */
static unsigned ewtf_program(const char *vs, const char *fs) {
    unsigned v = glCreateShader_p(GL_VERTEX_SHADER);
    glShaderSource_p(v, 1, &vs, NULL); glCompileShader_p(v);
    int ok = 0; glGetShaderiv_p(v, GL_COMPILE_STATUS, &ok);
    if (!ok) { char lg[1024]; glGetShaderInfoLog_p(v, 1024, NULL, lg); fprintf(stderr, "VS: %s\n", lg); exit(2); }
    unsigned f = glCreateShader_p(GL_FRAGMENT_SHADER);
    glShaderSource_p(f, 1, &fs, NULL); glCompileShader_p(f);
    glGetShaderiv_p(f, GL_COMPILE_STATUS, &ok);
    if (!ok) { char lg[1024]; glGetShaderInfoLog_p(f, 1024, NULL, lg); fprintf(stderr, "FS: %s\n", lg); exit(2); }
    unsigned p = glCreateProgram_p();
    glAttachShader_p(p, v); glAttachShader_p(p, f); glLinkProgram_p(p);
    glGetProgramiv_p(p, GL_LINK_STATUS, &ok);
    if (!ok) { fprintf(stderr, "EVIDENCE_FAIL: link\n"); exit(2); }
    glUseProgram_p(p);
    return p;
}

static const char *EWTF_VS_TRI =
    "#version 330 core\n"
    "const vec2 v[3]=vec2[3](vec2(-1.,-1.),vec2(3.,-1.),vec2(-1.,3.));\n"
    "void main(){gl_Position=vec4(v[gl_VertexID],0.,1.);}";

/* fullscreen triangle bound to a VAO; vertices unused in shader but VAO required */
static void ewtf_bind_triangle(void) {
    unsigned vao, vbo;
    glGenVertexArrays_p(1, &vao); glBindVertexArray_p(vao);
    glGenBuffers_p(1, &vbo); glBindBuffer_p(GL_ARRAY_BUFFER, vbo);
    float tri[9] = { -1, -1, 0, 3, -1, 0, -1, 3, 0 };
    glBufferData_p(GL_ARRAY_BUFFER, sizeof tri, tri, GL_STATIC_DRAW);
    glEnableVertexAttribArray_p(0);
    glVertexAttribPointer_p(0, 3, GL_FLOAT, 0, 0, NULL);
    glViewport_p(0, 0, 1280, 720);
}

#endif
