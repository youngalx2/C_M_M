/*
    Este programa imprime os comprimentos relativos das subdivisões em uma régua.
    A enésima linha de saída são os comprimentos relativos das marcas em uma régua
    subdividida em intervalos de 1/2n de uma polegada. Por exemplo, a quarta linha de
    saída fornece os comprimentos relativos das marcas que indicam intervalos de 1/16
    de polegada em uma régua.
    Sedgewick, Robert; Wayne, Kevin. Ciência da computação (p. 20).
    Pearson Education. Edição do Kindle.
    09/11/2021
*/

#include <iostream>
#include <locale>
#include <string>
using namespace std;

// função principal
int main()
{
    // localização geográfica
    setlocale( LC_ALL, "portuguese");

    // limpa a tela
    system("cls");

    string ruler1 = "1";
    string ruler2 = ruler1 + "2" + ruler1;
    string ruler3 = ruler2 + "3" + ruler2;
    string ruler4 = ruler3 + "4" + ruler3;
    string ruler5 = ruler4 + "5" + ruler4;

    // imprime
    cout << ruler1 << endl;
    cout << ruler2 << endl;
    cout << ruler3 << endl;
    cout << ruler4 << endl;
    cout << ruler5 << endl;

    system("pause"); // pausa do programa

    return 0; // programa terminado com sucesso

} // fim main
