/*
    6.20 Escreva uma função multiple que determina para um par de inteiros se
    o segundo inteiro é um múltiplo do primeiro. A função deve  aceitar dois
    argumentos inteiros e retornar true se o segundo for um múltiplo do primeiro
    e false, caso contrário. Utilize essa função  em um programa que insere uma
    série de pares de inteiros.
    Deitel, Harvey; Paul, Harvey. C++ Como Programar (p. 243). Edição do Kindle.
    Autor: Pedro Filho, 13/09/2021
*/

// incluir biblioteca
#include <iostream> // para cout e cin
#include <locale> // para setlocale
#include <iomanip> // para setw, fixed, setprecision

using namespace std;

// protótipo de função
int multiplos( int primeiro, int segundo );

// função principal
int main()
{
    // localização geográfica
    setlocale( LC_ALL, "portuguese");

    // limpa a tela
    system("cls");

    // variáveis
    int primeiro = 0;
    int segundo = 0;
    int resposta = 0;

    // cabeçalho
    cout << "\tMULTIPLOS" << endl;

    // entrada de dados
    cout << "Digite o primeiro valor: ";
    cin >> primeiro;
    cout << "Digite o segundo valor: ";
    cin >> segundo;

    // resposta recebe o valor retornado da função multiplos
    resposta = multiplos( primeiro, segundo );

    // se a resposta for igual a zero
    if( resposta == 0 )
        // imprima
        cout << segundo << " é multiplo de " << primeiro <<  endl;
    else
        cout << segundo << " não é multiplo de " << primeiro << endl;

    // pula linha
    cout << endl;

    system("pause"); // pausa do programa

    return 0; // programa terminado com sucesso

} // fim main

// cria a função multiplos
int multiplos( int primeiro, int segundo )
{
    // se primeiro dividido pelo segundo igual a zero
    if( segundo % primeiro == 0 )
        // retorne zero
        return 0;
    else
        return 1;

} // fim função multiplos
