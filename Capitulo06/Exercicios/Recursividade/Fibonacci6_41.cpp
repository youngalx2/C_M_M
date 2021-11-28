/*
    6.41 (Série de Fibonacci) A série de Fibonacci  0, 1, 1, 2, 3, 5, 8, 13, 21,...
    inicia com os termos 0 e 1 e tem a propriedade de que cada termo sucessivo é
    a soma dos dois termos precedentes.
    (a) Escreva uma função  não recursiva fibonacci( n) que calcula o nésimo número de Fibonacci.
    (b) Determine o maior número de Fibonacci int que pode ser  impresso no seu
    sistema. Modifique o programa da parte (a) para utilizar double em vez de int
    a fim de calcular e retornar números de  Fibonacci e utilize esse programa
    modificado para repetir a parte (b).
    Deitel, Harvey; Paul, Harvey. C++ Como Programar (p. 246). Edição do Kindle.
    Autor: Pedro Filho, 23/09/2021
*/

// incluir biblioteca
#include <iostream> // para cout e cin
#include <locale> // para setlocale
#include <iomanip> // para setw, fixed,     setprecision

// protótipo
int fibonacci( int n );
double fibonacciDouble( double num );

using namespace std;

// função principal
int main()
{
    // localização geográfica
    setlocale( LC_ALL, "portuguese");

    // limpa a tela
    system("cls");

    // cabeçalho
    cout << "\tSEQUÊNCIA DE FIBONACCI" << endl;

    // chama a função fibonacci para inteiros
    fibonacci( 1000000000  );

    // chama a função fibonacci para double ( suporta números maiores ).
    fibonacciDouble( 1000000000000000 );

    // pula linha
    cout << endl;

    system("pause"); // pausa do programa

    return 0; // programa terminado com sucesso

} // fim main

// cria a função fibonacci inteiro
int fibonacci( int n )
{
    // variáveis
    int a = 0;
    int b = 1;
    int c = 0;

    // imprima
    cout << "Integer => 0 1 ";

    // enquanto b menor que n faça
    while( b < n )
    {
        // c recebe o valor da soma de a mais b
        c = a + b;
        // imprime o valor de c
        cout << c << " ";
            // a recebe b
            a = b;
            // e b recebe c; que fica livre para receber a soma de a mais b
            b = c;

    } // fim while com inteiros
} // fim da função fibonacci de inteiros

// cria a função fibonacci
double fibonacciDouble( double num )
{

    // variáveis
    double n1 = 0.0;
    double n2 = 1.0;
    double n3 = 0.0;

    cout << "\n\nDouble => 0 1 ";

    while( n2 < num )
    {
        n3 = n1 + n2;
        cout << n3 << " ";
            n1 = n2;
            n2 = n3;
    } // fim while com double

} // fim fibonacci double
