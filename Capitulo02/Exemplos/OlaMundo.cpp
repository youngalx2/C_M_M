/*
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

    cout << "Olá, Mundo C++!";

    return 0; // programa terminado com sucesso

} // fim main
