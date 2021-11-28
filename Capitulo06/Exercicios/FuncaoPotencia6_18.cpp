/*
    6.18 Escreva uma função integerPower( base, exponent) que retorna o valor de
    baseexponent  Por exemplo, integerPower( 3, 4) = 3 * 3 * 3 * 3.
    Pressuponha que o expoente seja um inteiro não-zero positivo e que a  base
    seja um inteiro. A função integerPower deve utilizar for ou while para controlar
    o cálculo. Não utilize funções da biblioteca  matemática.
    Deitel, Harvey; Paul, Harvey. C++ Como Programar (p. 243). Edição do Kindle.
    Autor: Pedro Filho, 13/09/2021
*/

// incluir biblioteca
#include <iostream> // para cout e cin
#include <locale> // para setlocale
#include <iomanip> // para setw, fixed, setprecision

using namespace std;

// protótipo função
int integerPower( int base, int expoente );

// função principal
int main()
{
    // localização geográfica
    setlocale( LC_ALL, "portuguese");

    // limpa a tela
    system("cls");

    // variáveis
    int base = 0;
    int expoente = 0;

    // cabeçalho
    cout << "\tPOENCIAÇÃO" << endl;

    // entrada de dados
    cout << "Digite o valor da base e o expoente: ";
    cin >> base >> expoente;

    // imprime o resultado
    cout << base << " elevado a " << expoente << " = "
            << integerPower( base, expoente ) << endl;

    // pula linha
    cout << endl;

    system("pause"); // pausa do programa

    return 0; // programa terminado com sucesso

} // fim main

// função integerPower
int integerPower( int base, int expoente )
{
    int potencia = 1;

    // loop para calcular a potência
    for( int i = 1; i <= expoente; i++ )
    {
        potencia *= base;
    } // fim loop para calcular a potência

    return potencia;
} // fim função
