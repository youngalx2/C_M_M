/*
    6.31 (Dígitos invertidos) Escreva uma função que aceita um valor inteiro e retorna
    o número com seus dígitos invertidos. Por exemplo, dado  o número 7.631,
    a função deve retornar 1.367.
    Deitel, Harvey; Paul, Harvey. C++ Como Programar (p. 244). Edição do Kindle.
    Autor: Pedro Filho, 18/09/2021
*/

// incluir biblioteca
#include <iostream> // para cout e cin
#include <locale> // para setlocale
#include <iomanip> // para setw, fixed, setprecision

using namespace std;

// protpotipo de função
int digitosInvertidos( int numero );

// função principal
int main()
{
    // localização geográfica
    setlocale( LC_ALL, "portuguese");

    // limpa a tela
    system("cls");

    // variável
    int num, resposta;

    // cabeçalho
    cout << "\tDIGITOS INVERTIDOS" << endl;

    // entrada de dados
    cout << "Digite um número até 99999: ";
    cin >> num;

    // reposta recebe o valor retornado da função digitos invertidos
    resposta = digitosInvertidos( num );

    // imprime o resultado
    cout << "o número digitado é " << num << " invertido ficou " << resposta << endl;

    // pula linha
    cout << endl;

    system("pause"); // pausa do programa

    return 0; // programa terminado com sucesso

} // fim main

// cria a função digitosInvertidos
int digitosInvertidos( int numero )
{
    // cria variáveis
    int n1, n2, n3, n4, n5;
    int juntar;

    // cálculo para separar digitos
    n1 = numero / 10000 % 10000;
    n2 = numero % 10000 / 1000;
    n3 = numero % 1000/ 100;
    n4 = numero % 100 / 10;
    n5 = numero % 10 / 1;

    // cálculo para juntar digitos
    juntar = (n5 * 10000) + (n4 * 1000 ) + (n3 * 100 ) + (n2 * 10) + (n1 * 1);

    // retorne o juntar
    return juntar;

} // fim função
