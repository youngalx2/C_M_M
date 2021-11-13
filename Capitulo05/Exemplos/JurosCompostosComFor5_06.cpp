/*
    1// Figura 5.6: fig05_06.cpp  2// Cálculos de juros compostos com for.
    Deitel, Harvey; Paul, Harvey. C++ Como Programar (p. 148). Edição do Kindle.
    Autor:
*/

// incluir biblioteca
#include <iostream>
#include <locale>
#include <iomanip>
#include <cmath>

using namespace std;

// função principal
int main()
{
    // localização geográfica
    setlocale( LC_ALL, "portuguese");

    // limpa a tela
    system("cls");

    // variáveis
    double valorInicial = 1000.0; // valor inicial da aplicação
    double taxa = 0.05; // taxa de juros
    double saldo; // saldo em cada ano

    // mostra cabeçalho
    // SETW( 21 ) configura o campo para ficar com 21 caracteres
    cout << "Ano" << setw( 25 ) << " Quantia ou Depósito" << endl;

    // configura o número de ponto flutuante para ficar com 2 digitos finais
    cout << setprecision( 2 ) << fixed << endl;

    // loop para calcular a quantia de depósito feito em cada ano
    for( int ano = 1; ano <= 10; ano++ )
    {
        // calcula a quantia durante o ano específico
        saldo = valorInicial * pow( 1.0 + taxa, ano );

        // mostra o ano e a quantia
        cout << setw( 3 ) << ano << setw( 21 ) << saldo << endl;
    } // fim for

    // pula linha
    cout << endl;

    system("pause"); // pausa do programa

    return 0; // programa terminado com sucesso

} // fim main
