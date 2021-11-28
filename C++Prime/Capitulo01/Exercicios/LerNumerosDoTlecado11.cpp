/*
    ler números do tlecado
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

    int soma = 0;
    int valor = 0;
    cout << "Digite um número inteiro: ";
    while( cin >> valor )
        soma += valor;
    cout << "A soma dos valores digitados é " << soma << endl;

    system("pause"); // pausa do programa

    return 0; // programa terminado com sucesso

} // fim main
