/*
    8. Escreva um programa para testar um valor inteiro para determinar
    se ele é ímpar ou par. Como sempre, certifique-se de que sua saída seja
    clara e completa. Em outras palavras, não diga apenas sim ou não.
    Sua saída deve ser independente, como O valor 4 é um número par.
    Dica: Veja o operador restante (módulo) em §3.4.
    Autor: Pedro 10/11/2021
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
    int num = 0;

    cout<< "NÚMERO PAR ou ÍMPAR" << endl;

    // entrada de dados
    cout << "Digite um valor inteiro: ";
    cin >> num;

    if( num % 2 == 0 )
        cout << "O " << num << " é um número par." << endl;

    if( num % 2 != 0 )
        cout << "O " << num << " não é um número par." << endl;


    system("pause"); // pausa do programa

    return 0; // programa terminado com sucesso

} // fim main
