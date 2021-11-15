/*
    5.8 Escreva um programa que utiliza uma instrução for para localizar o menor
    de vários inteiros. Assuma que o primeiro valor lido especifica  o número de
    valores restantes e que o primeiro número não é um dos inteiros a ser comparado.
    Deitel, Harvey; Paul, Harvey. C++ Como Programar (p. 178). Edição do Kindle.
    Autor: Pedro Filho, 28/08/2021
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
    int numeroDeValores;
    int i, cadastro;
    int menorValor = 0;

    // cabeçalho
    cout << "ENCONTRA O MENOR VALOR." << endl;

    // entrada de dados
    cout << "Digite o número de cadastros: ";
    cin >> numeroDeValores; // aguarda entrada de usuário

    // loop for para definição de cadastro
    for( i = 1; i <= numeroDeValores; i++ )
    {
        cout << "Digite o " << i << "º valor: ";
        cin >> cadastro;

        // se i igual a 1
        if( i == 1 )
            menorValor = cadastro;

        // se cadastro menor que menor valor
        if( cadastro < menorValor )
            // menor valor recebe cadastro
            menorValor = cadastro;
    } // fim for

    // imprime resultado
    cout << "\nO menor valor é " << menorValor << endl;

    // pula linha
    cout << endl;

    system("pause"); // pausa do programa

    return 0; // programa terminado com sucesso

} // fim main
