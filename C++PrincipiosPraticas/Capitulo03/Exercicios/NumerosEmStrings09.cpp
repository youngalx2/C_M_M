/*
    9. Escreva um programa que converta números soletrados como
    “zero” e “dois” em dígitos, como 0 e 2. Quando o usuário insere
    um número, o programa deve imprimir o dígito correspondente.
    Faça isso para os valores 0, 1, 2, 3 e 4 e não escreva nenhum
    número que eu sei se o usuário digitar algo que não corresponda,
    como computador estúpido !.
    Autor: Pedro, 10/11/2021
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

    // variável
    int num;

    cout << "TRANSFORMA DIGITOS EM STRING" << endl;

    // entrada de dados
    cout << "Digite um número entre 0 e 5 inclusive: ";
    cin >> num;

    // condições
    if( num == 0 )
        cout << "você digitou o número ZERO." << endl;
    if( num == 1 )
        cout << "você digitou o número UM." << endl;
    if( num == 2 )
        cout << "você digitou o número DOIS." << endl;
    if( num == 3 )
        cout << "você digitou o número TRÊS." << endl;
    if( num == 4 )
        cout << "você digitou o número QUATRO." << endl;
    if( num == 5 )
        cout << "você digitou o número CINCO." << endl;
    if( num < 0 || num > 5 )
        cout << num << " É um número indevido!" << endl;

    system("pause"); // pausa do programa

    return 0; // programa terminado com sucesso

} // fim main
