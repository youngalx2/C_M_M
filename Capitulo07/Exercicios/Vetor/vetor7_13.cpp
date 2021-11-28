/*
    7.13 Escreva instruções simples que realizam as seguintes operações de um
    array unidimensional:
    a) Inicialize os 10 elementos do array de inteiros counts como zeros.
    b) Adicione 1 a cada um dos 15 elementos do array de inteiros bonus.
    c) Leia 12 valores para o array double monthlyTemperatures a partir do teclado.
    d) Imprima os 5 valores do array de inteiros bestScores em formato de coluna.
    Deitel, Harvey; Paul, Harvey. C++ Como Programar (p. 303). Edição do Kindle.
    Autor: Pedro Filho, 24/10/2021
*/

#include <iostream>
#include <locale>
#include <vector>

using namespace std;

// função principal
int main()
{
    // localização geográfica
    setlocale( LC_ALL, "portuguese");

    // limpa a tela
    system("cls");

    vector<int> numeros;

    system("pause"); // pausa do programa

    return 0; // programa terminado com sucesso

} // fim main
