/*
    1// Figura 6.8: fig06_08.cpp
    2// Inteiros aleatórios deslocados e escalonados.
    Deitel, Harvey; Paul, Harvey. C++ Como Programar (p. 193). Edição do Kindle.
*/

// incluir biblioteca
#include <iostream>
#include <locale>
#include <iomanip>
#include <cstdlib> // para o gerador de número aleatório

using namespace std;

// função principal
int main()
{
    // localização geográfica
    setlocale( LC_ALL, "portuguese");

    // limpa a tela
    system("cls");

    // cabeçalho
    cout << setw( 40 ) << "NÚMEROS ALEATÓRIOS" << endl;

    // loop for 20 vezes
    for( int i = 1; i <= 20; i++)
    {
        // imprime
        cout << setw( 10 ) << ( 1 + rand() % 6 );

        // se i igual a 5
        if( i % 5 == 0 )
            // pula uma linha
            cout << endl;

    } // fi m for rand

    // pula linha
    cout << endl;

    system("pause"); // pausa do programa

    return 0; // programa terminado com sucesso

} // fim main
