/*
    Mistério 02
    Autor: Pedro Filho, 18/08/2021
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

    // cria variáveis
    int linha = 5; // inicia linha
    int coluna; // declara coluna

    // enquanto linha menor ou igual a 1
    while( linha >= 1 )
    {
        coluna = 1;

            while( coluna <= 5 )
            {
                cout << ( linha % 2  ?"<<<" : ">>>" ) << endl;

                coluna++;
            } // fim while interno

            linha--;

    } // fim while externo

    system("pause"); // pausa do programa

    return 0; // programa terminado com sucesso

} // fim main
