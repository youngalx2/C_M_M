/*
    Exercícios 1.2.1 Suponha que aeb são variáveis ​​inteiras.
    O que a seguinte sequência de afirmações faz?
    int t = a; b = t; a = b;
    Autor: Pedro,10/11/2021
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

    int a = 1, b = 2;
    int t = a;
    b = t;
    a = b;

    cout << "a = " << a << "b = " << b << "t = " << t << endl;

    double x = 1;
    double y = 3;
    cout << x / y << endl;

    system("pause"); // pausa do programa

    return 0; // programa terminado com sucesso

} // fim main
