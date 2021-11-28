/*
    Cara ou coroa
    14/11/2021
*/

#include <iostream>
#include <locale>
#include <cstdlib>
#include <ctime>
using namespace std;

// função principal
int main()
{
    // localização geográfica
    setlocale( LC_ALL, "portuguese");

    // limpa a tela
    system("cls");

    int moeda;
    int contador = 0;

    srand( time( 0 ) );

    // loop while
    while( contador < 10 )
    {
        moeda = rand() % 2; // GERA 0 ou 1

        cout << "Moeda lado = " << moeda << endl;

        if( moeda == 0 )
            cout << "\tCARA" << endl;
        else
            cout << "\tCOROA" << endl;

        contador++; // incrementa em 1 while

    } // fim while

    system("pause"); // pausa do programa

    return 0; // programa terminado com sucesso

} // fim main
