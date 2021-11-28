/*
    1// Figura 7.13: fig07_13.cpp
    2// Arrays estáticos são inicializados como zero.
    Deitel, Harvey; Paul, Harvey. C++ Como Programar (p. 265). Edição do Kindle.
    Autor: 03/11/2021
*/

// incluir biblioteca
#include <iostream> // para cout e cin
#include <locale> // para setlocale
#include <iomanip> // para setw, fixed, setprecision

using namespace std;

// protótipos
void staticArrayInit( void );
void automaticArrayInit( void );

// função principal
int main()
{
    // localização geográfica
    setlocale( LC_ALL, "portuguese");

    // limpa a tela
    system("cls");

    // imprima
    cout << "Primeira chamada para às funções: " << endl;
    staticArrayInit();
    automaticArrayInit();

    // imprima
    cout << "\nSegunda chamada para às funções: " << endl;
    staticArrayInit();
    automaticArrayInit();

    // pula linha
    cout << endl;

    system("pause"); // pausa do programa

    return 0; // programa terminado com sucesso

} // fim main

// cria a função staticArrayInit
void staticArrayInit( void )
{
    // inicializa os elementos com 0 na primeira chamada
    static int array1[ 3 ]; // array local estático

    cout << "\nValores iniciais do staticArrayInit: " << endl;

    // gera saida do conteúdo do array
    for( int i = 0; i < 3; i++ )
    cout << "array1[ " << i << " ] = " << array1[ i ] << " ";

    cout << "\nValores depois de gerado conteúdo do array: " << endl;

    // loop para mostrarmo conteúdo do array
    for( int j = 0; j < 3; j++ )
    cout << "array1[ " << j << " ] = " << ( array1[ j ] += 5 ) << " ";

} // fim função staticArrayInit

// cria a função automaticArrayInit
void automaticArrayInit()
{
    // cabeçalho
    cout << "\n\nAUTOMATIC ARRAY INIT" << endl;

    // inicializa os elementos com 0 na primeira chamada
    static int array1[ 3 ] = { 1, 2, 3 }; // array local automático

    cout << "\nValores iniciais do automaticArrayInit: " << endl;

    // gera saida do conteúdo do array
    for( int i = 0; i < 3; i++ )
    cout << "array1[ " << i << " ] = " << array1[ i ] << " ";

    cout << "\nValores depois de gerado conteúdo do array: " << endl;

    // loop para mostrarmo conteúdo do array
    for( int j = 0; j < 3; j++ )
    cout << "array1[ " << j << " ] = " << ( array1[ j ] += 5 ) << " ";

} // fim função automaticArrayInit
