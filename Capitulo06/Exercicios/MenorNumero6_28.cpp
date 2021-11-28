/*
    6.28 Escreva um programa que insere três números de ponto flutuante com dupla
    precisão e os passa para uma função que retorna o menor  número.
    Deitel, Harvey; Paul, Harvey. C++ Como Programar (p. 244). Edição do Kindle.
    Autor: Pedro Filho 18/09/2021
*/

// incluir biblioteca
#include <iostream> // para cout e cin
#include <locale> // para setlocale
#include <iomanip> // para setw, fixed, setprecision

using namespace std;

// protótipo
double menorValor( double x, double y, double z );

// função principal
int main()
{
    // localização geográfica
    setlocale( LC_ALL, "portuguese");

    // limpa a tela
    system("cls");

    // variáveis
    double n1, n2, n3;

    // entrada de dados
    cout << "Digite 3 números diferentes: ";
    cin >> n1 >> n2 >> n3;

    // imprime resultado
    cout << "O menor número é " << menorValor( n1, n2, n3 ) << endl;

    // pula linha
    cout << endl;

    system("pause"); // pausa do programa

    return 0; // programa terminado com sucesso

} // fim main

// cria a função menorValor
double menorValor( double x, double y, double z )
{
    // variável menor recebe x
    double menor = x;

    // se y menor que menor
    if( y < menor )
        menor = y; // menor recebe y

    // se não, se z menor que menor
    if( z < menor )
        menor = z; // menor recebe z

    // retorne o menor
    return menor;
} // fim
