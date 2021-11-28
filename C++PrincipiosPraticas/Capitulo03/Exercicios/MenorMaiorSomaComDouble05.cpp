/*
    5. Modifique o programa acima para pedir ao usuário para inserir valores
    de ponto flutuante e armazená-los em variáveis ​​duplas. Compare as saídas
    dos dois programas para algumas entradas de sua escolha.
    Os resultados são iguais? Eles deveriam ser? Qual é a diferença?
    Autor: Pedro, 10/11/2021
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

    // variáveis
    double val1, val2;
    double maior, menor;
    double soma, produto, diferenca, proporcao, resto;

    cout << "OPERAÇÃO ARITIMÉTICA" << endl;

    // entrada de dados
    cout << "Digite dois valores inteiros: ";
    cin >> val1 >> val2;

    maior = val1;
    menor = val1;

    if( maior < val2)
        maior = val2;

    if( menor > val2 )
        menor = val2;

    soma = val1 + val2;
    diferenca = val1 - val2;
    produto = val1 * val2;
    proporcao = val1 / val2;

    cout << "Menor = " << menor
            << "\nMaior = " << maior
            << "\nsoma = " << soma
            << "\nDiferença = " << diferenca
            << "\nProduto = " << produto
            << "\nProporção = " << proporcao << endl;

    system("pause"); // pausa do programa

    return 0; // programa terminado com sucesso

} // fim main
