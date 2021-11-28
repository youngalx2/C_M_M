/*
    6.30 (Números primos) Dizemos que um inteiro é primo se ele é divisível somente por 1
    e ele próprio. Por exemplo, 2, 3, 5 e 7 são primos,  mas 4, 6, 8 e 9 não o são.
    a) Escreva uma função que determina se um número é primo.
    b) Utilize essa função em um programa que determina e imprime todos os números
    primos entre 2 e 10.000. Quantos desses 10.000  números você realmente tem de
    testar antes de certificar-se de que encontrou todos os primos?
    c) Inicialmente você poderia pensar que n/2 é o limite superior que deve testar
    para ver se um número é primo, mas você precisa ir apenas  até a raiz quadrada
    de n. Por quê? Reescreva o programa e execute-o de ambas as maneiras.
    Estime o melhor desempenho.
    Deitel, Harvey; Paul, Harvey. C++ Como Programar (p. 244). Edição do Kindle.
    Autor: Pedro Filho, 18/09/2021
*/

// incluir biblioteca
#include <iostream> // para cout e cin
#include <locale> // para setlocale
#include <iomanip> // para setw, fixed, setprecision

using namespace std;

// protótipo
void NumerosPrimos( int numero );

// função principal
int main()
{
    // localização geográfica
    setlocale( LC_ALL, "portuguese");

    // limpa a tela
    system("cls");

    // cabeçalho
    cout << "\tNÚMEROS PRIMOS ATÉ 1000" << endl;

    // chama a função números primos
    NumerosPrimos( 1000 );

    // pula linha
    cout << endl;

    system("pause"); // pausa do programa

    return 0; // programa terminado com sucesso

} // fim main

// cria a função números primos
void NumerosPrimos( int numero )
{
    cout << "2    3  5  7  11 13 17 19 23 29 31 ";

    // loop para mostrar os números primos
    for( int i = 2; i <= numero; i++ )
    {
        if( (i % 2 != 0) && ( i % 3 != 0 ) && ( i % 5 != 0 ) && ( i % 7 != 0 ) && ( i % 11 != 0 ) )
            if( ( i % 13 != 0 ) && ( i % 17 != 0) && ( i % 19 != 0) && ( i % 23 != 0 ) && ( i % 29 != 0 ) )
                if( ( i % 31 != 0 ) )
                    cout << setw( 5 ) << i << ' ';

    } // fim for
} // fim função
