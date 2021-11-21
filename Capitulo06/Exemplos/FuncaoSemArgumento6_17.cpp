/*
    1// Figura 6.17: fig06_17.cpp
    2// Funções que não aceitam argumentos.
    Deitel, Harvey; Paul, Harvey. C++ Como Programar (p. 208). Edição do Kindle.
*/

// incluir biblioteca
#include <iostream> // para cout e cin
#include <locale> // para setlocale
#include <iomanip> // para setw, fixed, setprecision

using namespace std;

// protótipos
void function1();
void function2( void );

// função principal
int main()
{
    // localização geográfica
    setlocale( LC_ALL, "portuguese");

    // limpa a tela
    system("cls");

    // chama as funções
    function1();
    function2();

    // pula linha
    cout << endl;

    system("pause"); // pausa do programa

    return 0; // programa terminado com sucesso

} // fim main

// cria a função function1
void function1()
{
    cout << "\nFunção 1 sem parametros." << endl;
} // fim function1

// cria a função function2
void function2( void )
{
    cout << "\nFunção 2 sem parâmetros." << endl;
} // fim function2
