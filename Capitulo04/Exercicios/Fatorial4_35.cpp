/*
    4.35 O fatorial de um inteiro não negativo n é escrito como n! (pronuncia-se ‘n fatorial’)
    e é definido como segue:
    n! = n · (n – 1) · (n – 2) ·... ·
    1 (para valores de n maiores que 1)  e  n! = 1 (para n = 0 ou n = 1).
    Por exemplo, 5! = 5 · 4 · 3 · 2 · 1, que é 120.
    Utilize instruções while em cada um dos seguintes:
    a) Escreva um programa que lê um inteiro não negativo e calcula e imprime seu fatorial.
    Deitel, Harvey; Paul, Harvey. C++ Como Programar (p. 139). Edição do Kindle.
    Deitel, Harvey; Paul, Harvey. C++ Como Programar (p. 138). Edição do Kindle.
    Autor: Pedro Filho, 22/08/2021
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

    // variáveis
    int numero = 0; // recebe o número do usuário
    int fatorial = 1; // calcula o fatorial
    int contador; // contador do while

    // entrada de dados
    cout << "Digite um inteiro para o fatorial: ";
    cin >> numero; // aguarda a entrada do usuário

    // mostra o inicio do fatorial
    cout << numero << "! = ";

    contador = numero; // contador recebe o número do usuários

    // enquanto o contador diferente de zero
    while( contador != 0 )
    {
        // calcula o fatorial
        fatorial *= contador;

        // mostra os valores do contador
        cout << contador << " x ";

        // contador recebe decremento
        contador--;

    } // fim while

    // mostra o valor do fatorial
    cout << "\b\b= " << fatorial << endl;

    system("pause"); // pausa do programa

    return 0; // programa terminado com sucesso

} // fim main
