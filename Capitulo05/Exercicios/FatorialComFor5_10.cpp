/*
    5.10 A função fatorial é freqüentemente utilizada em problemas de probabilidade.
    Utilizando a definição de fatorial no Exercício 4.35, escreva  um programa que
    utiliza uma instrução for para avaliar o fatorial dos inteiros de 1 a 5. Imprima os
    resultados no formato de tabela. Que  dificuldade poderia impedir você de calcular
    o fatorial de 20?
    Deitel, Harvey; Paul, Harvey. C++ Como Programar (p. 178). Edição do Kindle.
    Autor: Pedro Filho, 28/08/2021
*/

// incluir biblioteca
#include <iostream>
#include <locale>
# include <iomanip>

using namespace std;

// função principal
int main()
{
    // localização geográfica
    setlocale( LC_ALL, "portuguese");

    // limpa a tela
    system("cls");

    // variáveis
    int contador;
    float fatorial = 1;

    // cabeçalho
    cout << setw(10) << "FATORIAL\n"
            << setw( 5 ) << "Valor"
            << setw( 25 ) << "Valor do fatorial" << endl;

    // configura o número dos decimais
    cout << fixed << setprecision( 0 ) << endl;

    // loop for para controlar o contador
    for( int numero = 1; numero <= 20; numero++ )
    {
        // loop for para calcular o fatorial
        for( contador = numero; contador >= 1; contador-- )
        {
            // calcula o fatorial do número
            fatorial *= contador;

        } // fim for externo

        // imprime
        cout << setw( 3 ) << numero << "!  = " << setw( 20 ) << fatorial << endl;
        fatorial = 1;

    } // fim for interno

    // pula linha
    cout << endl;

    system("pause"); // pausa do programa

    return 0; // programa terminado com sucesso

} // fim main
