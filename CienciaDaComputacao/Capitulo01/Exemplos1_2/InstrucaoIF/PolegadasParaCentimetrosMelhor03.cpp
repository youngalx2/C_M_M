/*
    // converter de polegadas para centímetros ou centímetros para polegadas
    // um sufixo ‘p’ ou ‘c’ indica a unidade da entrada
    // qualquer outro sufixo é um erro
    03/11/2021
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

    const double cm_per_inch = 2.54; // número de centímetros em
                                                                                  // uma polegada
    double comprimento = 1; // comprimento em polegadas ou
                                                                                  // centímetros
    char unidade = ' '; // um espaço não é uma unidade

    cout << "Por favor, insira um comprimento seguido por uma unidade (c ou p): ";
    cin >> comprimento >> unidade;

    // se a unidade igual a p
    if (unidade == 'p')
        cout << comprimento << " polegadas == "  << cm_per_inch * comprimento << "cm" << endl;
    else if (unidade == 'c')
        cout << comprimento << " centímetros ==" << comprimento / cm_per_inch << "pl" << endl;
    else // se não
        cout << "Desculpe, não conheço uma unidade chamada '" << unidade << endl;;

    system("pause"); // pausa do programa

    return 0; // programa terminado com sucesso

} // fim main
