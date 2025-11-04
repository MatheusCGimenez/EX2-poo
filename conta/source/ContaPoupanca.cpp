#include "ContaPoupanca.hpp"
#include <iostream>

ContaPoupanca::ContaPoupanca(int numeroConta, double saldoInicial)
    : Banco(numeroConta, saldoInicial) {}

void ContaPoupanca::sacar(double valor) {
    if (valor <= saldo) {
        saldo -= valor;
        std::cout << "Saque de R$ " << valor << " realizado com sucesso (Poupanca).\n";
    } else {
        std::cout << "Saldo insuficiente na poupanca.\n";
    }
}
