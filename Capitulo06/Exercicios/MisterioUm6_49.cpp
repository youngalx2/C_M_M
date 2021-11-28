/*
    6.49 O que há de errado com o seguinte programa?
    Deitel, Harvey; Paul, Harvey. C++ Como Programar (p. 247). Edição do Kindle.
    Autor: 01/10/2021
*/

// incluir biblioteca
#include <iostream> // para cout e cin
#include <locale> // para setlocale
#include <iomanip> // para setw, fixed, setprecision

using namespace std;

// função principal
int main()
{
    // localização geográfica
    setlocale( LC_ALL, "portuguese");

    // limpa a tela
    system("cls");

    // variável
    int c;

    cout << "Entre com o valor de c: ";

    if( c = cin.get() != EOF )
    {
        main();

        cout << c;

    }
    // pula linha
    cout << endl;

    system("pause"); // pausa do programa

    return 0; // programa terminado com sucesso

} // fim main
