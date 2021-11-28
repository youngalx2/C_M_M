/*
    contar de 10 a zero com for
    Autor: Pedro 04/11/2021
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

    cout << "Valores de 10 a 0 -> ";

    // loop para contar de 10 a 0
    for( int valor = 10; valor >= 0; valor-- )
        cout << valor << " ";

    cout << endl; // pula linha

    system("pause"); // pausa do programa

    return 0; // programa terminado com sucesso

} // fim main
