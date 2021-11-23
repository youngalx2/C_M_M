/*
    6.2 Para o programa na Figura 6.40, declare o escopo (escopo de função,
    de arquivo, de bloco ou de protótipo de função) de cada um dos  seguintes elementos:
    a) A variável x em main.
    b) A variável y em cube.
    c) A função cube.
    d) A função main.
    e) O protótipo de função para cube.
    f) O identificador y no protótipo de função para cube.
    Deitel, Harvey; Paul, Harvey. C++ Como Programar (p. 238). Edição do Kindle.
    09/09/2021
*/

// incluir biblioteca
#include <iostream> // para cout e cin
#include <locale> // para setlocale
#include <iomanip> // para setw, fixed, setprecision

using namespace std;

// protótipo de função
int cube( int y ); // y = escopo de protótipo de função

// função principal
int main()
{
    // localização geográfica
    setlocale( LC_ALL, "portuguese");

    // limpa a tela
    system("cls");

    // variável
    int x; // escopo de bloco

    // cabeçalho
    cout << " CUBO DOS NÚMEROS" << endl;
    cout << "******************" << endl;
    cout << "Número" << setw(10) << "Cubo" << endl;

    // loop for para calcular o cubo de 1 até 10
    for( x = 1; x <= 10; x++ )
        // chama a função cube e imprime o cubo dos valores de x
        cout << setw( 3 ) << x << setw( 13 ) << cube( x ) << endl;

    // pula linha
    cout << endl;

    system("pause"); // pausa do programa

    return 0; // programa terminado com sucesso

} // fim main

// cria a função cube
// y = escopo de função
int cube( int y )
{
    // retorne o cube de y
    return y * y * y;
} // fim função cube
