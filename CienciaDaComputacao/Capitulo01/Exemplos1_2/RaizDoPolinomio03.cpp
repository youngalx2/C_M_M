/*
    Este programa imprime as raízes do polinômio x2 + bx + c, usando
    a fórmula quadrática. Por exemplo, as raízes de x2 - 3x + 2 são 1 e 2,
    pois podemos fatorar a equação como (x - 1) (x - 2); as
    raízes de x2 - x - 1 são ϕ e 1 - ϕ, onde ϕ é a proporção áurea; e as raízes
    de x2 + x + 1 não são números reais.
    Sedgewick, Robert; Wayne, Kevin. Ciência da computação (p. 25).
    Pearson Education. Edição do Kindle.
    09/11/2021
*/

#include <iostream>
#include <locale>
#include <cmath>

using namespace std;

// função principal
int main()
{
    // localização geográfica
    setlocale( LC_ALL, "portuguese");

    // limpa a tela
    system("cls");

    // variáveis
    double num1, num2;

    // entrada de dados
    cout << "Digite dois números: ";
    cin >> num1 >> num2;

    // calcular
    double discriminante = num1 * num1 - 4.0 * num2;
    double d = sqrt( discriminante );

    // mostra resultado
    cout << (-num1 + d) / 2.0 << endl;
    cout << (-num1 - d) / 2.0 << endl;

    system("pause"); // pausa do programa

    return 0; // programa terminado com sucesso

} // fim main
