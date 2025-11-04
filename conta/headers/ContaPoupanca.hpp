#pragma once
#include "Banco.hpp"

class ContaPoupanca : public Banco {
public:
    ContaPoupanca(int numeroConta, double saldoInicial);
    void sacar(double valor) override;
};
