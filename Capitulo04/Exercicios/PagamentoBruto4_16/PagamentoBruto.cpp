/*
    4.16 Desenvolva um programa em C++ que utiliza uma instrução while para
    determinar o pagamento bruto de cada um dos vários funcionários.
    A empresa paga ‘hora normal’ pelas primeiras 40 horas trabalhadas por empregado
    e paga ‘horas extras’ com 50% de gratificação para  todas as horas trabalhadas além
    das primeiras 40 horas. Você recebe uma lista dos empregados da empresa,
    o número de horas trabalhadas  por empregado na última semana e o salário-hora de
    cada empregado. Seu programa deve aceitar a entrada dessas informações para cada
    empregado e então determinar e exibir o salário bruto do
    Deitel, Harvey; Paul, Harvey. C++ Como Programar (p. 135). Edição do Kindle.
    Autor: Pedro Filho, 16/08/2021
*/

#include <iostream>
#include <locale>
#include <iomanip>

#include "PagamentoBruto.h"

using namespace std;

// cria as funções-membro da classe PagamentoBruto
// cria a função set para configurar às horas trabalhadas
void PagamentoBruto::setHorasTrabalhadas( int valor )
{
    // se o valor maior que zero
    if( valor > 0 )
    {
        // horasTrabalhadas recebo o valor
        horasTrabalhadas = valor;
    } // fim if
} // fim função

// função que retorna às horas trabalhadas
int PagamentoBruto::getHorasTrabalhadas()
{
    // retorna às horas trabalhadas
    return horasTrabalhadas;
} // fim função get

// função que configura o valor da hora
void PagamentoBruto::setValorDaHora( double valor )
{
    // se valor maior que zero
    if( valor > 0 )
    {
        // valor da hora recebe o valor
        valorDaHora = valor;
    } // fim if
} // fim função

// função que retorna o valor da hora
double PagamentoBruto::getValorDaHora()
{
    // retorne o valor
    return valorDaHora;
} // fim get

// função para confirura o salário
void PagamentoBruto::setSalario( double hora, double valor )
{
    // variável
    double horasExtras = 0;

    // se valor maior que zero
    if( valor > 0 )
        // e a hora menor ou igual a 40
        if( hora <= 40 )
        {
            // salário recebe o produto da hora pelo valor
            salario = hora * valor;
        } // fim if

        // se a hora for maior que 40
        else
        {
            // salário recebe o valor da hora mais 50% do valor da hora
            salario =  ( (-40  + hora) * (valor * 50 / 100) ) + ( valor * hora );
        } // fim else

} // fim função

// função que retorna o salário
double PagamentoBruto::getSalario()
{
    // retorne o valor do salário
    return salario;
} // fim função

// função para a entrada de dados pelo usuário
void PagamentoBruto::entrarComDados()
{
    // variáveis
    int hora;
    double valorHora;

    // imprima
    cout << "Entre com as horas trabalhadas (-1 = sair): ";
    cin >> hora;

    // enquanto valor diferente de -1
    while( hora != -1 )
    {
        // se valor maior que 0
        if( hora > 0 )
        {
            // chama a função setHorasTrabalhados que recebe às horas
            setHorasTrabalhadas( hora );

            // imprima
            cout << "Entre com o valor da hora R$";
            cin >> valorHora; // recebe do usuário o valor da hora

            // chama a função setValorDaHora e atribui o valor informado pelo usuário
            setValorDaHora( valorHora );

            // chama a função setSalario e atribui à hora e o valor da hora
            setSalario(hora, valorHora);

            // chama a função calcularSalario que imprime o valor do salário
            calcularSalario();

        } // fim if

    // imprima
    cout << "\nEntre com as horas trabalhadas (-1 = sair): ";
    cin >> hora; // espera a entrada do usuário

    } // fim while

} // fim função

// chama a função calcula salário e
void PagamentoBruto::calcularSalario()
{
    // mostra o valor do salário
    cout << "Salário R$" << setprecision( 2 ) << fixed << getSalario() << endl;

} // fim função
