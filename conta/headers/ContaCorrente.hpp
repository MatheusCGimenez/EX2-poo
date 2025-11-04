#pragma once
#include "Banco.hpp"

class ContaCorrente : public Banco {
public:
    ContaCorrente(int numeroConta, double saldoInicial);
    void sacar(double valor) override;
};
