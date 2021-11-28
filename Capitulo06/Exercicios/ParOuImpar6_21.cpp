/*
    6.21 Escreva um programa que insere uma série de inteiros e os passa um por
    vez para a função even, que utiliza o operador módulo para determinar se um
    inteiro é par. A função deve aceitar um argumento inteiro e retornar true se o
    inteiro for par e false, caso contrário.
    Deitel, Harvey; Paul, Harvey. C++ Como Programar (p. 243). Edição do Kindle.
    Autor: Pedro Filho, 13/09/2021
*/

// incluir biblioteca
#include <iostream> // para cout e cin
#include <locale> // para setlocale
#include <iomanip> // para setw, fixed, setprecision

using namespace std;

// protótipo de função
int parOuImpar( int numero );

// função principal
int main()
{
    // localização geográfica
    setlocale( LC_ALL, "portuguese");

    // limpa a tela
    system("cls");

    // cria variáveis
    int resposta, valor;
    int resp = 0;

    // faça enquanto resp diferente de -1
    while( resp != -1 )
    {
        // cabeçalho
        cout << "VALOR PAR OU ÍMPAR" << endl;

        // entrada de dados
        cout << "Digite um valor: ";
        cin >> valor;

        // resposta recebe a função parOuImpar
        resposta = parOuImpar( valor );

        // se a resposta for igual a 1
        if( resposta == 1 )
            // imprima é par
            cout << valor << " é par." << endl;
        else // se não
            // imprima
            cout << valor << " não é par." << endl;

        // pergunta
        cout << "Deseja continuar (-1 = sair)? ";
        cin >> resp;

        system("cls"); // limpa a tela

        // se resp igual a -1
        if( resp == -1 )
            break; // sair

    } // fim while
    // pula linha
    cout << endl;

    system("pause"); // pausa do programa

    return 0; // programa terminado com sucesso

} // fim main

// cria a função parOuImpar
int parOuImpar( int numero )
{
    // se o número módulo 2 igual a zero
    if( numero % 2 == 0 )
        return 1; // verdadeiro
    else
        return 0; // falso
} // fim função
