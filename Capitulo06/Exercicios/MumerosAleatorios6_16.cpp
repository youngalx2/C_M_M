/*
    6.16 Escreva instruções que atribuem inteiros aleatórios à variável n nos seguintes intervalos:
    a) 1 ≤ n ≤ 2
    b) 1 ≤ n ≤ 100
    c) 0 ≤ n ≤ 9
    d) 1.000 ≤ n ≤ 1.112
    e) –1≤ n ≤ 1  f) –3 ≤ n ≤ 11
    Deitel, Harvey; Paul, Harvey. C++ Como Programar (p. 243). Edição do Kindle.
    Autor: Pedro Filho, 18/09/2021
*/

// incluir biblioteca
#include <iostream> // para cout e cin
#include <clocale> // para setlocale
#include <iomanip> // para setw, fixed, setprecision
#include <ctime>

using namespace std;

// protótipos de função
void numerosAleatoriosA();
void numerosAleatoriosB();
void numerosAleatoriosC();
void numerosAleatoriosD();
void numerosAleatoriosE();
void numerosAleatoriosF();

// função principal
int main()
{
    // localização geográfica
    setlocale( LC_ALL, "portuguese");

    // limpa a tela
    system("cls");

    // gerador
    srand( time( NULL ) );

    // cabeçalho
    cout << "MOSTRA NÚMEROS ALEATÓRIOS DIVERSOS" << endl;

    // imprime
    cout << "Mostra os números entre a) 1 ≤ n ≤ 2" << endl;
    // chama a função numerosAleatorios
    numerosAleatoriosA();

    // imprime
    cout << "\nMostra os números entre b) 1 ≤ n ≤ 100" << endl;
    // chama a função numerosAleatorios
    numerosAleatoriosB();

    // imprime
    cout << "\nMostra os números entre d) 1.000 ≤ n ≤ 1.112" << endl;
    // chama a função numerosAleatorios
    numerosAleatoriosD();

    // imprime
    cout << "\nMostra os números entre e) –1≤ n ≤ 1 " << endl;
    // chama a função numerosAleatorios
    numerosAleatoriosE();

    // imprime
    cout << "\nMostra os números entre f) –3 ≤ n ≤ 11 " << endl;
    // chama a função numerosAleatorios
    numerosAleatoriosF();

    // pula linha
    cout << endl;

    system("pause"); // pausa do programa

    return 0; // programa terminado com sucesso

} // fim main

// a) 1 ≤ n ≤ 2
void numerosAleatoriosA()
{
    int n;
    for( int i = 1; i <= 10; i++ )
    {
        n = 1 + rand() % 2;
        cout << n << " ";
    } // fim for
} // fim função

// b) 1 ≤ n ≤ 100
void numerosAleatoriosB()
{
    int n;
    for( int i = 1; i <= 10; i++ )
    {
        n = 1 + rand() % 100;
        cout << n << " ";
    } // fim for
} // fim função

// c) 0 ≤ n ≤ 9
void numerosAleatoriosC()
{
    int n;
    for( int i = 1; i <= 10; i++ )
    {
        n = rand() % 9;
        cout << n << " ";
    } // fim for
} // fim função

// d) 1.000 ≤ n ≤ 1.112
void numerosAleatoriosD()
{
    int n;
    for( int i = 1; i <= 10; i++ )
    {
        n = 1000 + rand() % 112;
        cout << n << " ";
    } // fim for
} // fim função

// e) –1≤ n ≤ 1
void numerosAleatoriosE()
{
    int n;
    for( int i = 1; i <= 10; i++ )
    {
        n = -1 + rand() % 3;
        cout << n << " ";
    } // fim for
} // fim função

// f) –3 ≤ n ≤ 11
void numerosAleatoriosF()
{
    int n;
    for( int i = 1; i <= 10; i++ )
    {
        n = -3 + rand() % 14;
        cout << n << " ";
    } // fim for
} // fim função
