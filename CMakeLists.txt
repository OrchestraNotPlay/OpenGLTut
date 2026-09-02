cmake_minimum_required(VERSION 4.4.2)
project(OpenGLTut)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -Wall -Werror -Wextra -Wpedantic -Weffc++")
set(CMAKE_CXX_FLAGS_DEBUG "${CMAKE_CXX_FLAGS_DEBUG} -g -O0 -fsanitize=address")
set(CMAKE_CXX_FLAGS_RELEASE "${CMAKE_CXX_FLAGS_RELEASE} -O3 -march=native -DNDEBUG")

set(SOURCES
  src/main.cpp
  src/glad.c
)

add_executable(OpenGLTut ${SOURCES})

target_include_directories(OpenGLTut PRIVATE include)
target_link_libraries(OpenGLTut PRIVATE glfw GL X11 pthread Xi dl)
