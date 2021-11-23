/*
    1// Figura 6.32: fig06_32.cpp
    2// Testando a função fatorial iterativa.
    Deitel, Harvey; Paul, Harvey. C++ Como Programar (p. 226). Edição do Kindle.
*/

// incluir biblioteca
#include <iostream> // para cout e cin
#include <locale> // para setlocale
#include <iomanip> // para setw, fixed, setprecision

using namespace std;

// protótipo de função
unsigned long fatorial( unsigned long );

// função principal
int main()
{
    // localização geográfica
    setlocale( LC_ALL, "portuguese");

    // limpa a tela
    system("cls");

    // cabeçalho
    cout << "FATORIAL INTERATIVO" << endl;

    // loop for para calcular o fatorial de 0 a 10
    for( int counter = 0; counter <= 10; counter++ )
        // imprime o resultado
        cout << setw( 2 ) << counter << "! = " << fatorial( counter ) << endl;

    // pula linha
    cout << endl;

    system("pause"); // pausa do programa

    return 0; // programa terminado com sucesso

} // fim main

// cria a função fatorial
unsigned long fatorial( unsigned long number )
{
    unsigned long result = 1;

    // loop para calcular o fatorial do número
    for( unsigned long i = number; i >= 1; i-- )
        result *= i;
} // fim função fatorial
