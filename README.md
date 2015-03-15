#Experiments with OpenGL shaders  
##What you need  
-  glew
-  glu
-  glut
-  gl      
  
##How to compile (OSX)  
-  g++ -c Shader.cpp -o Shader.o  
-  g++ -c main.cpp -o main.o  
-  g++ Shader.o main.o -o main -framework GLUT -framework OpenGL -framework Cocoa  
  
