/*
    1.3.7 Suponha que i e j sejam ambos do tipo int. Qual é o valor
    de j depois que cada uma das seguintes instruções é executada?

    a. para (i = 0, j = 0; i <10; i ++) j + = i;
    b. para (i = 0, j = 1; i <10; i ++) j + = j;
    c. para (j = 0; j <10; j ++) j + = j;
    d. para (i = 0, j = 0; i <10; i ++) j + = j ++;

    Sedgewick, Robert; Wayne, Kevin. Ciência da Computação (p. 81).
    Pearson Education. Edição do Kindle.
    Feito por: Pedro Filho, 19/11/2021
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
    int i, j;

    // a. para (i = 0, j = 0; i <10; i ++) j += i;
    for( i = 0, j = 0; i < 10; i++)
        cout << j + i << " ";

    // b. para (i = 0, j = 1; i <10; i ++) j += j;
    for( i = 0, j = 1; i < 10; i++ )
       // cout << j += j << " ";

    // c. para (j = 0; j <10; j ++) j + = j;
    for( j = 0; j < 10; j++ )
        // cout << j += j;

    // d. para (i = 0, j = 0; i <10; i ++) j + = j ++;
    for( i = 0, j = 0; i < 10; i++ )
    // cout << j += j << " ";

    cout << endl; // pula uma linha

    system("pause"); // pausa do programa

    return 0; // programa terminado com sucesso

} // fim main
