/*
    5.2 Escreva uma instrução C++ ou um conjunto de instruções C++ para realizar
    cada uma das seguintes tarefas:
    a) Somar os inteiros ímpares entre 1 e 99 utilizando uma instrução for. Assumir
    que as variáveis de inteiro sum e count foram declaradas.
    b) Imprimir o valor 333.546372 em uma largura de campo de 15 caracteres com
    precisões de 1, 2 e 3. Imprimir cada número na mesma  linha. Alinhar à esquerda
    cada número em seu campo. O que os três valores imprimem?
    c) Calcular o valor de 2,5 elevado à potência de 3 utilizando a função pow.
    Imprimir o resultado com uma precisão de 2 em uma largura  de campo de 10 posições.
    O que é impresso?
    d) Imprimir os inteiros de 1 a 20 utilizando um loop while e a variável de contador x.
    Assumir que a variável x foi declarada mas não  foi inicializada. Imprimir somente
    5 inteiros por linha. [Dica: Utilizar o cálculo x% 5. Quando o valor disso for 0,
    imprimir um  caractere de nova linha; caso contrário, imprimir um caractere de tabulação.]
    e) Repetir o Exercício 5.2 (d) utilizando uma instrução for.
    Deitel, Harvey; Paul, Harvey. C++ Como Programar (p. 175). Edição do Kindle.
    Autor: Pedro filho, 25/08/2021
*/

// incluir biblioteca
#include <iostream>
#include <locale>
#include <iomanip>
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
    int soma = 0;
    int contar;
    int x;
    float valor = 333.546372;

    //a) Somar os inteiros ímpares entre 1 e 99 utilizando uma instrução for. Assumir
    //  que as variáveis de inteiro sum e count foram declaradas.
    cout << "A) " << endl;
    // loop for de a a 99
    for( contar = 1; contar <= 99; contar++ )
    {
        // se contar % 2 diferente de zero
        if( contar % 2 != 0 )
        {
            // soma o valor
            soma += contar;
            // imprime o valor
            cout << setw( 3 ) << contar << " ";

        } // fim if

        // se contar % 10 == 0
        if( contar % 10 == 0 )
            cout << endl; // pula linha

    } // fim for

    // mostra a soma
    cout << "\nsoma = " << soma << endl;

    /*
        b) Imprimir o valor 333.546372 em uma largura de campo de 15 caracteres com
            precisões de 1, 2 e 3. Imprimir cada número na mesma  linha. Alinhar à esquerda
    */
    cout << "\nB) Valor 333.546372 " << endl;
    cout << setw(15) << left << setprecision( 3 ) << fixed << valor
            << setw( 15 ) << left << setprecision( 2 ) << fixed << valor
            << setw( 15 ) << left << setprecision( 1 ) << fixed << valor << endl;

    /*
        c) Calcular o valor de 2,5 elevado à potência de 3 utilizando a função pow.
        Imprimir o resultado com uma precisão de 2 em uma largura  de campo de 10 posições.
        O que é impresso?
    */
    cout << setw(10 ) << fixed << setprecision( 2 ) << "\nC) O valor é " << pow( 2.5, 3 ) << endl;

    /*
        d) Imprimir os inteiros de 1 a 20 utilizando um loop while e a variável de contador x.
            Assumir que a variável x foi declarada mas não  foi inicializada. Imprimir somente
            5 inteiros por linha. [Dica: Utilizar o cálculo x% 5. Quando o valor disso for 0,
            imprimir um  caractere de nova linha; caso contrário, imprimir um caractere de tabulação.]
    */

    cout << "\nD) Tabela 5 x 5" << endl;
    x = 1; // contador x recebe 1
    // enquanto contador x menor ou igual a 20 faça
    while( x <= 20 )
    {
        // imprima x
        cout << setw( 3 ) << right << x << " ";

        // se x multiplo de 5
        if ( x % 5 == 0 )
            cout << endl; // pula linha

        // incrementa x
        x++;

    } // fim while

    /*
        e) Repetir o Exercício 5.2 (d) utilizando uma instrução for.
    */

    // cabeçalho
    cout << "\nE) " << endl;

    // loop for de 1 até 20
    for( contar = 1; contar <= 20; contar++ )
    {
        // imprime
        cout << setw( 3 ) << contar << " ";

        // se contar % 5 == 0
        if( contar % 5 == 0 )
        {
            // pula uma linha
            cout << endl;
        } // fim if

    } // fim for

    // pula linha
    cout << endl;

    system("pause"); // pausa do programa

    return 0; // programa terminado com sucesso

} // fim main
