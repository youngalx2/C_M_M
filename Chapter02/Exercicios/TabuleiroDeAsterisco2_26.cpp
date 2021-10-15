/*
    2.26 Exiba o seguinte padrão de tabuleiro com oito instruções de saída e,
    em seguida, exiba o mesmo padrão utilizando o menor número de  instruções possível.
    Deitel, Harvey; Paul, Harvey. C++ Como Programar (p. 53). Edição do Kindle.
    Autor: Pedro, 04/08/2021
*/

#include <iostream>
#include <locale>

using namespace std;

// função principal
int main()
{
    // define a localização geográfica
    setlocale(LC_ALL, "portuguese");

    // mostra tabuleiro de asterisco
    cout << "* * * * * * *\n";
    cout << " * * * * * * *\n";
    cout << "* * * * * * *\n";
    cout << " * * * * * * *\n";
    cout << "* * * * * * *\n";
    cout << " * * * * * * *\n";
    cout << "* * * * * * *\n";
    cout << " * * * * * * *\n";

    return 0; // programa terminado com sucesso

} // fim main
