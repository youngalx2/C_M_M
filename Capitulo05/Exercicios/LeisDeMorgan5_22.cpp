/*
    5.22 (Leis de De Morgan) Neste capítulo, discutimos os operadores lógicos &&, || e!.
    As leis de De Morgan às vezes podem tornar mais  conveniente para nós expressarmos
    uma expressão lógica. Essas leis afirmam que a expressão !( condição1 && condição2)
    é logicamente equivalente à expressão (!condição1 || !condição2). Além disso, a expressão
    !( condição1 || condição2) é logicamente equivalente à expressão (!condição1 && !condição2).
    Utilize as leis de De Morgan para escrever expressões equivalentes  para cada
    uma das seguintes, e então escreva um programa para mostrar que a expressão
    original e a nova expressão em cada caso são  equivalentes:
    a) !( x < 5) && !( y >= 7)
    b) !( a == b) || !( g != 5)
    c) !( (x <= 8) && (y > 4))
    d) !( (i > 4) || (j <= 6))
    Deitel, Harvey; Paul, Harvey. C++ Como Programar (p. 179). Edição do Kindle.
    Autor: Pedro Filho 01/09/2021
*/

// incluir biblioteca
#include <iostream>
#include <locale>
#include <iomanip>

using namespace std;

// função principal
int main()
{
    // localização geográfica
    setlocale( LC_ALL, "portuguese");

    // limpa a tela
    system("cls");

    // variáveis
    int x = 3, y = 7;

    // mostra resultado
    cout << "int x = 3, y = 7;" << endl;
    cout << "Dada a expressão a) !( x < 5) && !( y >= 7)\nequivale a !( x < 5 && y >= 7 ) = ";

    // condição
    if( ( !( x < 5) && !( y >= 7) )  == !( x < 5 && y >= 7 ) )
    {
        // imprima
        cout << "Verdade" << endl;
    } // fim if

    // b) !( a == b) || !( g != 5)
    int a = 5, b = a, g = 4;

    // imprima
    cout << "\nint a = 5, b = a, g = 4;" << endl;
    cout << "Dado a expresão b) !( a == b) || !( g != 5)\nequivale a !( a == b && g != 5) = ";

    // condição
    if(!( a == b) || !( g != 5) == !( a == b && g != 5) )
    {
        cout << "verdade" << endl;
    }
    else
    {
        cout << "falso" << endl;
    }

    // c) !( (x <= 8) && (y > 4))
    x = 5;
    y = 3;

    // imprime
    cout << "\nint x = 5, y = 3;" << endl;
    cout << "Dada a expressão c) !( (x <= 8) && (y > 4))\nequivale a ( !(x <= 8) || !(y > 4)) ";

    // condição
    if( !( (x <= 8) && (y > 4)) == ( !(x <= 8) || !(y > 4)) )
    {
        cout << "Verdade" << endl;
    }
    else
    {
        cout << "Falso" << endl;
    }


    // d) !( (i > 4) || (j <= 6))
    // variáveis
    int i = 5, j = 3;

    // imprime
    cout << "\nint i = 5, j = 3;" << endl;
    cout << "Dado a expressão d) !( (i > 4) || (j <= 6))\nequivale a ( !(i > 4) && !(j <= 6)) = ";

    // condição
    if( !( (i > 4) || (j <= 6)) == ( !(i > 4) && !(j <= 6) ) )
    {
        cout << "Verdade" << endl;
    }
    else
    {
        cout << "Falso" << endl;
    }

    // pula linha
    cout << endl;

    system("pause"); // pausa do programa

    return 0; // programa terminado com sucesso

} // fim main
