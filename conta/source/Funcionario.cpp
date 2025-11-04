#include "Funcionario.hpp"
#include <iostream>

Funcionario::Funcionario(const std::string& nome, int idade, const std::string& cargo, double salario)
    : Pessoa(nome, idade), cargo(cargo), salario(salario) {}

void Funcionario::exibirDados() const {
    Pessoa::exibirDados();
    std::cout << "Cargo: " << cargo << "\nSalario: R$ " << salario << std::endl;
}
