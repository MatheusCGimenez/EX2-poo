#ifndef PESSOA_H //PESSOA_H
#define PESSOA_H
#include <string>

class Pessoa {
 private:
  std::string name;

  Pessoa(const std::string& name) : name(name) {}
  virtual ~Pessoa() = default;
};

#endif  // PESSOA_H