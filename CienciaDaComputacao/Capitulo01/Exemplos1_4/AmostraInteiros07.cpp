/*
    Este programa usa dois argumentos de linha de comando me n e
    produz uma amostra de m dos inteiros de 0 a n-1. Esse processo
    é útil não apenas em loterias estaduais e locais, mas em aplicações
    científicas de todos os tipos. Se o primeiro argumento for igual ao
    segundo, o resultado será uma permutação aleatória dos inteiros de
    0 a n-1. Se o primeiro argumento for maior que o segundo,
    o programa terminará com uma (Exceção de matriz fora dos limites).
    Sedgewick, Robert; Wayne, Kevin. Ciência da Computação (pp. 97-98-99).
    Pearson Education. Edição do Kindle.
    Feito por: 22/11/2021
*/

#include <iostream>
#include <locale>

using namespace std;

// função principal
int main()
{
    setlocale( LC_ALL, "portuguese"); // localização geográfica

    system("cls"); // limpa a tela

    // variáveis
    int m, n;

    // entrada de dados
    cout << "Digite dois inteiros diferentes: ";
    cin >> m >> n;

    // vetor
    int perm[ n ];

    // inicializa o vetor
    for( int i = 0; i < n; i++ )
        perm[ i ] = i;

    // peque uma amostra
    for( int j = 0; j < m; j++ )
    {
        // troque
        int r = rand() % n - 1;
        int t = perm[ r ];
        perm[ r ] = perm[ j ];
        perm[ j ] = t;
    } // fim for

    // imprime amostra
    for( int i = 0; i < m; i++ )
        cout << perm[ i ] << " ";

    cout << endl; // pula uma linha

    system("pause"); // pausa do programa

    return 0; // programa terminado com sucesso

} // fim main
