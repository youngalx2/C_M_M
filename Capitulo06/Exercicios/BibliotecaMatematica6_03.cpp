/*
    6.3 Escreva um programa que testa se os exemplos da chamada de função
    da biblioteca de matemática mostrados na Figura 6.2 realmente  produzem
    os resultados indicados.
    Deitel, Harvey; Paul, Harvey. C++ Como Programar (p. 238). Edição do Kindle.
    Autor: Pedro Filho, 09/09/2021
*/

// incluir biblioteca
#include <iostream> // para cout e cin
#include <locale> // para setlocale
#include <iomanip> // para setw, fixed, setprecision
#include <cmath>

using namespace std;

// função principal
int main()
{
    // localização geográfica
    setlocale( LC_ALL, "portuguese");

    // limpa a tela
    system("cls");

    // cabeçalho
    cout << "BIBLIOTECA MATEMÁTICA C++" << endl;

    // imprime resultado
    cout << "Ceil( x ) arredonda o x para o menor inteiro não menor que x" << endl;
    cout << "Ceil( 9.2 ) =  " << ceil( 9.2 ) << endl;
    cout << "Ceil( -9.8 ) =  " << ceil( -9.8 ) << endl;

    cout << "\nCo-seno Trigonométrico de x ( x em radianos ) = " << endl;
    cout << "cos( 0.0 ) = " << cos( 0.0 ) << endl;

    cout << "\nexp( x ) Função exponencial" << endl;
    cout << "exp( 1.0 ) = " << exp( 1.0 ) << endl;
    cout << "exp( 2.0 ) = " << exp( 2.0 ) << endl;

    cout << "\nfabs( x ) Valor absoluto de x " << endl;
    cout << "fabs( 5.1 ) = " << fabs( 5.1 ) << endl;
    cout << "fabs( 0.0 ) =  " << fabs( 0.0 ) << endl;
    cout << "fabs( -8.76 ) =  " << fabs( -8.76 ) << endl;

    cout << "\nfloor( x ) Arredonda x para um inteiro não maior que x" << endl;
    cout << "floor( 9.2 ) = " << floor( 9.2 ) << endl;
    cout << "floor( -9.8 ) = " << floor( -9.8 ) << endl;

    cout << "\nfmod( x, y ) Resto da divisão de x / y \ncom um resultado de ponto flutuante ( número real )"
            << endl;
    cout << "fmod( 2.6 / 1.2 ) = " << fmod( 2.6, 1.2 ) << endl;

    cout << "\nlog( x ) Logaritimo natural de x ( base e )" << endl;
    cout << "log( 2,718282 ) = " << log( 2.718282 ) << endl;
    cout << "log( 7.389056 ) = " << log( 7.389056 ) << endl;

    cout << "\nlog10( x ) Logaritimo de x ( base 10 ) = " << endl;
    cout << "log10( 10.0 ) = " << log10( 10.0 ) << endl;
    cout << "log10( 100.0 ) = " << log10( 100.0 )  << endl;

    cout << "\npow( x, y ) x elevado a y = " << endl;
    cout << "pow( 2, 7 ) = " << pow( 2, 7 ) << endl;
    cout << "pow( 9, 0.5 ) = " << pow( 9, 0.5 ) << endl;

    cout << "\nsin( x ) Seno trigonométrico de x ( x em radianos )" << endl;
    cout << "sin( 0.0 ) = " << sin( 0.0 ) << endl;

    cout << "\nsqrt( x ) Raiz quadrada de x ( onde x é um valor maior que zero )" << endl;
    cout << "sqrt( 81 ) = " << sqrt( 81 ) << endl;
    cout << "sqrt( 9.0 ) = " << sqrt( 9 ) << endl;

    cout << "\ntan( x ) Tangente Trigonométrica de x ( x em radianos )" << endl;
    cout << "tan( 15 ) = " << endl;

    // pula linha
    cout << endl;

    system("pause"); // pausa do programaendl;

    return 0; // programa terminado com sucesso

} // fim main
