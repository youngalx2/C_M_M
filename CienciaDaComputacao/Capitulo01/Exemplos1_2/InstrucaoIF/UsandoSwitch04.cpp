/*
    // você pode rotular uma instrução com vários rótulos de maiúsculas e minúsculas
    Usando switch
    13/11/2021
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

    cout << "PAR OU ÍMPAR" << endl;

    cout << "Por favor, insira um dígito: ";
    char a;
    cin >> a;

    switch (a)
    {
        case '0': case '2': case '4': case '6': case '8':
            cout << a << " é par." << endl;
            break;

        case '1': case '3': case '5': case '7': case '9':
            cout << a << " é ímpar." << endl;
            break;

        default:
            cout << "não é um dígito." << endl;
            break;
    } // fim swich

    system("pause"); // pausa do programa

    return 0; // programa terminado com sucesso

} // fim main
