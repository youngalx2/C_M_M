/*
    4.33 Escreva um programa que lê três inteiros não-zero e determina e imprime
    se eles poderiam ser os lados de um triângulo reto.
    Deitel, Harvey; Paul, Harvey. C++ Como Programar (p. 138). Edição do Kindle.
    Autor: Pedro, 21/08/2021
*/

// incluir biblioteca
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

    // variáveis
    int base = 0;
    int altura = 0;
    int hipotenusa = 0;

    // entrada de dados
    cout << "Entre com a base do triângulo (-1 = sair): ";
    cin >> base;

    // enquanto base diferente de -1 faça
    while( base != -1 )
    {
        cout << "Entre com a altura: ";
        cin >> altura;
        cout << "Entre com a hipotenusa: ";
        cin >> hipotenusa;

        // se o quadrado da base mais o quadrado da altura igua ao quadrado da hipotenusa
        if( (base * base) + (altura * altura) == (hipotenusa * hipotenusa) )
        {
            // imprima o resultado
            cout << "Pode ser um triângulo reto." << endl;
        } // fim if
        else
        {
            cout << "Não pode ser um triângulo reto." << endl;
        } // fim else

        // entrada de dados
        cout << "\nEntre com a base do triângulo (-1 = sair): ";
        cin >> base;

    } // fim while

    system("pause"); // pausa do programa

    return 0; // programa terminado com sucesso

} // fim main
