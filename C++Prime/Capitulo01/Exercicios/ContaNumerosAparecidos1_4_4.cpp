/*
    conta quantas vezes um número aprareceu
    04/11/2021
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

    int contaValor = 1;
    int valor = 0;
    int conta = 0;

    cout << "Digite um número inteiro: ";
    if( cin >> contaValor )
        conta = 1;

    cout << "Digite um número inteiro: ";
    while( cin >> valor )
    {
        if( valor == contaValor)
            ++conta;
        else
        {
            cout << contaValor << " ocorreu " << conta << " Vezes" << endl;
            contaValor = valor;
            conta = 1;
        } // fim else
    } // fim while

    cout << contaValor << " ocorreu " << conta << " Vezes" << endl;

    system("pause"); // pausa do programa

    return 0; // programa terminado com sucesso

} // fim main
