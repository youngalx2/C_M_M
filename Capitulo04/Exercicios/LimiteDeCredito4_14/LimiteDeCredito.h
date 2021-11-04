// Cria a classe limite de crédito
#include <iostream>

using namespace std;

// cria a classe
class LimiteDeCredito
{
public:
    void setNumDaConta( int ); // configura o número da conta
    int getNumDaConta(); // retorna o número da conta configurado

    void setSaldoInicial( double ); // configura o saldo inicial
    double getSaldoInicial(); // retorna o saldo inicial

    void setTotalDaTaxa( double ); // configura o total da taxa
    double getTotalDaTaxa(); // retorna o total da taxa

    void setTotalDeCredito( double ); // configura o total de crédito
    double getTotalDeCredito(); // retorna o total de crédito

    void setLimiteDeCredito( double ); // configura o limite de crédito
    double getLimiteDeCredito(); // retorna o valor do limite

    void setSaldoAtual( double, double, double ); // configura o saldo atual
    double getSaldoAtual(); // retorna o saldo atual

    void entradaDeDados(); // usuário entra com os dados para a classe LimiteDeCredito

    void mostraResultado(); // mostar o Resultado

private:
    int numeroDaConta;
    double saldoInicial;
    double taxas;
    double totalDeCredito;
    double limiteDeCredito;
    double saldoAtual;

}; // fim classe
