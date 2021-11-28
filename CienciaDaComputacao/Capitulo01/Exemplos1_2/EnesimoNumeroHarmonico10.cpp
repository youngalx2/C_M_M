/*
    n | número de termos somados
    i | índice de loop
    soma | soma acumulada
    Este programa recebe um argumento de linha de comando inteiro n
    e calcula o valor do enésimo número harmônico. O valor é conhecido
    por análise matemática como sendo cerca de ln (n) + 0,57721 para n grande.
    Observe que ln (1.000.000) + 0,57721 ≈ 14,39272.
    Sedgewick, Robert; Wayne, Kevin. Ciência da computação (p. 65).
    Pearson Education. Edição do Kindle.
    14/11/2021
*/

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

    // variável
    int valor;
    double soma = 0.0;

    cout << "ENÉSIMO NÚMERO HARMÔNICO" << endl;

    // entrada de dados
    cout << "Digite um número inteiro: ";
    cin >> valor;

    for( int i = 1; i <= valor; i++ )
    {
        soma += 1.0 / i;
    } // fim for

    cout << "Soma = " << soma << endl;

    system("pause"); // pausa do programa

    return 0; // programa terminado com sucesso

} // fim main
