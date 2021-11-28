/*
    Exercício 1.4
    Nosso programa usou o operador de adição, +, para somar dois números.
    Escreva um programa que use o operador de multiplicação, *, para imprimir o produto.
    Autor: Pedro Filho 04/11/2021
*/

#include <iostream>
#include <locale>
using namespace std;

// função principal
int main()
{
    // localização geográfica
    setlocale( LC_ALL, "portuguese");

    // limpa a tela
    system("cls");

    // variáveis
    int num1, num2;

    // entrada de dados
    cout << "Digite dois inteiros: ";
    cin >> num1 >> num2;

    // mostra resultado
    cout << "O produto entre " << num1 << " e " << num2 << " é " << num1 * num2 << endl;

    system("pause"); // pausa do programa

    return 0; // programa terminado com sucesso

} // fim main
