/*
    5.11 Modifique o programa de juros compostos da Seção 5.4 para repetir seus
    passos para as taxas de juros de 5%, 6%, 7%, 8%, 9% e 10%.
    Utilize uma instrução for para variar a taxa de juros.
    Deitel, Harvey; Paul, Harvey. C++ Como Programar (p. 178). Edição do Kindle.
    Autor: Pedro Filho, 28/08/2021
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
    double taxa = 0; // taxa de juros
    double taxaDeJuros = 0;
    double saldo; // saldo em cada ano

    // cabeçalho
    cout << "\tCALCULA JUROS COMPOSTOS A TAXA DE:" << endl;

    // mostra cabeçalho
    // SETW( 25 ) configura o campo para ficar com 25 caracteres alinhados à direita
    // depois da palavra Taxa sendo 20 da string e 5 espaço vazios
    cout << "Ano" << setw( 8 ) << "Taxa" << setw( 25 ) << "Quantia ou Depósito" << endl;

    // configura o número de ponto flutuante para ficar com 2 digitos finais Exp: ( 1000,00 ).
    cout << setprecision( 2 ) << fixed << endl;

    // loop para calcular a taxa de juros
    for(  taxaDeJuros = 5; taxaDeJuros <= 10; taxaDeJuros++ )
    {
        taxa = taxaDeJuros / 100;

        // mostra a taxa e pula uma linha
        cout << taxa << "%" << endl;

        // loop para calcular a quantia de depósito feito em cada ano
        for( int ano = 1; ano <= 10; ano++ )
        {
            // calcula a quantia durante o ano específico
            saldo = valorInicial * pow( 1.0 + taxa, ano );

            // mostra o ano a taxa e a quantia
            cout << setw( 3 ) << ano << setw( 8 ) << taxa << setw( 15 ) << saldo << endl;
        } // fim for interno

        // pula linha
        cout << endl;

    } // fim for externo

    // pula linha
    cout << endl;

    system("pause"); // pausa do programa

    return 0; // programa terminado com sucesso

} // fim main
