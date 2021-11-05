/*
    4.26 Um palíndromo é um número ou uma frase de texto que é lido da mesma
    forma da esquerda para a direita e da direita para a esquerda.
    Por exemplo, cada um dos seguintes inteiros de cinco dígitos é um palíndromo:
    12321, 55555, 45554 e 11611. Escreva um programa  que lê em um inteiro de
    cinco dígitos e determine se ele é ou não um palíndromo.
    [Dica: Utilize os operadores de divisão e módulo para  separar o número em seus
    dígitos individuais.]
    Deitel, Harvey; Paul, Harvey. C++ Como Programar (p. 138). Edição do Kindle.
    Autor: Pedro Filho, 19/08/2021
*/

// incluir biblioteca
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

    // cria variáveis
    int n1, n2, n3, n4, n5; // recebe digitos do número informado
    int numero; // recebe número informado pelo usuário

    // entrada de dados
    cout << "Digite um número entre 1000 e 99999 (-1 para sair): ";
    cin >> numero; // aguarda entrada do usuário

    // separando digitos
    n1 = numero / 10000 % 10000; // recebe o primeiro digito
    n2 = numero % 10000 / 1000; // recebe o segundo digito
    n3 = numero % 1000 / 100; // recebe o terceiro
    n4 = numero % 100 / 10; // recebe o quarto
    n5 = numero % 10 / 1; // recebe o quinto

    // mostra resultado
    cout << "O número: " << n1 << ' ' << n2 << ' ' << n3 << ' ' << n4 << ' ' << n5 << endl;

    if( n1 == n5 )
    {
    if( n2 == n4 )
    {
        cout << "É um palíndromo." << endl;
    } // fim if 2
    } // fim if 1

    if( n1 != n5 )
    {
    if( n2 != n4 )
    {
        cout << "Não é um palíndromo." << endl;
    } // fim if 2
    } // fim if 1

    system("pause"); // pausa do programa

    return 0; // programa terminado com sucesso

} // fim main
