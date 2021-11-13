/*
    1// Figura 5.13: fig05_13.cpp  2// a instrução break sai de uma instrução for.
    Deitel, Harvey; Paul, Harvey. C++ Como Programar (p. 159). Edição do Kindle.
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

    // variável
    int contador;

    // loop for
    for( contador = 1; contador <= 10; contador++ )
    {
        // se o contador igual a 5
        if( contador == 5 )
            break; // saia do loop for

        // mostra os números
        cout << contador << " ";
    } // fim for

    // mostra
    cout << "\nBreak sai do loop quando o contador igual a " << contador << endl;

    // pula linha
    cout << endl;

    system("pause"); // pausa do programa

    return 0; // programa terminado com sucesso

} // fim main
