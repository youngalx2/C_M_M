/*
    4.28 Escreva um programa que exibe o padrão de tabuleiro mostrado a seguir.
    Seu programa deve utilizar apenas três instruções de saída, uma  de cada das
    seguintes formas:
    cout << “* “;
    cout << ‘ ‘;
    cout << endl;
    Deitel, Harvey; Paul, Harvey. C++ Como Programar (p. 138). Edição do Kindle.
    Autor: Pedro Filho, 20/08/2021
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

    // variáveis
    int num1 = 0;
    int num2 = 0;

    // loop para controlar as linhas
    while( num1 < 10)
    {
        // se num1 for par
        if( num1 % 2 )
            // imprima um espaço em branco
            cout << ' ';

        // loop para contar até 10
        while( num2 < 10 )
        {
            // imprime 10 asterisco
            cout << "* ";

            // incrementa 1 a num2
            num2++;
        } // fim while 2

        // pula uma linha
        cout << endl;

        // inicializa variável em zero
        num2 = 0;

        // incrementa em 1
        num1++;

    } // fim while

    system("pause"); // pausa do programa

    return 0; // programa terminado com sucesso

} // fim main
