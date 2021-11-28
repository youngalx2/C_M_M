/*
    6.46 A função main pode ser chamada recursivamente em seu sistema?
    Escreva um programa contendo uma função main. Inclua a variável  local static
    count e a inicialize como 1. Pós-incremente e imprima o valor de count toda vez
    que main for chamada. Compile seu  programa. O que acontece?
    Deitel, Harvey; Paul, Harvey. C++ Como Programar (p. 247). Edição do Kindle.
    Autor: Pedro Filho, 27/09/2021
*/

// incluir biblioteca
#include <iostream> // para cout e cin
#include <locale> // para setlocale
#include <iomanip> // para setw, fixed, setprecision

using namespace std;

// função principal
int main()
{
    // localização geográfica
    setlocale( LC_ALL, "portuguese");

    // limpa a tela
    system("cls");

    // variável
    int static contar = 1;

    // imprima
    cout << "Main recursivo " << contar << endl;

    // contador de repetição
    contar++;

    // chama a função main
    main();

    // pula linha
    cout << endl;

    system("pause"); // pausa do programa

    return 0; // programa terminado com sucesso

} // fim main
