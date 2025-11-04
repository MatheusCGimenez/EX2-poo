#pragma once
#include <string>

class Pessoa {
protected:
    std::string nome;
    int idade;

public:
    Pessoa(const std::string& nome, int idade);
    virtual void exibirDados() const;
};
