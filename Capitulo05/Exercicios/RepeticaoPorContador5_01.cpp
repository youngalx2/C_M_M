/*
    1// Figura 5.1: fig05_01.cpp
    2// Repetição controlada por contador.
    Deitel, Harvey; Paul, Harvey. C++ Como Programar (p. 142). Edição do Kindle.
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
    int contador = 1; // declara e inicializa a var contador

    // enquanto o contador for menor ou igual a 10 faça
    while( contador <= 10 )
    {
        // imprima
        cout << contador << " ";
        contador++; // incrementa d contador
    } // fim while

    cout << endl; // pule uma linha

    system("pause"); // pausa do programa

    return 0; // programa terminado com sucesso

} // fim main
