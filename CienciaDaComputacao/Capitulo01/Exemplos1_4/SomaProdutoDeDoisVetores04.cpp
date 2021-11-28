/*
    Programa para somar o produto de dois vetores
    Feito por: Pedro, 20/11/2021
*/

#include <iostream>
#include <locale>
#include <cstdlib>
#include <ctime>
#include <iomanip>

using namespace std;

// função principal
int main()
{
    setlocale( LC_ALL, "portuguese"); // localização geográfica

    system("cls"); // limpa a tela

    // variavel
    int tamanho;
    int soma = 0;

    // entreda de dados
    cout << "Digite o tamanho do vetor: ";
    cin >> tamanho; // aguarda a entrada do usuário

    // cria vetores
    int vetor1[ tamanho ];
    int vetor2[ tamanho ];

    // semente para rand
    srand( time( 0 ) );

    // adiciona valores aos vetores
    for( int i = 0; i < tamanho; i++ )
    {
        vetor1[ i ] = 1 + rand() % 10; // vetor1 recebe valores entre 1 e 50 inclusive

        vetor2[ i ] = 1 + rand() % 10; // vetor2 recebevtrvalores entre 1 e 50 inclusive
    } // fim for

    cout << setw(7) << "vtr01" << setw(7) << "vtr02"
            << setw(10) << "01vtr02" << setw(5) << "soma" << endl;

    // mostra os valores dos vetores
    for( int i = 0; i < tamanho; i++ )
    {
        soma += vetor1[ i ] * vetor2[ i ]; // soma o produto dos valores dos vetores 1 e 2

        cout << setw( 7 ) << vetor1[ i ] << setw( 7 ) << vetor2[ i ]
                << setw( 7 ) << vetor1[ i ] * vetor2[ i ] << setw( 7 ) << soma << endl;
    }

    cout << endl; // pula uma linha

    system("pause"); // pausa do programa

    return 0; // programa terminado com sucesso

} // fim main
