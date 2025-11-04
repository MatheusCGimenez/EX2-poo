#include <iostream>
#include "Cliente.hpp"
#include "Funcionario.hpp"
#include "ContaCorrente.hpp"
#include "ContaPoupanca.hpp"

int main() {
    Cliente cliente("Matheus Gimenez", 21, 1010);
    Funcionario funcionario("Alex dos Santos", 28, "Atendente", 2500.0);

    ContaCorrente cc(1010, 100.0);
    ContaPoupanca cp(2020, 200.0);

    std::cout << "\n=== Dados do cliente ===\n";
    cliente.exibirDados();

    std::cout << "\n=== Dados do funcionario ===\n";
    funcionario.exibirDados();

    std::cout << "\n=== Operacoes ===\n";
    cc.exibirSaldo();
    cc.depositar(50);
    cc.sacar(120);

    std::cout << "\n";
    cp.exibirSaldo();
    cp.sacar(50);

    return 0;
}
