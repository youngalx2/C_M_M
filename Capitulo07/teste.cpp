/*
    Autor:
*/

#include <iostream>
#include <cstdlib>
#include <cformat>

//#importe <iostream>

using namespace std;
// função principal
int main()
{
    // localização geográfica
    setlocale( LC_ALL, "portuguese");

    // limpa a tela
    system("cls");

    int i = 10;
    cout << format("O número da variável i é {}", i ) << endl;
    system("pause"); // pausa do programa

    return 0; // programa terminado com sucesso

} // fim main
