/*
    6.25 Escreva segmentos de programa que realizam cada uma das seguintes instruções:
    a) Calcule a parte inteira do quociente quando o inteiro a é dividido pelo inteiro b.
    b) Calcule o resto inteiro quando o inteiro a é dividido pelo inteiro b.
    c) Utilize as partes do programa desenvolvido em (a) e (b) para escrever uma
    função que insere um inteiro entre 1 e 32767 e o imprime  como uma série de
    dígitos, do qual cada par é separado por dois espaços.
    Por exemplo, o inteiro 4562 deve ser impresso da seguinte  maneira: 4  5  6  2
    Deitel, Harvey; Paul, Harvey. C++ Como Programar (p. 244). Edição do Kindle.
    Autor: Pedro Filho, 15/09/2021
*/

// incluir biblioteca
#include <iostream> // para cout e cin
#include <locale> // para setlocale
#include <iomanip> // para setw, fixed, setprecision

using namespace std;

// protótipos
void separarNumero( int numero );

// função principal
int main()
{
    // localização geográfica
    setlocale( LC_ALL, "portuguese");

    // limpa a tela
    system("cls");

    // variáveis
    int numero = 0;
    int resposta = 0;

    // enquanto resposta diferente de -1 faça
    while( resposta != -1 )
    {
        // entrada de dados
        cout << "Digite um número entre 1 e 99999: ";
        cin >> numero;

        // chama a função separarNumero
        separarNumero( numero );

        // resposta
        cout << "Deseja continuar (-1 = sair)? ";
        cin >> resposta;
    } // fim enquanto

    // pula linha
    cout << endl;

    system("pause"); // pausa do programa

    return 0; // programa terminado com sucesso

} // fim main

// cria a função separarNumero
void separarNumero( int numero )
{
    // cria variáveis
    int n1,n2,n3,n4,n5;

    // separando os números
    n1 = numero / 10000 % 10000;
    n2 = numero % 10000 / 1000;
    n3 = numero % 1000 / 100;
    n4 = numero % 100 / 10;
    n5 = numero % 10 / 1;

    // mostra número separado
    cout << n1 << "  " << n2 << "  " << n3 << "  " << n4 << "  " << n5 << endl;
} // fim função
