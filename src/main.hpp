#pragma once

#include <GLFW/glfw3.h>

// callback for resize window
void framebuffer_size_callback(GLFWwindow *, int width, int height);

// handle input
void processInput(GLFWwindow *window);
