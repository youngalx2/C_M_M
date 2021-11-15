/*
    5.13 Uma aplicação interessante dos computadores são os desenhos de gráficos
    e gráficos de barras. Escreva um programa que lê cinco números
    (cada um entre 1 e 30). Suponha que o usuário insira apenas valores válidos.
    Para cada número lido, seu programa deve imprimir uma  linha contendo esse
    número de asteriscos adjacentes. Por exemplo, se seu programa lê o número 7,
    ele deve imprimir *******.
    Deitel, Harvey; Paul, Harvey. C++ Como Programar (p. 178). Edição do Kindle.
    Autor: Pedro Filho, 29/08/2021
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

    // variável
    int numero;
    int i;
    int resposta = 0;

    // enquanto resposta diferente de -1
    while( resposta != -1 )
    {
        // entrada de dados
        cout << "Digite um número entre 1 - 30: ";
        cin >> numero;

        // imprime o número e a barra de asterisco
        cout << " você digitou o número " << numero << ' ';

        // loop for para imprimir um gráfico de barras
        for( i = 1; i <= numero; i++ )
        {
            // imprime asterisco
            cout << '*';
        } // fim for

        // deseja continuar
        cout << "\nDeseja continuar (1=sim / -1=sair)? ";
        cin >> resposta;

        // limpa a tela
        system("cls");

    } // fim while

    // pula linha
    cout << endl;

    system("pause"); // pausa do programa

    return 0; // programa terminado com sucesso

} // fim main
