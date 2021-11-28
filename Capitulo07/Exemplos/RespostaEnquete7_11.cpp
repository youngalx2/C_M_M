/*
    1// Figura 7.11: fig07_11.cpp
    2// Programa de enquete de alunos.
    Deitel, Harvey; Paul, Harvey. C++ Como Programar (p. 262). Edição do Kindle.
    Autor: 02/10/2021
*/

// incluir biblioteca
#include <iostream> // para cout e cin
#include <locale> // para setlocale
#include <iomanip> // para setw, fixed, setprecision

using namespace std;

// função principal
int main()
{
    // localização geográfica
    setlocale( LC_ALL, "portuguese");

    // limpa a tela
    system("cls");

    // constantes
    const int tamanhoResposta = 40;
    const int tamanhoFrequencia = 11;

    // arrays
    int respostas[ tamanhoResposta ] = { 1, 2, 6, 4, 8, 5, 9, 7, 8, 10, 1, 6, 3, 8, 6, 10, 3, 8, 2,
                                                                7, 6, 5, 7, 6, 8, 6, 7, 5, 6, 6, 5, 6, 7, 5, 6, 4, 8, 6, 8, 10 };

    int frequencia[ tamanhoFrequencia ] = { 0 }; // inicializa com zero

    // loop para avaliar a resposta
    for( int avaliacao = 0; avaliacao < tamanhoResposta; avaliacao++ )
        // conta às vezes que aparecer um valor
        frequencia[ respostas[ avaliacao ] ]++;

    cout << "Rating" << setw( 17 ) << "Frequência" << endl;

    // loop para mostrar os valores
    for( int rating = 1; rating < tamanhoFrequencia; rating++ )
        // imprime
        cout << setw( 6 ) << rating << setw( 17 ) << frequencia[ rating  ] << endl;

    // pula linha
    cout << endl;

    system("pause"); // pausa do programa

    return 0; // programa terminado com sucesso

} // fim main
