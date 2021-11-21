/*
    1// Figura 6.10: fig06_10.cpp
    2// Aleatorizando o programa de lançamento de dados.
    Deitel, Harvey; Paul, Harvey. C++ Como Programar (p. 196). Edição do Kindle.
    Autor:
*/

// incluir biblioteca
#include <iostream>
#include <locale>
#include <iomanip>
#include <cstdlib> // para função rand e srand ( números aleatórios )

using namespace std;

// função principal
int main()
{
    // localização geográfica
    setlocale( LC_ALL, "portuguese");

    // limpa a tela
    system("cls");

    // variável
    unsigned seed;

    // entrada de dados
    cout << "Entre com um inteiro: ";
    cin >> seed;

    // srand
    srand( seed );

    // loop for repete 10 vezes
    for( int i = 1; i <= 10; i++ )
    {
        // imprime
        cout << setw( 5 ) << ( 1 + rand() % 6 );

        // se i multiplo de 5
        if( i % 50 == 0 )
            // pule uma linha
            cout << endl;

    }

    // pula linha
    cout << endl;

    system("pause"); // pausa do programa

    return 0; // programa terminado com sucesso

} // fim main
