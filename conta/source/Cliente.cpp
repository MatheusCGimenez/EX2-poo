#include "Cliente.hpp"
#include <iostream>

Cliente::Cliente(const std::string& nome, int idade, int numeroConta)
    : Pessoa(nome, idade), numeroConta(numeroConta) {}

void Cliente::exibirDados() const {
    Pessoa::exibirDados();
    std::cout << "Num da conta: " << numeroConta << std::endl;
}
