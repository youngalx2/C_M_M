/*
    inicializando vetor com 5 itens
    22/10/2021
*/
#include <iostream>
#include <locale>
#include <vector> // para trabalhar com o vetor

using namespace std;

// função principal
int main()
{
    // localização geográfica
    setlocale( LC_ALL, "portuguese");

    // limpa a tela
    system("cls");

    // cria e inicializa um vetor inteiro com 5 elementos
    vector<int> vetor = { 5, 6, 7, 8, 9 };

    // loop to show vector elements
    for( int valores = 0; valores < vetor.size(); valores++ )

        // display vector elements
        cout << vetor[ valores ] << " ";

    system("pause"); // pausa do programa

    return 0; // programa terminado com sucesso

} // fim main
