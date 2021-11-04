/*
    4.17 O processo de localizar o maior número (isto é, o máximo de um grupo de valores)
    é freqüentemente utilizado em aplicativos de computador. Por exemplo, um programa
    que determina o vencedor de uma competição de vendas insere o número de unidades
    vendidas por  vendedor. O vendedor que vende mais unidades ganha a competição.
    Escreva um programa em pseudocódigo, e então um programa em  C++, que utiliza uma
    instrução while para determinar e imprimir o maior número dos dez números inseridos pelo
    usuário. Seu programa  deve utilizar três variáveis, como segue:
    counter: Um contador para contar até 10 (isto é, monitorar quantos números foram inseridos
    e determinar quando todos os 10 números foram processados).
    number: A entrada numérica atual para o programa.
    largest: O maior número encontrado até agora.
    Deitel, Harvey; Paul, Harvey. C++ Como Programar (p. 135). Edição do Kindle.
    Autor Pedro Filho, 16/06/2021.
*/

#include <iostream>
#include "MaiorValor.h" // inclui a classe MaiorValor

using namespace std;

// cria a função entradaDeDados para a classe MaiorValor
void MaiorValor::entradaDeDados()
{
    // cria as variáveis
    int contador = 1;
    int numero = 0;
    int maior = 0;

    // enquanto o contador menor ou igual a 10 faça
    while( contador <= 10 )
    {
        // imprime
        cout << "Digite " << contador << "º número inteiro: ";
        cin >> numero; // aguarda entrada do usuário

        // verifica se o contador é igual a 1
        if( contador == 1 ) // se verdade
            // maior recebe o número digitado
            maior = numero;

        // verifica se o número digitado é maior que maior
        if( numero > maior ) // se verdade
        {
            // maior recebe o número
            maior = numero;
        } // fim if

        // incrementa o contador em 1
        contador++;

    } // fim while

    // imprime o resultado
    cout << "O maior valor é " << maior << endl;

} // fim função
