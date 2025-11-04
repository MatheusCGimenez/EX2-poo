#pragma once
#include <iostream>

class Banco {
protected:
    int numeroConta;
    double saldo;

public:
    Banco(int numeroConta, double saldoInicial);
    virtual void sacar(double valor);
    virtual void depositar(double valor);
    virtual void exibirSaldo() const;
};
