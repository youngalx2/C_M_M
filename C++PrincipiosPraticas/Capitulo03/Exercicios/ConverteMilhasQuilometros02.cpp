/*
    2. Escreva um programa em C ++ que converta de milhas em quilômetros.
    Seu programa deve ter um prompt razoável para o usuário inserir um número
    de milhas. Dica: Existem 1,609 quilômetros para a milha.
    Autor: Pedro Filho, 10/11/2021
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

    double milhas = 1.609;
    double quilometros;

    cout << "QUILOMETROS EM MILHAS" << endl;

    // entrada de dados
    cout << "Digite o quilometros para conversão: ";
    cin >> quilometros;

    cout << "\t" << quilometros << " Km tem " << quilometros * milhas << " milhas." << endl;

    system("pause"); // pausa do programa

    return 0; // programa terminado com sucesso

} // fim main
