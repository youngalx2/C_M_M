/*
    6.11 Mostre o valor de x depois que cada uma das seguintes instruções for realizada:
    a) x = fabs( 7.5)
    b) x = floor( 7.5)
    c) x = fabs( 0.0)
    d) x = ceil( 0.0)
    e) x = fabs( -6.4)
    f) x = ceil( -6.4)
    g) x = ceil( -fabs( -8 + floor( -5.5)))
    Deitel, Harvey; Paul, Harvey. C++ Como Programar (p. 242). Edição do Kindle.
    Autor: Pedro Filho, 10/09/2021
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

    // variável
    double x;

    // cabeçalho
    cout << "USANDO FUNÇÕES DA BIBLIOTECA CMATH" << endl;

    // imprime
    cout << "Mostrando o valor de x: " << endl;

     x = fabs(  7.5 );
     cout << "x = fabs(  7.5 ); = " << x << endl;

     x = floor(  7.5 );
     cout << "x = floor(  7.5 ); = " << x << endl;

     x = fabs(  0.0 );
     cout << "x = fabs(  0.0 ); = " << x << endl;

     x = ceil( 0.0 );
     cout << "x = ceil( 0.0 ); = " << x << endl;

     x = fabs( -6.4 );
     cout << "x = fabs( -6.4 ); = " << x << endl;

     x = ceil( -6.4 );
     cout << "x = ceil( -6.4 ); = " << x << endl;

    x = ceil( -fabs( -8 + floor( -5.5)));
    cout << "x = ceil( -fabs( -8 + floor( -5.5))) = " << x << endl;

    // pula linha
    cout << endl;

    system("pause"); // pausa do programa

    return 0; // programa terminado com sucesso

} // fim main
