/*
    4. Escreva um programa que solicite ao usuário a inserção de dois valores inteiros.
    Armazene esses valores em variáveis ​​int chamadas val1 e val2. Escreva seu programa
    para determinar o menor, maior, soma, diferença, produto e proporção desses valores
    e relate-os ao usuário.
    Autor: Pedro,10/11/2021
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
    int val1, val2;
    int maior, menor;
    int soma, produto, diferenca, proporcao, resto;

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
    resto = val1 % val2;

    cout << "Menor = " << menor
            << "\nMaior = " << maior
            << "\nsoma = " << soma
            << "\nDiferença = " << diferenca
            << "\nProduto = " << produto
            << "\nProporção = " << proporcao
            << "\nResto = " << resto << endl;

    system("pause"); // pausa do programa

    return 0; // programa terminado com sucesso

} // fim main
