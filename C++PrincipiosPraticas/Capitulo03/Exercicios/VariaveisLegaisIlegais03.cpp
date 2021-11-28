/*
    3. Escreva um programa que não faz nada, mas declara uma série de
    variáveis ​​com nomes legais e ilegais (como int double = 0;),
    para que você possa ver como o compilador reage.
    Autor: Pedro, 10/11/2021
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

    // variáveis legais
    double num1 = 0;
    int a;
    char letra = 'a';

    // variáveis ilegais
    int 25num = 0;
    char *multiplos;
    double @sinal;

    system("pause"); // pausa do programa

    return 0; // programa terminado com sucesso

} // fim main
