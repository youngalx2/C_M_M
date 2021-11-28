/*
    10. Escreva um programa que pegue uma operação seguida por dois operandos e produza
    o resultado. Por exemplo: + 100 3,14 * 4 5 Leia a operação em uma string chamada operação
    e use uma instrução if para descobrir qual operação o usuário deseja, por exemplo,
    if (operação == "+"). Leia os operandos em variáveis ​​do tipo double. Implemente isso para
    operações chamadas +, -, *, /, mais, menos, mul e div com seus significados óbvios.
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

    double num1, num2;
    char operacao = ' ';

    cout << "CALCULADORA SIMPLES" << endl;

    // entrada de dados
    cout << "*****************" << endl;
    cout << "*   \'+\' Soma    *" << endl;
    cout << "*   \'-\' Subtra  *" << endl;
    cout << "*   \'/\' Div     *" << endl;
    cout << "*   \'*\' Multi   *" << endl;
    cout << "*****************" << endl;
    cout << "Digite a sua opcao e dois números: ";
    cin >> operacao;
    cin >> num1 >> num2;

    if( operacao == '+' )
        cout << num1 << " + " << num2 << " = " << num1 + num2 << endl;

    if( operacao == '-' )
        cout << num1 << " - " << num2 << " = " << num1 - num2 << endl;

    if( operacao == '/' )
        cout << num1 << " / " << num2 << " = " << num1 / num2 << endl;

    if( operacao == '*' )
        cout << num1 << " * " << num2 << " = " << num1 * num2 << endl;

    system("pause"); // pausa do programa

    return 0; // programa terminado com sucesso

} // fim main
