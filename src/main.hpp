#pragma once

#include <GLFW/glfw3.h>

#define WIDTH 800
#define HEIHGT 600

// callback for resize window
void framebuffer_size_callback(GLFWwindow *, int width, int height);

// handle input
void processInput(GLFWwindow *window);

// shader error check
void shaderErrCheck(unsigned int *shader);
