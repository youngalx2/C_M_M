/*
    OBS: Esses exercícios deve ser escritos com as instruções aprendidas até este capítulo.
*/
#include <iostream>
#include <locale>
#include "Fatura.h"

using namespace std;

int main()
{
    // localização geográfica
    setlocale(LC_ALL, "portuguese");

    // cria variável
    int resultado = 0;

    // cria o objeto da fatura
    Fatura minhaFatura( "123", "Televisão", 2, 321 );

    // resultado recebe o valor retornado da função getValorTotal
    resultado = minhaFatura.getValorTotal(minhaFatura.getQuantidade(), minhaFatura.getPreco());

    // mostra fatura
    cout << "FATURA\n";
    cout << "Número: " << minhaFatura.getIdentidade() << endl;
    cout << "Produto: " << minhaFatura.getDescricao() << endl;
    cout << "Quantidade: " << minhaFatura.getQuantidade() << endl;
    cout << "Preço R$ " << minhaFatura.getPreco() << endl;
    cout << "Total a pagar R$ " << resultado << endl;

    // cria outro objeto da classe fatura
    Fatura minhaFatura1("321", "Celular", 3, 300 );

    // resultado recebe o valor retornado da função getValorTotal
    resultado = minhaFatura1.getValorTotal(minhaFatura1.getQuantidade(), minhaFatura1.getPreco());

    // mostra fatura
    cout << "\nFATURA\n";
    cout << "Número: " << minhaFatura1.getIdentidade() << endl;
    cout << "Produto: " << minhaFatura1.getDescricao() << endl;
    cout << "Quantidade: " << minhaFatura1.getQuantidade() << endl;
    cout << "Preço R$ " << minhaFatura1.getPreco() << endl;
    cout << "Total a pagar R$ " << resultado << endl;

    return 0;
}  // fim main
