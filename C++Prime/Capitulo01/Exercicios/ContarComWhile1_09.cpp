/*
    contar de 50 até 100 inclusive
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

    int num = 50;
    int soma = 0;

    while( num <= 100 )
    {
        soma += num;
        num++;
    } // fim while

    cout << "A soma entre 50 a 100 inclusive é " << soma << endl;

    system("pause"); // pausa do programa

    return 0; // programa terminado com sucesso

} // fim main
