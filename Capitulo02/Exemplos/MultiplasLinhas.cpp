#include <iostream>
#include <locale>

using namespace std;
/*
    imprimindo uma linha com múltiplas linhas
*/
int main()
{
    // define a localização geográfica
    setlocale(LC_ALL, "portuguese");

    cout << "Olá, ";
    cout << "Mundo C++!\n";

    // programa terminado com sucesso
    return 0;

} // fim main
