
#include <iostream>
#include "Conta.h"

using namespace std;

int main()
{
    // cria variáveis
    int deposito = 0;
    int saque = 0;

    // cria o objeto da classe Conta
    Conta minhaConta( 1000 );
    Conta minhaConta2( 500 );

    // cabeçalho
    cout << "EXTRATO DA CONTA\n";

    // inprime o valor inicial da conta
    cout << "minhaConta Saldo inicial: R$" << minhaConta.getSaldo() << endl;
    cout << "minhaConta2 saldo inicial R$" << minhaConta2.getSaldo() << endl;
    cout << endl;

    // entrada de dados
    cout << "Digite o valor do depósito R$";
    cin >> deposito;
    minhaConta2.creditoParaConta(deposito);
    minhaConta.creditoParaConta( deposito );

    cout << endl;
    // mostra dados atuais
    cout << "minhaConta saldo atual R$" << minhaConta.saldoAtual() << endl;
    cout << "minhaConta2 saldo atual R$" << minhaConta2.saldoAtual() << endl;

    // ENTRADA DE dados
    cout << "\nDigite o valor do saque R$";
    cin >> saque;
    minhaConta2.debitoNaConta( saque );
    minhaConta.debitoNaConta( saque );

    cout << endl;
    // mostra dados atuais
    cout << "minhaConta saldo atual R$" << minhaConta.saldoAtual() << endl;
    cout << "minhaConta2 saldo atual R$" << minhaConta2.saldoAtual() << endl;

    return 0;
} // fim main
