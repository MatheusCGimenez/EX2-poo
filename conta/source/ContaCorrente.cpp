#include "ContaCorrente.hpp"
#include <iostream>

ContaCorrente::ContaCorrente(int numeroConta, double saldoInicial)
    : Banco(numeroConta, saldoInicial) {}

void ContaCorrente::sacar(double valor) {
    double taxa = 3.5; 
    double total = valor + taxa;

    if (total <= saldo) {
        saldo -= total;
        std::cout << "Saque de R$ " << valor << " com taxa de R$ " << taxa << " realizado com sucesso.\n";
    } else {
        std::cout << "Saldo insuficiente para saque + taxa.\n";
    }
}
