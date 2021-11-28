/*
    1// Figura 7.19: fig07_19.cpp
    2// Pesquisa linear de um array.
    Deitel, Harvey; Paul, Harvey. C++ Como Programar (p. 277). Edição do Kindle.
    06/10/2021
*/

// incluir biblioteca
#include <iostream> // para cout e cin
#include <locale> // para setlocale
#include <iomanip> // para setw, fixed, setprecision
#include <ctime> // para srand()

using namespace std;

// protótipo
int pesquisaLinear( const int [], int, int );

// função principal
int main()
{
    // localização geográfica
    setlocale( LC_ALL, "portuguese");

    // limpa a tela
    system("cls");

    // constante
    const int tamanho = 10;

    // vetor
    int vetor[ tamanho ];

    // cria variável
    int chave = 0;
    int retornado = 0;

    // gerador
    srand( time( 0 ) );

    // cabeçalho
    cout << "PESQUISA LINEAR" << endl;

    // loop para adicionar valores ao vetor
    for( int i = 0; i < tamanho; i++ )
        vetor[ i ] = 1 + rand() % 50;

    cout << "Vetor = { ";
    // loop para mostrar os valores do vetor
    for( int j = 0; j < tamanho; j++ )
        cout << vetor[ j ] << " ";
    cout << " };" << endl;

    // entrada de dados
    cout << "\nEntre 1 e 50, Que número quer pesquisar? ";
    cin >> chave;

    // chama a função pesquisa linear e atribui o valor para retornado
    retornado = pesquisaLinear( vetor, tamanho, chave );

    // se o valor retornado for diferente de -1
    if( retornado != -1 )
        cout << "O número " << chave << " Está na posição " << retornado + 1 << endl;
    else // se não
        cout << "O número " << chave << " não foi localizado." << endl;

    // pula linha
    cout << endl;

    system("pause"); // pausa do programa

    return 0; // programa terminado com sucesso

} // fim main

// cria a função pesquisaLinear
int pesquisaLinear( const int vetor[], int tamanho, int chave )
{
    // loop para pesquisar no vetor o valor da chave
    for( int i = 0; i < tamanho; i++ )
        // se vetor igual a chave mostre a posição
        if( vetor[ i ] == chave )
            return i;

    return -1; // retorne menos 1( quando não encontrado)
} // fim função pesquisaLinear
