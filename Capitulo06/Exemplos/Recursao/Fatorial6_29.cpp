/*
    1// Figura 6.29: fig06_29.cpp
    2// Testando a função fatorial recursiva.
    Deitel, Harvey; Paul, Harvey. C++ Como Programar (p. 223). Edição do Kindle.
*/

// incluir biblioteca
#include <iostream> // para cout e cin
#include <locale> // para setlocale
#include <iomanip> // para setw, fixed, setprecision

using namespace std;

// protótipo
unsigned long fatorial( unsigned long );

// função principal
int main()
{
    // localização geográfica
    setlocale( LC_ALL, "portuguese");

    // limpa a tela
    system("cls");

    // cabeçalho
    cout << "FATORIAL" << endl;

    // calcula o fatorial de 0 a 10
    for( int counter = 0; counter <= 10; counter++ )
    {
        // imprime
        cout << setw( 2 ) << counter << "! = " << fatorial( counter ) << endl;
    } // fim for

    // pula linha
    cout << endl;

    system("pause"); // pausa do programa

    return 0; // programa terminado com sucesso

} // fim main

// cria função fatorial
unsigned long fatorial(unsigned long number )
{
    // se número menor ou igual a 1
    if( number <= 1 ) // 0! = 1 ou 1! = 1
    {
        // retorna 1
        return 1;
    } // fim if
    else
    {
        return number * fatorial( number - 1 );
    } // fim else
} // fim função
