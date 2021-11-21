/*
    5.26 O que o seguinte segmento de programa faz?
    Deitel, Harvey; Paul, Harvey. C++ Como Programar (p. 180). Edição do Kindle.
    Autor:
*/

// incluir biblioteca
#include <iostream>
#include <locale>
#include <iomanip>

using namespace std;

// função principal
int main()
{
    // localização geográfica
    setlocale( LC_ALL, "portuguese");

    // limpa a tela
    system("cls");

    // loop for
    for( int i = 1; i <= 5; i++ )
    {
        // loop for para controlar o outro loop for
        for( int j = 1; j <= 3; j++ )
        {
            // loop for para desenhar uma linha de asterisco de 4 caracteres
            for( int k = 1; k <= 4; k++ )
                // imprime 4 asterisco
                cout << '*';

            // pula uma linha
            cout << endl;
        } // fim segundo for

        // pula uma linha
        cout << endl;

    } // fim primeiro for

    // pula linha
    cout << endl;

    system("pause"); // pausa do programa

    return 0; // programa terminado com sucesso

} // fim main
