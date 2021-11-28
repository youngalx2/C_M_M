/*
    adiciona temperaturas ao vector
    23/10/2021
*/

#include <iostream>
#include <vector>

using namespace std;

// função principal
int main()
{
    // localização geográfica
    setlocale( LC_ALL, "portuguese");

    // limpa a tela
    system("cls");

    // creat vector double temperatura
    vector< double > temperatura;

    // data input
    cout << "Digite o valor da temperatura: ";
    // loop to add value to vector
    for( double valor; cin>> valor; ) // read into temperatura
        temperatura.push_back( valor ); // put temperatura into vector

    cout << "temperatura = "; // header

    // loop to show vector elements
    for( double valor : temperatura )
        cout << valor << " "; // display elements

    cout << endl; // next line

    system("pause"); // pausa do programa

    return 0; // programa terminado com sucesso

} // fim main
