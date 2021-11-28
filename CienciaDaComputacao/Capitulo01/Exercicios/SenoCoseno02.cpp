/*
    1.2.2 Escreva um programa que use Math.sin () e Math.cos () para verificar se
    o valor de cos2 θ + sin2 θ é aproximadamente 1 para qualquer θ inserido como
    um argumento de linha de comando. Basta imprimir o valor. Por que os valores
    nem sempre são exatamente 1?
    Autor: Pedro, 10/1/2021
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

    double seno = sin( 0 );
    double coseco = cos( 0 );

    cout << seno << " + " << coseco << " = " << seno + coseco << endl;

    system("pause"); // pausa do programa

    return 0; // programa terminado com sucesso

} // fim main
