/*
    6.40 Escreva uma função recursiva power( base, exponent) que, quando invocada,
    retorna  base-expoente  Por exemplo, power( 3, 4) = 3 * 3 * 3 * 3. Suponha que
    exponent é um inteiro maior que ou igual a 1. Dica: O passo de  recursão utilizaria
    o relacionamento  base-expoente = base · baseexpoente – 1  e a condição de
    terminação ocorre quando exponent é igual a 1 porque  base1 = base
    Deitel, Harvey; Paul, Harvey. C++ Como Programar (p. 245). Edição do Kindle.
    Autor: Pedro Filho, 21/09/2021
*/

// incluir biblioteca
#include <iostream> // para cout e cin
#include <locale> // para setlocale
#include <iomanip> // para setw, fixed, setprecision

using namespace std;

// protótipos
int power( int base, int expoente );

// função principal
int main()
{
    // localização geográfica
    setlocale( LC_ALL, "portuguese");

    // limpa a tela
    system("cls");

    // variáveis
    int base, expoente;
    char resposta = ' ';

    // enquanto resposta diferente de n ou N faça
    while( resposta != 'n' )
    {
        // cabeçalho
        cout << "\tPOTENCIAÇÃO" << endl;

        // entreda de dados
        cout << "Informe o valor da base: ";
        cin >> base;
        cout << "Digite o expoente: ";
        cin >> expoente;

        // imprime resultado
        cout << base << " elevado a " << expoente << " = " << power( base, expoente ) << endl;

        // pergunta
        cout << "Deseja continuar ( s/n )? ";
        cin >> resposta;

        // se a resposta for sim
        if( resposta == 's' || resposta == 'S' )
            system("cls"); // limpa a tela

    } // fim while

    // pula linha
    cout << endl;

    system("pause"); // pausa do programa

    return 0; // programa terminado com sucesso

} // fim main

//cria a função recursiva power
int power( int base, int expoente )
{
    // se expoente igual a zero ou um
    if( expoente == 0 )
    {
        // retorne 1
        return 1;
    } // fim if
    else // se não
    {
        // retorne o produto da base vezes função power
        return base * power( base, expoente - 1 );
    } // fim else
} // fim função
