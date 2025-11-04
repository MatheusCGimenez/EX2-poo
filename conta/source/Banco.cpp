#include "Banco.hpp"
#include <iostream>

Banco::Banco(int numeroConta, double saldoInicial)
    : numeroConta(numeroConta), saldo(saldoInicial) {}

void Banco::sacar(double valor) {
    if (valor <= saldo) {
        saldo -= valor;
        std::cout << "Saque de R$ " << valor << " realizado com sucesso.\n";
    } else {
        std::cout << "Saldo insuficiente!\n";
    }
}

void Banco::depositar(double valor) {
    saldo += valor;
    std::cout << "Deposito de R$ " << valor << " realizado com sucesso.\n";
}

void Banco::exibirSaldo() const {
    std::cout << "Saldo atual: R$ " << saldo << std::endl;
}
