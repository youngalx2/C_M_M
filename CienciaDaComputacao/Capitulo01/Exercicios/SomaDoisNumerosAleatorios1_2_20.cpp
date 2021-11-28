/*
    1.2.20 Escreva um programa que imprima a soma de dois inteiros
    aleatórios entre 1 e 6 (como você pode obter ao rolar os dados).
    Sedgewick, Robert; Wayne, Kevin. Ciência da computação (p. 46).
    Pearson Education. Edição do Kindle.
    Feito por: Pedro, 16/11/2021
*/

#include <iostream>
#include <locale>
#include <cstdlib>
#include <ctime>

using namespace std;

// função principal
int main()
{
    setlocale( LC_ALL, "portuguese"); // localização geográfica

    system("cls"); // limpa a tela

    srand( time( 0 ) ); // gera semante aleatória

    // variável
    int alea1 = 1 + rand() % 6; // gera número aleatório entre 1 e 6 inclusive
    int alea2 = 1 + rand() % 6; // gera número aleatório entre 1 e 6 inclusive

    cout << "SOMA DE DOIS NÚMEROS ALEATÓRIOS" << endl;

    // imprime
    cout << "\t" << alea1 << " + " << alea2
            << " = " << alea1 + alea2 << endl;

    cout << endl; // pula uma linha

    system("pause"); // pausa do programa

    return 0; // programa terminado com sucesso

} // fim main
