/*
    4.31 O que há de errado com a seguinte instrução?
    Forneça a instrução correta para realizar o que o programador provavelmente
    estava tentando  fazer.
    cout << ++( x + y);
    Deitel, Harvey; Paul, Harvey. C++ Como Programar (p. 138). Edição do Kindle.
    Autor: Pedro, 21/08/2021
*/

// incluir biblioteca
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

    // cria variáveis e atribui valores
    int x = 5; // x recebe o valor 5
    int y = 7; // y recebe o valor 7

    // o (++) deve ser usado com as variáveis e não com uma expressão
    // tanto como pré ou pós (incremento)
    cout << "x = 5 e y = 7 " << endl;
    cout << x << " + " << y << " = " << (x + y) << endl;
    cout << endl;

    system("pause"); // pausa do programa

    return 0; // programa terminado com sucesso

} // fim main
