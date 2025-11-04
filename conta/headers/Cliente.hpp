#pragma once
#include "Pessoa.hpp"

class Cliente : public Pessoa {
private:
    int numeroConta;

public:
    Cliente(const std::string& nome, int idade, int numeroConta);
    void exibirDados() const override;
};
