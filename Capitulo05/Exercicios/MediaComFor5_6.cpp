/*
    5.6 Escreva um programa que utiliza uma instrução for para calcular e imprimir
    a média de vários inteiros. Assuma que o último valor lido  é o sentinela 9999.
    Uma típica seqüência de entrada talvez seja  10 8 11 7 9 9999  que indica que
    o programa deve calcular a média de todos os valores que precedem 9999.
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
    int soma = 0;
    int media = 0;

    // loop for
    for( contar = 1; contar <= 100; contar++ )
    {
        // entrada de dados
        cout << "Digite o " << contar << "º número ( 9999 = sair ): ";
        cin >> numero;

        // se número igual a 9999
        if( numero == 9999 )
        {
            contar--;
            break;
        }

        // soma os números digitados
        soma += numero;
        media = soma / contar;

    } // fim for

    // imprima resultado
    cout << "Você digitou " << contar << " números, a soma é "
            << soma << " e a média é " << media << endl;

    // pula linha
    cout << endl;

    system("pause"); // pausa do programa

    return 0; // programa terminado com sucesso

} // fim main
