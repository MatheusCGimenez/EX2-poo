#ifndef CONTA_H
#define CONTA_H
#include <string>

class Conta {
  private:
  std::string tipoConta;

  public:
  Conta(const std::string& tipoConta) : tipoConta(tipoConta){}
  virtual ~Conta() = default;

  protected:
  virtual void sacar() = 0;
  virtual void depositar() = 0;
};

#endif  // CONTA_H