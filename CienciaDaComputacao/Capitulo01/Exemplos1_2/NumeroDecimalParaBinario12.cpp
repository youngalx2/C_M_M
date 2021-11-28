/*
    Programa 1.3.7 Conversão para binário

    n | inteiro para converter
    poder | potência atual de 2
    Este programa pega um inteiro positivo n como um argumento de linha
    de comando e imprime a representação binária de n, lançando fora potências
    de 2 em ordem decrescente .
    Sedgewick, Robert; Wayne, Kevin. Ciência da computação (p. 69).
    Pearson Education. Edição do Kindle.
    14/11/2021
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

    // Imprime a representação binária de n.
    int num;
    int potencia = 1;

    // entrada de dados
    cout << "Informe um número inteiro para ver seu binário: ";
    cin >> num;

    while(potencia <= num / 2)
    {
        potencia *= 2;
    } // fim while

    // Agora, a potência é a maior potência de 2 <= n.
    while(potencia > 0)
    {
        // Elimine potências de 2 em ordem decrescente.
        if (num < potencia)
        {
            cout << 0;
        }
        else
        {
            cout << 1;
            num -= potencia;
        } // fim else

            potencia /= 2;

    } // fim while

    cout << endl;

    system("pause"); // pausa do programa

    return 0; // programa terminado com sucesso

} // fim main
