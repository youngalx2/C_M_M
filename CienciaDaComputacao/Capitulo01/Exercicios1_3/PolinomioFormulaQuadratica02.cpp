/*
    1.3.2 Escreva uma versão mais geral e mais robusta do Quadrático
    (PROGRAMA 1.2.3) que imprima as raízes do polinômio ax2 + bx + c,
    imprima uma mensagem apropriada se o discriminante for negativo e
    se comporte adequadamente (evitando a divisão por zero ) se a for zero.
    Sedgewick, Robert; Wayne, Kevin. Ciência da Computação (p. 81).
    Pearson Education. Edição do Kindle.
    Feito por: Pedro Filho, 18/11/2021
*/

#include <iostream>
#include <locale>
#include <cmath>

using namespace std;

// função principal
int main()
{
    setlocale( LC_ALL, "portuguese"); // localização geográfica

    system("cls"); // limpa a tela

    // variáveis
    double a = 0.0;
    double b =0.0;
    double c = 0.0;

    // entrada de dados
    cout << "Digite 2 valores: ";
    cin >> a >> c;

    // calcular
    double discriminante = a * a  - 4.0 * c;
    b = sqrt( discriminante );

    // mostra resultado
    cout << "( -a + b ) / 2.0 = " << ( -a + b ) / 2.0 << endl;
    cout << "( -a - b ) / 2.0 = " << ( -a - b ) / 2.0 << endl;

    cout << endl; // pula uma linha

    system("pause"); // pausa do programa

    return 0; // programa terminado com sucesso

} // fim main
