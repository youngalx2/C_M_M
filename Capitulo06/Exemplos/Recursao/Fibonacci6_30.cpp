/*
    1// Figura 6.30: fig06_30.cpp
    2// Testando a função fibonacci recursiva.
    Deitel, Harvey; Paul, Harvey. C++ Como Programar (p. 224). Edição do Kindle.
*/

// incluir biblioteca
#include <iostream> // para cout e cin
#include <locale> // para setlocale
#include <iomanip> // para setw, fixed, setprecision

using namespace std;

// protótipo de função
unsigned long fibonacci( unsigned long );

// função principal
int main()
{
    // localização geográfica
    setlocale( LC_ALL, "portuguese");

    // limpa a tela
    system("cls");

    // cabeçalho
    cout << "FIBONACCI RECURSIVO" << endl;

    // loop para calcular fibonacci de 0 a 10
    for( int counter = 0; counter <= 10; counter++ )
    {
        // imprima resultado
        cout << "fibonacci ( " << counter << " ) = " << fibonacci( counter ) << endl;
    }

    // exibe valores de fibonacci mais altos
    cout << "Fibonacci ( 20 ) = " << fibonacci( 20 ) << endl;
    cout << "Fibonacci ( 30 ) = " << fibonacci( 30 ) << endl;
    cout << "Fibonacci ( 35 ) = " << fibonacci( 35 ) << endl;

    // pula linha
    cout << endl;

    system("pause"); // pausa do programa

    return 0; // programa terminado com sucesso

} // fim main

// função de fibonacci
unsigned long fibonacci( unsigned long number )
{
    // se o número igual a zero ou igual a 1
    if( number == 0 || number == 1 )
        // retorne o número
        return number;
    else
        // retorne
        return fibonacci( number - 1 ) + fibonacci( number - 2 );
} // fim função
