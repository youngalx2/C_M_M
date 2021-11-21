/*
    1// Figura 6.13: fig06_13.cpp
    2// Função square utilizada para demonstrar a pilha
    3// de chamadas de função e os registros de ativação.
    Deitel, Harvey; Paul, Harvey. C++ Como Programar (p. 205). Edição do Kindle.
*/

// incluir biblioteca
#include <iostream>
#include <locale>
#include <iomanip>

using namespace std;

// protótipos
int square( int );

// função principal
int main()
{
    // localização geográfica
    setlocale( LC_ALL, "portuguese");

    // limpa a tela
    system("cls");

    // variável
    int numero = 0;

    // entreda de dados
    cout << "Digite um número: ";
    cin >> numero; // aguarda entrada do usuário

    // mostra
    cout << "O quadrado de " << numero << " é " << square( numero ) << endl;

    // pula linha
    cout << endl;

    system("pause"); // pausa do programa

    return 0; // programa terminado com sucesso

} // fim main

// função square
int square( int x )
{
    return x * x;
} // fim função square
