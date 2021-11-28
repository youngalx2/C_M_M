/*
    Embalhando cartas
    22/11/2021
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
    int num = 52;
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

    cout << endl; // pula linha

    cout << "EMBARALHANDO CARTAS" << endl;

    for( i = 0; i < num; i++ )
    {
        int r = rand() % 52 ;
        temp = deck[ i ];
        deck[ i ] = deck[ r ];
        deck[ r ] = temp;

        cout << setw( 5 ) << "   " << deck[ r ] << endl; // pula uma linha
    } // fim for

    cout << endl; // pula linha

    system("pause"); // pausa do programa

    return 0; // programa terminado com sucesso

} // fim main
