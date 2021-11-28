/*
    6. Escreva um programa que solicite ao usuário a inserção de três valores inteiros e,
    em seguida, produza os valores em sequência numérica separados por vírgulas.
    Portanto, se o usuário inserir os valores 10 4 6, a saída deve ser 4, 6, 10.
    Se dois valores forem iguais, eles devem ser ordenados juntos. Portanto, a entrada
    4 5 4 deve fornecer 4, 4, 5.
    Autor: Pedro, 10/11/2021
*/

#include <iostream>
#include <locale>
using namespace std;

// função principal
int main()
{
    // localização geográfica
    setlocale( LC_ALL, "portuguese");

    // limpa a tela
    system("cls");

    int val1, val2, val3;

    cout << "ORDENAÇÃO DE VALORES" << endl;

    // entrada de dados
    cout << "Digite 3 valores inteiros: ";
    cin >> val1 >> val2 >> val3;

    if( val1 < val2 && val2 < val3 && val3 > val1 ) // 1 2 3
        cout << val1 << " "<< val2 << " "<< val3 << endl;

    if( val1 < val2 && val1 <  val3 && val3 < val2 ) // 1 3 2
        cout << val1 << " " << val3 << " " << val2 << endl;

    if( val2 < val1 && val2 < val3 && val1 < val3 ) // 2 1 3
        cout << val2 << " " << val1 << " " << val3 << endl;

   if( val1 < val2 && val3 < val1 && val3 < val2 ) // 2 3 1
        cout << val3 << " " << val1 << " " << val2 << endl;

   if( val1 > val2 && val1 > val3 && val2 > val3 ) // 3 2 1
        cout << val3 << " " << val2 << " " << val1 << endl;

   if( val1 > val2 && val1 > val3 && val2 < val3 ) // 3 1 2
        cout << val2 << " " << val3 << " " << val1 << endl;

    if( val1 == val2 && val2 == val3  && val3 == val1 ) // todos iguais
        cout << val1 << ", " << val2 << ", " << val3 << endl;

    if( val1 == val2 && val3 > val1  && val3 > val2 ) // 1 1 2
        cout << val1 << ", " << val2 << ", " << val3 << endl;

    if( val1 == val2 && val3 < val1  && val3 < val2 ) // 2 2 1
        cout << val1 << ", " << val2 << ", " << val3 << endl;

    if( val1 < val2 && val1 < val3  && val2 == val3 ) // 1 2 2
        cout << val2 << ", " << val3 << ", " << val1 << endl;

    if( val1 > val2 && val1 > val3  && val2 == val3 ) // 2 1 1
        cout << val2 << ", " << val3 << ", " << val1 << endl;

    system("pause"); // pausa1 do programa

    return 0; // programa terminado com sucesso

} // fim main
