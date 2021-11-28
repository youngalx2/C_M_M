/*
    Multiplicação e divisão com inteiros
    07/11/2021
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
    int a, b;
    cout << "Digite dois inteiros: ";
    cin >> a >> b;

    cout << "Multiplicação: " << a << " * " << b << " = " << a * b << endl;
    cout << "Divisão: " << a << " / " << b << " = " << a / b << endl;
    cout << "Resto: " << a << " % " << b << " = " << a % b << endl;

    system("pause"); // pausa do programa

    return 0; // programa terminado com sucesso

} // fim main
