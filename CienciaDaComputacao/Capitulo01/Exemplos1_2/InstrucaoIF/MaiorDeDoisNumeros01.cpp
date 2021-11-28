/*
    O maior valor de dois números
    12/11/2021
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
    int a = 0;
    int b = 0;

    // entrada de dados
    cout << "Por favor, insira dois inteiros \n";
    cin >> a >> b;

    // se a menor que b
    if (a < b) // condição
        // 1ª alternativa (tomada se a condição for verdadeira):
        cout << "Maior entre (" << a << "," << b << ") é " << b << endl;

    else // se não
        // 2ª alternativa (tomada se a condição for falsa):
        cout << "Maior entre (" << a << "," << b << ") é " << a << endl;

    system("pause"); // pausa do programa

    return 0; // programa terminado com sucesso

} // fim main
