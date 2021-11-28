/*
    Organizando cartas
    21/11/2021
*/

#include <iostream>
#include <locale>
#include <string>
#include <cstdlib>
#include <ctime>
#include <iomanip>

using namespace std;

// função principal
int main()
{
    setlocale( LC_ALL, "portuguese"); // localização geográfica

    system("cls"); // limpa a tela

    // vetores
    string naipe[] = { "Ouro", "Copas", "Paus", "Espadas"  };

    string valor[] = { "2", "3", "4", "5", "6", "7", "8", "9", "10",
                                "Valete", "Dama", "Rei", "As"  };

    string deck[ 4 * 13 ];

    srand( time( 0 ) ); // semente aleatória

    // variáveis
    int  valorDoNaipe = rand() % 4;
    int valorDosElementos = rand() % 13;
    int i, j;
    string temp;

    cout << "   ORGANIZANDO CARTAS" << endl;

    // embaralhando cartas
    for( i = 0; i <13; i++ )
    {
        for( j = 0; j < 4; j++ )
        {
            deck[ 4 * i + j ] = valor[ i ] + " de " + naipe[ j ];
            cout << setw( 5 ) << "   " << deck[ 4 * i + j ] << endl; // pula uma linha

        } // fim for interno
    } // fim for externo

    cout << "\n   TROCANDO CARTAS" << endl;

    temp = deck[ i ];
    deck[ i ] = deck[ j ];
    deck[ j ] = temp;

    cout << setw( 5 ) << "   " << deck[ j ] << endl; // pula uma linha

    system("pause"); // pausa do programa

    return 0; // programa terminado com sucesso

} // fim main
