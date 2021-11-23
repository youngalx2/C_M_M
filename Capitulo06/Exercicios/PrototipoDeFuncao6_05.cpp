/*
    6.5 Forneça o protótipo de função para cada uma das seguintes:
    a) A função descrita no Exercício 6.4(a).
    b) A função descrita no Exercício 6.4(b).
    c) A função descrita no Exercício 6.4(c).
    d) A função descrita no Exercício 6.4(d).
    Deitel, Harvey; Paul, Harvey. C++ Como Programar (p. 238). Edição do Kindle.
    Autor: Pedro Filho, 09/09/2021
*/

// incluir biblioteca
#include <iostream> // para cout e cin
#include <locale> // para setlocale
#include <iomanip> // para setw, fixed, setprecision

using namespace std;

// PROTÓTIPOS de função, não há necessidade dos nomes das variáveis
double hypotenuse( double, double ); // a)
int smallest( int, int, int ); // b)
void instructions( void ); // ou void instructions() => c)
double inToDouble( double ); // d)

// função principal
int main()
{
    // localização geográfica
    setlocale( LC_ALL, "portuguese");

    // limpa a tela
    system("cls");

    // pula linha
    cout << endl;

    system("pause"); // pausa do programa

    return 0; // programa terminado com sucesso

} // fim main
