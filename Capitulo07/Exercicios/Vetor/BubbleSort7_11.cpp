/*
    7.11 (Classificação por borbulhamento (bubble sort)) No algoritmo de classificação
    por borbulhamento, valores menores gradualmente  sobem para a parte superior
    do array como bolhas de ar subindo na água, enquanto as bolhas maiores afundam.
        A classificação por  borbulhamento faz várias passagens pelo array. Em cada
        passagem, sucessivos pares de elementos são comparados. Se um par estiver
        na ordem crescente (ou os valores forem idênticos), deixamos os valores como
        eles estão. Se um par estiver na ordem decrescente, seus  valores são trocados
        no array. Escreva um programa que classifica um array de 10 inteiros utilizando
        classificação por borbulhamento.
    Deitel, Harvey; Paul, Harvey. C++ Como Programar (p. 303). Edição do Kindle.
    Autor: Pedro Filho, 15/10/2021
*/

// incluir biblioteca
#include <iostream> // para cout e cin
#include <locale> // para setlocale
#include <iomanip> // para setw, fixed, setprecision
#define TAMANHO 10

using namespace std;

// protótipos
void bubbleSort( int [], int ); // organizador do vetor
void mostrarValores(const int [], int ); // mostra os valores do vetor

// função principal
int main()
{
    // localização geográfica
    setlocale( LC_ALL, "portuguese");

    // limpa a tela
    system("cls");

    // cria o vetor
    int numeros[ TAMANHO ] = { 9, 5, 7, 1, 4, 3, 6, 8, 0, 2 };

    cout << "Vetor original: "; // início
    // loop para mostrar o vetor original
    for( int i = 0; i < TAMANHO; i++ )
        cout << numeros[ i ] << " "; // imprime o vetor
    cout << endl; // pula linha

    // organiza o vetor
    bubbleSort( numeros, TAMANHO );
    // chama a função mostrar valores
    mostrarValores( numeros, TAMANHO );

    // pula linha
    cout << endl;

    system("pause"); // pausa do programa

    return 0; // programa terminado com sucesso

} // fim main

// cria a função bubbleSort
void bubbleSort( int vetor[], int tamanho )
{
    // cria variável
    int auxiliar = 0;

    // loop para organizar vetor em ordem crescente ou
    // decrescente ( basta inverter sinal de > para < )
    for( int maior = 0; maior < tamanho; maior++ )
    {
        for( int menor = 0; menor < tamanho; menor++ )
        {
            // se o valor do vetor menor for maior que o valor vetor maior
            if( vetor[ menor ] > vetor[ maior ] )
            {
                cout << "\nINÍCIO" << endl;
                cout << "vetor[ maior ] " << vetor[ maior ] << " era o menor valor " << endl;
                cout << "auxiliar = " << auxiliar << " recebe vetor[ maior ] = " << vetor[ maior ] << endl;
                // auxiliar recebe o valor do vetor maior
                auxiliar = vetor[ maior ];

                cout << "vetor[ maior ] = " << vetor[ maior ] << " recebe vetor[ menor ] = " << vetor[ menor ] << endl;
                // vetor maior recebe o valor do vetor menor
                vetor[ maior ] = vetor[ menor ];

                cout << "vetor[ menor ] = " << vetor[ menor ] << " recebe auxiliar = " << auxiliar << endl;
                // vetor menor recebe o valor do auxiliar
                vetor[ menor ] = auxiliar;
                cout << "vetor[ menor ] " << vetor[ menor ] << " é o menor valor agora." << endl;
                cout << "FIM" << endl;

            } // fim if
        } // fim for interno
    } // fim for externo
} // fim função bubbleSort

// cria vetor mostrarValores
void mostrarValores( const int vetor[], int tamanho )
{
    // loop para mostra os valores do vetor
    for( int valor = 0; valor < tamanho; valor++ )
    {
        cout << vetor[ valor ] << " ";
    } // fim for valor
} // fim função mostrarValores
