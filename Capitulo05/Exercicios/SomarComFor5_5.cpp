/*
    5.5 Escreva um programa que utiliza uma instrução for para somar uma seqüência
    de inteiros. Assuma que o primeiro inteiro lido especifica  o número de valores que
    restam a ser inseridos. Seu programa deve ler somente um valor por instrução de
    entrada. Uma típica seqüência  de entrada talvez seja  5 100 200 300 400 500
    onde o 5 indica que os valores 5 subseqüentes devem ser somados.
    Deitel, Harvey; Paul, Harvey. C++ Como Programar (p. 177). Edição do Kindle.
    Autor: Pedro Filho, 26/08/2021
*/

// incluir biblioteca
#include <iostream>
#include <locale>
#include <iomanip>

using namespace std;

// função principal
int main()
{
    // localização geográfica
    setlocale( LC_ALL, "portuguese");

    // limpa a tela
    system("cls");

    // variáveis
    int contar;
    int numero;
    int inteiro;
    int somar = 0;

    // entrada de dados
    cout << "Digite quantos números deseja inserir: ";
    cin >> numero;

    // loop for para n[umero
    for( contar = 1; contar <= numero; contar++ )
    {
        // entrada dos números para somar
        cout << "Digite o " << contar << "º inteiro: ";
        cin >> inteiro;

        // soma os inteiros
        somar += inteiro;

    } // fim for

    // mostra resultado
    cout << "A soma dos números digitados é " << somar << endl;

    // pula linha
    cout << endl;

    system("pause"); // pausa do programa

    return 0; // programa terminado com sucesso

} // fim main
