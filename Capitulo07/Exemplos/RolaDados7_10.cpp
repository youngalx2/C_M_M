/*
    1// Figura 7.10: fig07_10.cpp
    2// Rola um dado de seis lados 6.000.000 vezes.
    Deitel, Harvey; Paul, Harvey. C++ Como Programar (p. 260). Edição do Kindle.
    Autor: 02/10/2021
*/

// incluir biblioteca
#include <iostream> // para cout e cin
#include <locale> // para setlocale
#include <iomanip> // para setw, fixed, setprecision
#include <cstdlib> // para srand e rand
#include <ctime> // para stand time null

using namespace std;

// função principal
int main()
{
    // localização geográfica
    setlocale( LC_ALL, "portuguese");

    // limpa a tela
    system("cls");

    // constante
    const int tamanho = 7;

    // array
    int frequencia[ tamanho ] = { 0 };

    // semeia o gerador de números aleatórios
    srand( time( 0 ) );

    // loop para rolar os dados 6000000 vezes
    for( int i = 1; i <= 6000000; i++ )
        // conta o número de vezes que um número apareceu
        frequencia[ 1 + rand() % 6 ]++;

    // cabeçalho
    cout << "ROLA DADOS 6.000.000 VEZES" << endl;

    // valor e frequência
    cout << "Valor" << setw( 13 ) << "Frequência" << endl;

    // loop para mostra os valores
    for( int face = 1; face < tamanho; face++ )
        // imprime o resultado
        cout << setw( 4 ) << face << setw( 13 ) << frequencia[ face ] << endl;

    // pula linha
    cout << endl;

    system("pause"); // pausa do programa

    return 0; // programa terminado com sucesso

} // fim main
