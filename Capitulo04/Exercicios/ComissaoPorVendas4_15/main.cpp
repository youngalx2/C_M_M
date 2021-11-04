#include <iostream>
#include "ComissaoPorVida.h"

using namespace std;

int main()
{
    // limpa a tela
    system("cls");

    // cria o objeto da classe ComissaoPorVendas
    ComissaoPorVendas minhaComissao;

    // minhaComissao chama a função entradaDeDados da classe
    minhaComissao.entradaDeDados();

    // pausa o programa
    system("pause");

    // fim do programa
    return 0;
} // fim main
