/*
    1.3.5 Escreva um programa RollLoadedDie que imprima o resultado
    do lançamento de um dado carregado de forma que a probabilidade
    de obter 1, 2, 3, 4 ou 5 seja 1/8 e a probabilidade de obter 6 seja 3/8.
    Sedgewick, Robert; Wayne, Kevin. Ciência da Computação (p. 81).
    Pearson Education. Edição do Kindle.
    Feito por: Pedro Filho, 18/11/2021
*/

#include <iostream>
#include <locale>
#include <cstdlib>
#include <ctime>

using namespace std;

// função principal
int main()
{
    setlocale( LC_ALL, "portuguese"); // localização geográfica

    system("cls"); // limpa a tela

    srand( time( 0 ) ); // semente
    double r = 1 + rand() % 6; // aleatório de 1 a 6 inclusive

    int rolar = 1;

    if( r < 1 ) rolar = 1;
    else if( r < 2 ) rolar = 2;
    else if( r < 3 ) rolar = 3;
    else if( r < 4 ) rolar = 4;
    else if( r < 5  ) rolar = 5;
    else rolar = 6;

    cout << "Rolar = " << rolar << endl;

    cout << endl; // pula uma linha

    system("pause"); // pausa do programa

    return 0; // programa terminado com sucesso

} // fim main
