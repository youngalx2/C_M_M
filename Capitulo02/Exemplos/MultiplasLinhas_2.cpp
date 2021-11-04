/*
    imprimindo múltiplas linhas com uma linha de código
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

    // ( \n ) = pule para próxima linha
    cout << "Olá,\nMundo\nC++\n";

    return 0; // programa terminado com sucesso

} // fim main
