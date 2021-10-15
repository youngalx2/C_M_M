#include <iostream>

using namespace std;

// cria a classe Conta
class Conta
{
public:
    Conta(int); // cria o construtor
    void setSaldo( int ); // função para configurar o valor do saldo
    int getSaldo(); // para retornar o valor do saldo
    void creditoParaConta(int); // adiciona valores na conta
    void debitoNaConta(int); // saque na conta
    int  saldoAtual(); // mostra o saldo atual

private:
    int saldoDaConta; // variável da classe
}; // fim classe
