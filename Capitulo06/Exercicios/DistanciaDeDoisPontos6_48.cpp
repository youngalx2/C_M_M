/*
    6.48 Escreva uma função distance que calcula a distância entre dois pontos
    (x1, y1) e (x2, y2). Todos os números e valores de retorno devem  ser do tipo double.
    Deitel, Harvey; Paul, Harvey. C++ Como Programar (p. 247). Edição do Kindle.
    Autor: Pedro Filho, 01/10/2021
*/

// incluir biblioteca
#include <iostream> // para cout e cin
#include <locale> // para setlocale
#include <iomanip> // para setw, fixed, setprecision
#include <cmath>

using namespace std;

// protótipo
double distanciaDoisPontos( double x1, double y1, double x2, double y2 );

// função principal
int main()
{
    // localização geográfica
    setlocale( LC_ALL, "portuguese");

    // limpa a tela
    system("cls");

    // variáveis
    double x1, x2, y1, y2;
    double resultado = 0;

    // configuração
    cout << fixed << setprecision( 2 ) << endl;

    // entrada de dados
    cout << "DISTÂNCIA ENTRE DOIS PONTOS" << endl;
    cout << "Digite os valores de A = ( x1, y1 ) e B = ( x2, y2 ): ";
    cin >> x1 >> y1 >> x2 >> y2;

    // resultado chama a função distanciaDoisPontos e recebe seu valor
    resultado = distanciaDoisPontos( x1, y1, x2, y2 );

    // imprime o resultado
    cout << "A distância entre A = ( " << x1 << ", " << y1<< " ) B = ( "
            << x2 << ", " << y2 << " ) é de " << resultado << endl;

    // pula linha
    cout << endl;

    system("pause"); // pausa do programa

    return 0; // programa terminado com sucesso

} // fim main

// cria a função distanciaDoisPontos
double distanciaDoisPontos( double x1, double y1, double x2, double y2 )
{
    // retorne a raiz quadrada das potências
    return sqrt( pow( (x2 - x1), 2 ) + pow( ( y2 - y1 ), 2 ) );

} // fim função distanciaDoisPontos
