/*
    1// Figura 5.2: fig05_02.cpp  2// Repetição controlada por contador com a instrução for.
    Deitel, Harvey; Paul, Harvey. C++ Como Programar (p. 143). Edição do Kindle.
    Autor:
*/

// incluir biblioteca
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

    // LOOP FOR
    for( int i = 1; i <= 10; i++ )
    {
        // imprima
        cout << i << " ";

    } // fim for

    // pula linha
    cout << endl;

    system("pause"); // pausa do programa

    return 0; // programa terminado com sucesso

} // fim main
