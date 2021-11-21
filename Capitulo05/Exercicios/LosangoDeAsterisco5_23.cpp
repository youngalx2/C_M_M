/*
    5.23 Escreva um programa que imprime a seguinte forma de losango.
    Você pode utilizar instruções de saída que imprimem um único asterisco (*) ou
    um único espaço em branco. Maximize sua utilização de repetição
    (com instruções for aninhadas) e minimize o número de  instruções de saída.
    Deitel, Harvey; Paul, Harvey. C++ Como Programar (p. 179). Edição do Kindle.
    Autor: Pedro Filho, 01/09/2021
*/

// incluir biblioteca
#include <iostream>
#include <locale>
#include <iomanip>

using namespace std;

// função principal
int main()
{
    // localização geográfica
    setlocale( LC_ALL, "portuguese");

    // limpa a tela
    system("cls");

    int valor = 0;

    // entrada de dados
    cout << "Entre com tamanho do losango: ";
    cin >> valor;

    // loop for de  controle
    for( int controle = 1; controle <= valor; controle++ )
    {
        // loop for primeiro triângulo
        for( int i = valor; i >= controle; i-- )
        {
            cout << ' ';
        } // fim for vazio

        // loop for segundo triângulo
        for( int j = 1; j <= controle; j++ )
        {
            cout << '*';
        } // fim for segundo

        // loop for terceiro triângulo
        for( int i = controle; i >= 2; i-- )
        {
            cout << '*';
        } // fim for terceiro
        // pula linha
        cout << endl;
    } // fim for controle

    // fim for triângulo para baixo
    for( int controle = 1; controle <= valor; controle++ )
    {
        // espaço em branco
        cout << ' ';

        // loop for primeiro triângulo
        for( int i = 1; i <= controle; i++ )
        {
            // imprime espaço em branco
            cout << ' ';
        } // fim for primeiro

        // loop for segundo triângulo
        for( int j = valor - 1; j >= controle; j-- )
        {
            // imprime
            cout << '*';
        } // fim for segundo

        for( int i = valor - 2; i >= controle; i-- )
        {
            cout << '*';
        } // fim for

        // pula linha
        cout << endl;
    } // fim for controle

    // pula linha
    cout << endl;

    system("pause"); // pausa do programa

    return 0; // programa terminado com sucesso

} // fim main
