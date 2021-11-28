/*
    Exercícios 1.3.1 Escreva um programa que receba três argumentos
    inteiros de linha de comando e imprima igual se todos os três forem
    iguais, e diferente de outra forma.
    Sedgewick, Robert; Wayne, Kevin. Ciência da Computação (p. 81).
    Pearson Education. Edição do Kindle.
    Feito por: Pedo, 17/11/2021
*/

#include <iostream>
#include <locale>

using namespace std;

// função principal
int main()
{
    setlocale( LC_ALL, "portuguese"); // localização geográfica

    system("cls"); // limpa a tela

    // variáveis
    int a, b, c;

    cout << "Digite 3 números diferentes: ";
    cin >> a >> b >> c;

    if( a == b && a == c )
        cout << "São todas iguais." << endl;
    else
        cout << "Não são iguais. " << endl;

    cout << endl; // pula uma linha

    system("pause"); // pausa do programa

    return 0; // programa terminado com sucesso

} // fim main
