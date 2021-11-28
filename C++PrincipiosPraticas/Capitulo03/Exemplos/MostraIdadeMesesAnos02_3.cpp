/*
    print name and age into double
    05/11/2021
*/

#include <iostream>
#include <locale>
#include <string>
using namespace std;

// função principal
int main()
{
    // localização geográfica
    setlocale( LC_ALL, "portuguese");

    // limpa a tela
    system("cls");

    cout << "Entre com o primeiro nome e a sua idade: ";

    string firstName;  // string variable
    int age; // integer variable
    cin >> firstName >> age; //  read a string and a integer

    cout << "Olá, " << firstName << " você tem "
            << age << " anos de idade\n\t"
            << "viveu " << age * 12 << " meses\n\t"
            << "isso equivale a " << age * 365 << " dias\n" << endl;

    system("pause"); // pausa do programa

    return 0; // programa terminado com sucesso

} // fim main
