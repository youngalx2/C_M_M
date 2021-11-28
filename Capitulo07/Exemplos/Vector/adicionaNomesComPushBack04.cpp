/*
    adiciona nomes no vector com push_back( nomes )
    Pedro Filho, 23/10/2021
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

    // create vector
    vector < string > nomes;
    string palavras; // to data input
    int valor; // to loop for

    // data input
    cout << ( "Digite um nome: " );

    // loop to add words to the vector names
    for( valor = 0; valor < 3; valor++ ) {
        cin >> palavras; // data input
        // add word to the vector
        nomes.push_back( palavras );
    } // end for

    cout << "\nVocê digitou: ";

    // loop to show vector elements
    for( string name : nomes )
        cout << name << " - "; // show name

    cout << endl; // next line

    system("pause"); // pausa do programa

    return 0; // programa terminado com sucesso

} // fim main
