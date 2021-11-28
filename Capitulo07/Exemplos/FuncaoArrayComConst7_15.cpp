/*
    1// Figura 7.15: fig07_15.cpp
    2// Demonstrando o qualificador de tipo const.
    Deitel, Harvey; Paul, Harvey. C++ Como Programar (p. 270). Edição do Kindle.
    Autor: 04/10/2021
*/

// incluir biblioteca
#include <iostream> // para cout e cin
#include <locale> // para setlocale
#include <iomanip> // para setw, fixed, setprecision

using namespace std;

// protótipo
void tenteModificarArray( const int [] );

// função principal
int main()
{
    // localização geográfica
    setlocale( LC_ALL, "portuguese");

    // limpa a tela
    system("cls");

    // cria o array
    int a[] = { 10, 20, 30 };

    // cabeçalho
    cout << "FUNÇÃO COM PARAMETRO CONST NÃO MODIFICA ARRAY ORIGINAL" << endl;

    cout << "Array original: ";

    // loop para mostrar os valores do array original
    for( int i = 0; i < 3; i++ )
    {
        cout << a[ i ] << ' ';
    } // fim for

    // chama a função tenteModificarArray
    tenteModificarArray( a );

    cout << "Array modificado: ";

    // loop para mostrar os valores do array original
    for( int i = 0; i < 3; i++ )
    {
        cout << a[ i ] << ' ';
    } // fim for

    // pula linha
    cout << endl;

    system("pause"); // pausa do programa

    return 0; // programa terminado com sucesso

} // fim main

// a palavra chave ( const ) impede
// a modificação indevida do array original pela função
// cria a função tenteModificarArray
void tenteModificarArray( const int b[] )
{
    b[ 0 ] /= 2; // erro
    b[ 1 ] /= 2; // erro
    b[ 2 ] /= 2; // erro
} // fim função
