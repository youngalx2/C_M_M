/*
    6.29 (Números perfeitos) Dizemos que um inteiro é um número perfeito se a
    soma de seus fatores, incluindo 1 (mas não o próprio número), é  igual ao número.
    Por exemplo, 6 é um número perfeito porque 6 = 1 + 2 + 3.
    Escreva uma função perfect que determina se o parâmetro  number é um número perfeito.
    Utilize essa função em um programa que determina e imprime todos os números perfeitos
     entre 1 e 1.000.  Imprima os fatores de cada número perfeito para confirmar se o número é
     de fato perfeito. Desafie o poder de seu computador testando  números muito maiores que 1.000.
    Deitel, Harvey; Paul, Harvey. C++ Como Programar (p. 244). Edição do Kindle.
    Autor: Pedro Filho, 18/09/2021
*/

// incluir biblioteca
#include <iostream> // para cout e cin
#include <locale> // para setlocale
#include <iomanip> // para setw, fixed, setprecision

using namespace std;

// protótipo
int NumeroPerfeito( int numero );

// função principal
int main()
{
    // localização geográfica
    setlocale( LC_ALL, "portuguese");

    // limpa a tela
    system("cls");

    // variável
    int num;
    int resultado = 0;

    // cabeçalho
    cout << "\tNÚMEROS PERFEITOS" << endl;

    // loop para encontrar os números perfeitos até 1000
    for( num = 1; num <= 18000; num++ )
    {
        //chama função número perfeito e atribui a resultado
        resultado = NumeroPerfeito( num );

        // se resultado igual a num
        if( resultado == num )
            cout << setw(7) << num << ' ';

    } // fim for

    // pula linha
    cout << endl;

    system("pause"); // pausa do programa

    return 0; // programa terminado com sucesso

} // fim main

// cria a função NumeroPerfeito
int NumeroPerfeito( int numero )
{
    // cria uma variável
    int soma = 0;

    // loop para somar os valores e encontrar o número perfeito
    for( int j = 1; j <= numero; j++ )
    {
        // soma a variável j
        soma += j;

        // se soma igual ao número
        if( soma == numero )
        {
            // retorne a soma
            return soma;
            break; // termina o programa

        } // fim if
    } // fim for
} // fim função
