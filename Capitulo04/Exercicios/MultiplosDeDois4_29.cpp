/*
    4.29 Escreva um programa que imprime as potências do inteiro 2, isto é,
    2, 4, 8, 16, 32, 64 etc. O loop while não deve terminar (isto é, você  deve criar
    um loop infinito). Para fazer isso, simplesmente utilize a palavra-chave true como
    a expressão para a instrução while. O que  acontece quando você executa esse programa?
    Deitel, Harvey; Paul, Harvey. C++ Como Programar (p. 138). Edição do Kindle.
    Autor: Pedro, 21/08/2021
*/

// incluir biblioteca
#include <iostream>
#include <locale>

using namespace std;

// função principal
int main()
{
    // localização geográfica
    setlocale( LC_ALL, "portuguese");

    // limpa a tela
    system("cls");

    // imprime um valor até o limite do tipo, testado com a variável de tipo ( int, float e double )
    double multiplos = 2; // cria a variável

    // loop infinito
    while( true )
    {
        // imprime
        cout << multiplos << " ";

        // calcula
        multiplos *= 2;

    } // fim while

    system("pause"); // pausa do programa

    return 0; // programa terminado com sucesso

} // fim main
