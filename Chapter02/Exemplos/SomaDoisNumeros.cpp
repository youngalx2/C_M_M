/*
    imprimindo a soma de dois números
    Autor:
*/

#include <iostream>
#include <locale>

using namespace std;

// função principal
int main()
{
    // define a localização geográfica
    setlocale(LC_ALL, "portuguese");

    // cria variáveis
    int numero1;
    int numero2;
    int soma;

    cout << "Digite o primeiro número: ";
    cin >> numero1;

    cout << "Digite o segundo número: ";
    cin >> numero2;

    soma = numero1 + numero2;

    cout << "A soma de " << numero1 << " + " << numero2 << " = " << soma;

    return 0; // programa terminado com sucesso

} // fim main
