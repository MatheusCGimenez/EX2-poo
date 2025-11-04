#pragma once
#include "Pessoa.hpp"
#include <string>

class Funcionario : public Pessoa {
private:
    std::string cargo;
    double salario;

public:
    Funcionario(const std::string& nome, int idade, const std::string& cargo, double salario);
    void exibirDados() const override;
};
