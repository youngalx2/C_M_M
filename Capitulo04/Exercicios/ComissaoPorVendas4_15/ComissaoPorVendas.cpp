/*
    4.15 Uma grande indústria química paga sua equipe de vendas por comissão.
    Os vendedores recebem $200 por semana mais 9% de suas vendas  brutas por semana.
    Por exemplo, um vendedor que comercializa um valor de $5.000 em produtos
    químicos por semana recebe $200 mais 9% de $5.000, ou um total de $650.
    Desenvolva um programa em C++ que utiliza uma instrução while para inserir
    as vendas brutas  de cada vendedor durante a última semana e calcula e exibe
    os rendimentos desse vendedor. Processe os números de um vendedor por  vez.
    Deitel, Harvey; Paul, Harvey. C++ Como Programar (p. 135). Edição do Kindle.
    Deitel, Harvey; Paul, Harvey. C++ Como Programar (p. 134). Edição do Kindle.
    Autor: Pedro Filho, 16/08/2021
*/

#include <iostream>
#include <locale>
#include <iomanip>

#include "ComissaoPorVida.h"

using namespace std;

// cria as funções membros da classe Comissão por vendas
void ComissaoPorVendas::setValorDaVenda( double valor )
{
    // se valor maior que zero
    if( valor > 0 )
    {
        // venda recebe o valor
        valorDaVenda = valor;
    } // fim if
} // fim função

// função getValordaVenda
double ComissaoPorVendas::getValorDaVenda()
{
    // retornar o valor da venda
    return valorDaVenda;
} // fim função

// função entrada de dados
void ComissaoPorVendas::entradaDeDados()
{
    cout << "Entre com o valor da venda (-1 = sair) R$";
    cin >> valorDaVenda;

    // enquanto valor maior que zero
    while( valorDaVenda != -1 )
    {
        // chama a função mostra salário
        mostrarSalario();

        // entrada de dados
        cout << "\nEntre com o valor da venda (-1 = sair) R$";
        cin >> valorDaVenda;

    } // fim while
} // fim função

// função mostrarSalario
void ComissaoPorVendas::mostrarSalario()
{
    // cria variáveis
    // calcula o valor da comissão
    double comissao = getValorDaVenda() * 9 / 100;
    double salario = 200.00 + comissao; // calcula o valor do salário

    // imprime o valor do salário
    cout << "Salário R$" << setprecision( 2 ) << fixed <<  salario << endl;
} // fim função
