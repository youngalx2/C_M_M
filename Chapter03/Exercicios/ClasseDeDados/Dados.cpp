/*
    3.15 (Classe Date) Crie uma classe chamada Date que inclua três partes de
    informações como membros de dados — um mês (tipo int), um  dia (tipo int)
    e um ano (tipo int). Sua classe deve ter um construtor com três parâmetros
    que utilize os parâmetros para inicializar os três  membros de dados.
    Para o propósito desse exercício, assuma que os valores fornecidos para o ano
    e o dia são corretos, mas certifique-se  de que o valor de mês esteja no intervalo
    1–12; se não estiver, configure o mês como 1. Forneça uma função set e uma
    função get para  cada membro de dados. Forneça uma função-membro displayDate
    que exiba o dia, o mês e o ano separados por barras normais (/).
    Escreva um programa de teste que demonstre as capacidades da classe Date.
    Deitel, Harvey; Paul, Harvey. C++ Como Programar (p. 92). Edição do Kindle.
    Autor: Pedro Filho, 10/08/2021
*/

#include <iostream>
#include "Dados.h" //

using namespace std;

// cria o construtor da classe Dados
Dados::Dados(int dia, int mes, int ano)
{
    setDia(dia); // configura o valor dia
    setMes(mes); // configura o valor mês
    setAno(ano); // configura o valor ano
} // fim construtor

// função set dia
void Dados::setDia(int valor )
{
    // condição de validação para a variável dia
    // se o valor maior ou igual a 1
    if( valor >= 1 )
        // e o valor menor ou igual a 30
        if( valor <= 31 )
            // variável dia recebe o valor digitado
            dia = valor;
} // fim função

// função get dia
int Dados::getDia()
{
    // retorna o valor digitado
    return dia;
} // fim função

// função set mês
void Dados::setMes(int valor )
{
    // condição de validação do valor digitado
    // valor maior ou igual a 1
    if( valor >= 1 )
        // e o valor menor ou igual a 12
        if( valor <= 12 )
            // se estiver comforme a condição acima
            // mês recebe o valor digitado
            mes = valor;
} // função mês

// função get mês
int Dados::getMes()
{
    // retorna o valor digitado
    return mes;
}// fim get

// função set ano
void Dados::setAno( int valor )
{
    // ano recebe o valor digitado
    ano = valor;
} // fim setAno

// função getAno
int Dados::getAno()
{
    // retorna o ano digitado
    return ano;
} // fim getAno

// display messagem
void Dados::displayMensagem()
{
    // mostra um data
    cout << "Data: " << dia << "/" << mes << "/" << ano << endl;
} // fim display
