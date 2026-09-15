#pragma once

#include <string>

class Shader {
public:
  // program ID
  unsigned int ID{};

  // constructor reads and builds the shader
  Shader(const char *vertexPath, const char *fragmentPath);

  // use shader
  void use();

  // utility uniform functions
  void set(const std::string &name, bool value) const;
  void set(const std::string &name, int value) const;
  void set(const std::string &name, float value) const;
};
