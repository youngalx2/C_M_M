/*
    mostra vetor com for( int valor : nomeDoVetor )
    22/10/2021
*/

#include <iostream>
#include <locale>
#include <vector>

using namespace std;

// função principal
int main()
{
    // localização geográfica
    setlocale( LC_ALL, "portuguese");

    // limpa a tela
    system("cls");

    // cria e inicializa um vector do tipo inteiro com 10 elementos
    vector<int> vetor = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };

    // loop to show vector elements
    for( int valor : vetor ) // para cada valor em vetor

        // imprima o valor
        cout << valor << " ";

    cout << endl; // next line

    system("pause"); // pausa do programa

    return 0; // programa terminado com sucesso

} // fim main
