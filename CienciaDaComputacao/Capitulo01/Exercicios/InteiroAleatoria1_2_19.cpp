/*
    1.2.19 Escreva um programa que receba dois argumentos inteiros de linha
    de comando aeb e imprima um inteiro aleatório entre a e b, inclusive.
    Sedgewick, Robert; Wayne, Kevin. Ciência da computação (p. 46).
    Pearson Education. Edição do Kindle.
    Feito por: Pedro 16/11/2021
*/

#include <iostream>
#include <locale>
#include <cstdlib>
#include <ctime>

using namespace std;

// função principal
int main()
{
    // localização geográfica
    setlocale( LC_ALL, "portuguese");

    // limpa a tela
    system("cls");

    // variáveis
    int x, y, alea;

    // entrada de dados
    cout << "Digite dois inteiros diferentes: ";
    cin >> x >> y;

    srand( time( 0 ) ); // gera semente aleatória

    // condição se x menor que y
    if( x < y )
        alea = x + rand() % y; // alea recebe um valor entre x e y
    else // se não
        alea = y + rand() % x; // alea recebe um valor entre y e x

    // imprime resultado
    cout << "O valor aleatório ente "
            << x << " e " << y << " = " << alea << endl;

    system("pause"); // pausa do programa

    return 0; // programa terminado com sucesso

} // fim main
