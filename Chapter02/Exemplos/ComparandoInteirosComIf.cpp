/*
    Comparando números inteiros usando if
    Autor:
*/

#include <iostream>
#include <locale>

using namespace std;

// função principal
int main()
{
    // define a localização geográfica
    setlocale(LC_ALL, "portuguese");

    // variáveis
    int numero1 = 0;
    int numero2 = 0;

    // entrada de dados
    cout << "Digite um inteiro: ";
    cin >> numero1;

    cout << "Digite outro inteiro: ";
    cin >> numero2;

    // condições
    if( numero1 == numero2 )
    {
        cout << numero1 << " == " << numero2;
    } // fim if

    if( numero1 != numero2 )
        cout << numero1 << " != " << numero2 << endl;

    if( numero1 <= numero2 )
        cout << numero1 << " <= " << numero2 << endl;

    if( numero1 >= numero2 )
        cout << numero1 << " >= " << numero2 << endl;

    if( numero1 < numero2 )
        cout << numero1 << " < " << numero2 << endl;

    if( numero1 > numero2 )
        cout << numero1 << " > " << numero2 << endl;

    return 0; // programa terminado com sucesso

} // fim main
