// testa a classe MaiorValor
#include <iostream>
#include <locale>
#include "MaiorValor.h" // inclui a classe MaiorValor a função principal

using namespace std;

int main()
{
    // localizador geográfico
    setlocale( LC_ALL, "portuguese" );

    system("cls"); // limpa a tela

    // cria objeto maiorValor da classe MaiorValor
    MaiorValor maiorValor;

    // chama a função entradaDeDados com o objeto maiorValor
    maiorValor.entradaDeDados();

    system("pause" ); // pausa o programa

    // fim do programa
    return 0;
} // fim main
