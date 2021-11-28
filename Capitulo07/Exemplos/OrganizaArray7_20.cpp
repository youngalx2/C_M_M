/*
    1// Figura 7.20: fig07_20.cpp
    2// Este programa classifica valores de um array em ordem crescente.
    Deitel, Harvey; Paul, Harvey. C++ Como Programar (p. 278). Edição do Kindle.
    Autor: 06/10/2021
*/

// incluir biblioteca
#include <iostream> // para cout e cin
#include <locale> // para setlocale
#include <iomanip> // para setw, fixed, setprecision
#include <ctime> // para srand()

using namespace std;

// prototipos
void adicionarValores( int [], int ); // adiciona valores ao vetor
void mostrarValores(int [], int ); // mostra os valores do vetor
int pesquisaLinear( const int [], int, int ); // pesquisa o valor no vetor
void organizarVetor( int [], int ); // para organizar os valores no vetor

// função principal
int main()
{
    // localização geográfica
    setlocale( LC_ALL, "portuguese");

    // limpa a tela
    system("cls");

    // cria constante
    const int tamanho = 15; // quantidade de elementos do vetor
    int dados[ tamanho ] = { 0 }; // cria um vetor
    int resultado = 0; // recebe o valor da pesquisa

    srand( time( 0 ) ); // gerador

    adicionarValores( dados, tamanho );

    cout << "Vetor original: ";
    mostrarValores( dados, tamanho );

    organizarVetor( dados, tamanho );

    cout << "Vetor organizado: ";
    mostrarValores( dados, tamanho );

    // pula linha
    cout << endl;

    system("pause"); // pausa do programa

    return 0; // programa terminado com sucesso

} // fim main

// cria a função adicionar valores
void adicionarValores( int vetor[], int tamanho ) // adiciona valores ao vetor
{
    // loop para adicionar valores
    for( int i = 0; i < tamanho; i++ )
        vetor[ i ] = 1 + rand() % 50;

} // fim função adicionarValores

// cria a função mostrar valores
void mostrarValores(int vetor[], int tamanho ) // mostra os valores do vetor
{
    cout << "= { ";
    // loop para mostrar os valores do vetor
    for( int i = 0; i < tamanho; i++ )
        cout << setw( 4 ) << vetor[ i ];
    cout << "    };" << endl;

} // fim função mostrar vetor

// cria a função organizarVetor
void organizarVetor( int vetor[], int tamanho )
{
    // variável
    int insira;

    // loop para organizar em ordem crescente o array
    for( int proximo = 1; proximo < tamanho; proximo++ )
    {
        insira = vetor[ proximo ];

        int movaItem = proximo; // inicializa a localização para colocar o elemento

        // procura um lugar para colocar o novo item
        while(  ( movaItem > 0 ) && ( vetor[ movaItem - 1 ] > insira )  )
        {
            // desloca o item para uma posição para a direita
            vetor[ movaItem ] = vetor[ movaItem - 1 ];

            movaItem--; // diminua 1 de movaItem
        } // fim loop while

        // vetor recebe um valor
        vetor[ movaItem ] = insira;

    } // fim for

} // fim função organizarVetor
