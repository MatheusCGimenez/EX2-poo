#include "Pessoa.hpp"
#include <iostream>

Pessoa::Pessoa(const std::string& nome, int idade)
    : nome(nome), idade(idade) {}

void Pessoa::exibirDados() const {
    std::cout << "Nome: " << nome << "\nIdade: " << idade << std::endl;
}
