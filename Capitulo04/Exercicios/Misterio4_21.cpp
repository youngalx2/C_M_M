/*
    mistério 01
    Autor: Pedro Filho, 18/08/2021
*/

// incluir biblioteca
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
    int contar = 1; // inicia contador

    // enquanto contador menor ou igual a 10
    while( contar <= 10 )
    {
        // imprima
        cout << ( contar % 2 ? "*****" : "++++++++++" ) << endl;

        contar++; // incrementa contar

    } // fim while

    system("pause"); // pausa do programa

    return 0; // programa terminado com sucesso

} // fim main
