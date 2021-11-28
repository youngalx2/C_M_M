/*
    1.2.18 Escreva um programa que receba dois argumentos inteiros de linha de comando xey
    e imprima a distância euclidiana do ponto (x, y) à origem (0, 0).
    Sedgewick, Robert; Wayne, Kevin. Computer Science (p. 46).
    Pearson Education. Edição do Kindle.
    @Pedro 16/11/2021
*/

#include <iostream>
#include <locale>
#include <cmath>
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
    int x1, x2, y1, y2;

    cout << "\tDISTÂNCIA EUCLIDIANS ENTRE  X e Y PONTOS" << endl;

    // entrada de dados
    cout << "Digite os valores de x1 e y1: ";
    cin >> x1 >> y1;
    cout << "Digite os valores de x2 e y2: ";
    cin >> x2 >> y2;

    // configura casas decimais de double
    cout << setprecision( 6 ) << endl;

    /*
        A Distância Euclidiana é definida como a soma da raiz quadrada
        da diferença entre x e y em suas respectivas dimensões.
        A fórmula para calcular a distância Euclidiana entre dois pontos é:
        sqrt( pow( ( x2 - x1 ), 2 ) + pow( (y2 - y1), 2 ) )
    */
    // calculo
    double distancia = sqrt( pow( (x2 - (x1) ), 2 ) + pow( (y2 - (y1) ), 2 ) );

    // imprime
    cout << "A distância Euclidiana entre x(" << x1 << ", "
            << y1 << ") e y(" << x2 << ", " << y2 << " ) = " << distancia << endl;

    system("pause"); // pausa do programa

    return 0; // programa terminado com sucesso

} // fim main
