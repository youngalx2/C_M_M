/*
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

    // exemplo de código incorreto (falta uma quebra)

    const double cm_per_inch = 2.54; // número de centímetros em
                                                                                       // uma polegada
    double comprimento = 1; // comprimento em polegadas ou
                                                                                      // centímetros
    char unidade = 'a';

    cout << "Por favor, insira um comprimento seguido por uma unidade (c ou i): \ n";
    cin >> comprimento >> unidade;

    switch (unidade)
    {
           case 'p':
                cout << comprimento << " polegadas ==" << cm_per_inch * comprimento << "cm" << endl;
           case 'c':
                cout << comprimento << " centimetros ==" << comprimento / cm_per_inch << "in \ n";
    } // fim switch

    return 0; // programa terminado com sucesso

} // fim main
