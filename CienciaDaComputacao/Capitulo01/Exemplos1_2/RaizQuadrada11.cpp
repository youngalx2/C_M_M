/*
    valor | argumento
    elipse | tolerância de erro
    estimativa | estimativa da raiz quadrada de c
    Este programa pega um número de ponto flutuante positivo c como um
    argumento de linha de comando e calcula a raiz quadrada de c para 15
    casas decimais de precisão, usando o método de Newton (ver texto).
    Sedgewick, Robert; Wayne, Kevin. Ciência da computação (pág. 66).
    Pearson Education. Edição do Kindle.
    14/11/2021
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

    // variável
    double valor;

    // entrada de dados
    cout << "Entre com o valor: ";
    cin >> valor;

    double elipse = sqrt( 2 );
    double estimativa = valor;

    while( abs( estimativa - valor / estimativa ) > elipse * estimativa )
    {
        estimativa = (valor / estimativa + estimativa ) / 2.0;
    } // fim while

    cout << estimativa << endl;

    system("pause"); // pausa do programa

    return 0; // programa terminado com sucesso

} // fim main
