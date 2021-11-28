/*
    converter de polegadas para centímetros ou centímetros para polegadas
    um sufixo ‘i’ ou ‘c’ indica a unidade da entrada
    13/11/2021
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

    const double cm_per_inch = 2.54; // número de centímetros em uma polegada

    double comprimento = 1; // comprimento em polegadas ou centímetros

    char unidade = 0;

    cout << "POLEGADAS PARA CENTÍMETROS" << endl;

    cout << "Por favor, insira um comprimento seguido por uma unidade (c ou p): \n";
    cin >> comprimento >> unidade;

    if (unidade == 'p')
        cout << comprimento << " polegadas == " << cm_per_inch * comprimento << "cm \n";
    else // se não
        cout << comprimento << " centímetros == " << comprimento / cm_per_inch << "pl \n";

    system("pause"); // pausa do programa

    return 0; // programa terminado com sucesso

} // fim main
