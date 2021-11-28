/*
    04/11/2021
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

    int soma = 0;
    for( int valor = 50; valor <= 100; valor++ )
        soma += valor;
    cout << "A soma de 50 até 100 inclusive é " << soma << endl;

    system("pause"); // pausa do programa

    return 0; // programa terminado com sucesso

} // fim main
