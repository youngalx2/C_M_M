/*
    Autor:
*/

#include <iostream>
#include <locale>
#include <cmath>
using namespace std;

// função principal
int main()
{
    // localização geográfica
    setlocale( LC_ALL, "portuguese");

    // limpa a tela
    system("cls");

    double num1, num2;
    double discriminante = 0;

    // entrada de dados
    cout << "Digite dois valores: ";
    cin >> num1 >> num2;

    discriminante = num1 * num1 - 4.0 * num2;
    double raizQuadrada = sqrt( discriminante );

    double raiz1 = (-num1 + raizQuadrada) / 2.0;
    double raiz2 = (-num2 - raizQuadrada) / 2.0;

    cout << raiz1 << endl;
    cout << raiz2 << endl;

    system("pause"); // pausa do programa

    return 0; // programa terminado com sucesso

} // fim main
