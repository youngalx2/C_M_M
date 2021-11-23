/*
    6.4 Forneça o cabeçalho de função para cada uma das seguintes funções:
    a) A função hypotenuse, que aceita dois argumentos de ponto flutuante com
    dupla precisão side1 e side2 e retorna um resultado de  ponto flutuante com dupla precisão.
    b) A função smallest, que aceita três inteiros, x, y e z e retorna um inteiro.
    c) A função instructions, que não recebe argumentos e não retorna um valor.
    [Nota: Essas funções são comumente utilizadas para  exibir instruções ao usuário.]
    d) A função intToDouble, que aceita um argumento de inteiro, number, e retorna
    um resultado de ponto flutuante com dupla  precisão.
    Deitel, Harvey; Paul, Harvey. C++ Como Programar (p. 238). Edição do Kindle.
    Autor: Pedro Filho, 09/09/2021
*/

// incluir biblioteca
#include <iostream> // para cout e cin
#include <locale> // para setlocale
#include <iomanip> // para setw, fixed, setprecision

using namespace std;

// CABEÇALHO de função - exibe os nomes das variáveis
double hypotenuse( double side1, double side2 ); // a)
int smallest( int x, int y, int z ); // b)
void instructions( void ); // ou void instructions() => c)
double inToDouble( double numero ); // d)

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
