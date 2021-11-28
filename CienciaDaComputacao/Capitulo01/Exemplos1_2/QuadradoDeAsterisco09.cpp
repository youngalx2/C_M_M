/*
    n | número de linhas e colunas
    i | índice de linha
    j | índice de coluna

    Este programa recebe um argumento de linha de comando inteiro n
    e usa loops for aninhados para imprimir uma tabela n por n com um
    asterisco na linha ie coluna j se i divide j ou j divide i. As variáveis de
    controle de loop i e j controlam a computação.
    Sedgewick, Robert; Wayne, Kevin. Ciência da computação (p. 63).
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

    cout << "IMPRIME UMA SETA" << endl;

    // entrada de dados
    cout << "Digite um valor inteiro: ";
    cin >> valor;

    // loop para a linha
    for( int i = 1; i <= valor; i++ )
    {
        // loop para a coluna
        for ( int j = 1; j <= valor; j++ )
        {
            // condições
            if( i % j == 0 || j % i == 0 ) // se verdade
                cout << "* "; // imprime asterisco
            else // se não
                cout << "  "; // imprime espaço em branco
        } // fim for coluna
        cout << i << endl; // pula uma linha
    } // fim for linha

    system("pause"); // pausa do programa

    return 0; // programa terminado com sucesso

} // fim main
