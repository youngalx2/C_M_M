/*
    6.13 Uma aplicação da função floor é arredondar um valor para o inteiro mais
    próximo. A instrução  y = floor( x + .5);  arredonda o número x para o inteiro
    mais próximo e atribui o resultado a y. Escreva um programa que lê vários
    números e utiliza a  instrução anterior para arredondar cada um desses números
    para o inteiro mais próximo. Para cada número processado, imprima ambos
    os números, o original e o arredondado.
    Deitel, Harvey; Paul, Harvey. C++ Como Programar (p. 242). Edição do Kindle.
    Autor: Pedro filho, 12/09/2021
*/

// incluir biblioteca
#include <iostream> // para cout e cin
#include <locale> // para setlocale
#include <iomanip> // para setw, fixed, setprecision
#include <cmath> // para floor ( arredondar o número )
#include <ctime>

using namespace std;

// função principal
int main()
{
    // localização geográfica
    setlocale( LC_ALL, "portuguese");

    // limpa a tela
    system("cls");

    // variáveis
    float x;
    int y;

    // configura o número para 2 casas decimais
    cout << fixed << setprecision( 2 ) << endl;

    // gerador
    srand( time( NULL) );

    // cabeçalho
    cout << "ARREDONDANDO NÚMEROS" << endl;

    // loop para gera valor aleatório
    for( int i = 1; i <= 20; i++ )
    {
        x = ( 1 + rand() % 50 ) / 3.14159; // gera número aleatório

        y = floor( x + .5 ); // arredonda o número x

        // mostra o resultado
        cout << "O valor arredondado de " << x << " é " << y << endl;

    } // fim for

    // pula linha
    cout << endl;

    system("pause"); // pausa do programa

    return 0; // programa terminado com sucesso

} // fim main
