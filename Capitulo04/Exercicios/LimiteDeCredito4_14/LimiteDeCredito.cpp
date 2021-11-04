/*
    4.14 Desenvolva um programa C++ que determinará se um cliente de uma loja
    de departamentos excedeu o limite de crédito em uma conta  corrente.
    Para cada cliente, os seguintes fatos estão disponíveis:
    a) Número de conta (um inteiro)
    b) Balanço no início do mês
    c) Total de todos os itens cobrados desse cliente no mês
    d) Total de pagamentos feitos pelo cliente no mês
    e) Limite autorizado de crédito
    O programa deve utilizar uma instrução while para inserir cada um desses fatos,
    calcular o novo saldo (= saldo inicial + taxas – créditos)  e determinar se o novo
    saldo excede o limite de crédito do cliente. Para aqueles clientes cujo limite de
    crédito é excedido, o programa  deve exibir o número da conta do cliente, o limite
    de crédito, o novo saldo e a mensagem ‘Limite de crédito excedido’.
    Deitel, Harvey; Paul, Harvey. C++ Como Programar (p. 134). Edição do Kindle.
    Autor: Pedro Filho, 15/08/2021
*/

#include <iostream>
#include <iomanip>
#include "LimiteDeCredito.h"

using namespace std;

void LimiteDeCredito::setNumDaConta( int numero ) // configura o número da conta
{
    // se número da conta maior que zero
    if( numero > 0 )
    {
        numeroDaConta = numero; // número da conta recebe número
    } // fim if
} // fim função

int LimiteDeCredito::getNumDaConta() // retorna o número da conta configurado
{
    // retorna o número da conta
    return numeroDaConta;
} // fim função get


void LimiteDeCredito::setSaldoInicial( double valor ) // configura o saldo inicial
{
    // se o valor for maior que zero
    if( valor > 0 )
    {
        // saldo inicial recebe o valor
        saldoInicial = valor;
    } // fim if
} // fim saldo

double LimiteDeCredito::getSaldoInicial() // retorna o saldo inicial
{
    return saldoInicial;
} // fim getSaldo

void LimiteDeCredito::setTotalDaTaxa( double valor ) // configura o total da taxa
{
    if( valor > 0 )
    {
        taxas = valor;
    } // fim if
} // fim função

double LimiteDeCredito::getTotalDaTaxa() // retorna o total da taxa
{
    return taxas;
}// fim get

void LimiteDeCredito::setTotalDeCredito( double valor ) // configura o total de crédito
{
    if( valor > 0 )
    {
        totalDeCredito = valor;
    } // fim if
} // fim unção get

double LimiteDeCredito::getTotalDeCredito()
{
    return totalDeCredito;
} // fim get

void LimiteDeCredito::setLimiteDeCredito( double valor )
{
    if( valor > 0 )
    {
        limiteDeCredito = valor;
    } // fim if
} // fim função setLimite

double LimiteDeCredito::getLimiteDeCredito() // retorna o valor do limite
{
    return limiteDeCredito;
} // fim get

void LimiteDeCredito::setSaldoAtual(double valorInicial, double taxa, double credito) // configura o saldo atual
{
    saldoAtual = valorInicial + taxa - credito;
} // fim função

double LimiteDeCredito::getSaldoAtual() // reetorna o saldo atual
{
    return saldoAtual;
} // fim get

void LimiteDeCredito::mostraResultado()
{
    double saldo = getSaldoAtual();
    double limite = getLimiteDeCredito();

    cout << "\Conta:\t\t\t"<< getNumDaConta() << endl;
    cout << "Saldo inicial:\t\t" << setprecision( 2 ) << fixed << getSaldoInicial() << endl;
    cout << "Taxa:\t\t\t" << getTotalDaTaxa() << "%" << endl;
    cout << "Total de crédito:\t" << getTotalDeCredito() << endl;
    cout << "Limite de crédito:\t" <<  getLimiteDeCredito() << endl;
    cout << "Saldo atual:\t\t" << getSaldoAtual() << endl;

    // se saldo atual menor que limite de crédito
    if( saldo < limite )
    {
        // imprima
        cout << "Limite de crédito ultrapassado!" << endl;
    } // fim if

} // fim função mostraResultado

// cria função para a entrada de dados pelo usuário
void LimiteDeCredito::entradaDeDados()
{
    // variáveis
    int conta;
    double saldoInicial;
    double taxas;
    double totalDeCredito;
    double limiteDeCredito;
    double saldoAtual;

    // entrada de dados
    cout << "Entre com o número da conta (-1 = sair): ";
    cin >> conta; // usuário entra com o número da conta

    // enquanto o número da conta diferente de -1
    while( conta != -1 )
    {
        // se p número da conta maior que zero
        if( conta > 0 )
        {
            // chama a função setNumDaConta que recebe o número da conta
            setNumDaConta( conta );

            // entrada de dados
            cout << "Entre com o saldo inicial: ";
            cin >> saldoInicial;
            setSaldoInicial( saldoInicial );

            cout << "Entre com o total da taxa: ";
            cin >> taxas;
            setTotalDaTaxa( taxas );

            cout << "Entre com o total de crédito: ";
            cin >> totalDeCredito;
            setTotalDeCredito( totalDeCredito );

            cout << "Entre com o limite de crédito: ";
            cin >> limiteDeCredito;
            setLimiteDeCredito(limiteDeCredito);

            // chama a função setSaldoAtual
            setSaldoAtual( saldoInicial, taxas, totalDeCredito );

        } // fim if

        // chama a função mostra resultado
        mostraResultado();

        // entrada de dados
        cout << "\nEntre com o número da conta (-1 = sair): ";
        cin >> conta; // usuário entra com o número da conta

    } // fim while

} // fim função entrada de dados
