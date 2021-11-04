/*
    1// Figura 4.18: fig04_18.cpp
    2// Programa de teste para classe Analysis.
    Deitel, Harvey; Paul, Harvey. C++ Como Programar (p. 120). Edição do Kindle.
*/

#include <iostream>
#include"Analysis.h"

using namespace std;

int main()
{
    // limpa a tela
    system("cls");

    // cria o objeto da classe
    Analysis minhaAnalise;

    minhaAnalise.examinaResultado();

    // pausa o sistema
    system("pause");

    // fim do programa
    return 0;
} // fim main
