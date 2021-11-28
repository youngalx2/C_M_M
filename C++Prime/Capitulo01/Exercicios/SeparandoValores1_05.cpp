/*
    Exercício 1.5
    Escrevemos a saída em uma grande instrução. Reescreva
    o programa para usar uma instrução separada para imprimir cada operando.
    Autor: Pedro Filho, 04/11/2021
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
    cout << "O ";
    cout << "produto ";
    cout << "entre ";
    cout << num1;
    cout << " e ";
    cout << num2;
    cout << " é ";
    cout << num1 * num2;
    cout << endl;

    system("pause"); // pausa do programa

    return 0; // programa terminado com sucesso

} // fim main
