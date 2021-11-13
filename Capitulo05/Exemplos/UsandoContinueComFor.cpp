/*
    1// Figura 5.14: fig05_14.cpp
    2// continua instrução que termina uma iteração de uma instrução for.
    Deitel, Harvey; Paul, Harvey. C++ Como Programar (p. 160). Edição do Kindle.
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
        // se contador igual a 5
        if( contador == 5 )
            continue; // pula o número 5 e continua no próximo

        // mostra o contador
        cout << contador << " ";

    } // fim for

    cout << "\nUsando continue para pular o número 5" << endl;

    // pula linha
    cout << endl;

    system("pause"); // pausa do programa

    return 0; // programa terminado com sucesso

} // fim main
