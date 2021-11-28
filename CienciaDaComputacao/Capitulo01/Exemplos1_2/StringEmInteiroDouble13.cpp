/*
    Convertendo variável char em int, double e long
    Autor: Pedro filho, 14/11/2021
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

    char letra = 'S';
    int letraInt = letra;
    long letraLong = letra;
    double letraDouble = letra;

    cout << "Letra char = " << letra << endl;
    cout << "Letra int = " << letraInt << endl;
    cout << "Letra double = " << letraDouble << endl;
    cout << "Letra long = " << letraLong << endl;

    system("pause"); // pausa do programa

    return 0; // programa terminado com sucesso

} // fim main
