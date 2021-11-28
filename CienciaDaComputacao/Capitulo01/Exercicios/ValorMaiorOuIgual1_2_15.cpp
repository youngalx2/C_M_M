/*
    1.2.15 Escreva um programa que recebe três inteiros positivos como argumentos
    de linha de comando e imprime falso se qualquer um deles for maior ou igual à
    soma dos outros dois e verdadeiro caso contrário. (Nota: Este cálculo testa se
    os três números podem ser os comprimentos dos lados de algum triângulo.)
    Autor: Pedro, 15/11/2021
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

    // variáeis
    int n1, n2, n3;

    // entrada de dados
    cout << "Digite 3 inteiros diferentes: ";
    cin >> n1 >> n2 >> n3;

    // faz a comparação
    bool teste1 = n1 >= (n2 + n3) || n2 >= (n1 + n3) || n3 >= (n1 + n2);

    // estabelece a condição, se teste1 igual a zero
    if( teste1 == 0 ) // se verdade
        // imprima este
        cout << "Nenhum deles é maior que ou igual a soma dos outros valores." << endl;
    else // se falso
        // imprima este
        cout << "Um deles é maior que ou igual a soma dos outros valores." << endl;

    system("pause"); // pausa do programa

    return 0; // programa terminado com sucesso

} // fim main
