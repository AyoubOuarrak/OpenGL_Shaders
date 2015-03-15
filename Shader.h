#ifndef _SHADER_HH_GUARD
#define _SHADER_HH_GUARD

#if ((defined(__MACH__)) && (defined(__APPLE__)))   
#include <cstdlib>
#include <OpenGL/gl.h>
#include <GLUT/glut.h>
#include <OpenGL/glext.h>
#else
#include <cstdlib>
#include <GL/glew.h>
#include <GL/gl.h>
#include <GL/glut.h>
#include <GL/glext.h>
#endif

#include <string>


class Shader {

private:
   unsigned int shader_id;
   unsigned int shader_fp;
   unsigned int shader_vp;

public:
   Shader();
   Shader(const char* vsFile, const char* fsFile);
   ~Shader();

   void init(const char* vsFile, const char* fsFile);
   void bind();
   void unBind();
   unsigned int id();
};

#endif