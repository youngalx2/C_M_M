/*
    simple program to exercise operators
    05/11/2021
*/

#include <iostream>
#include <locale>
#include <cmath> // para sqrt()

using namespace std;

// função principal
int main()
{
    // localização geográfica
    setlocale( LC_ALL, "portuguese");

    // limpa a tela
    system("cls");

    cout << "Entre com um valor de ponto flutuante: ";

    double numero; // numero is a variable of type double
    cin >> numero; // read characters into numero

    cout << "numero == " << numero
            << "\nnumero + 1 == " << numero + 1
            << "\n3 x numero == " << numero * 3
            << "\nnumero + numero == " << numero + numero
            << "\nnumero / 2 == " << numero / 2
            << "\nraiz quadrade do numero " << numero << " é "
            <<  sqrt( numero ) << endl;

    system("pause"); // pausa do programa

    return 0; // programa terminado com sucesso

} // fim main
