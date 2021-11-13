/*
    1// Figura 5.5: fig05_05.cpp  2// Somando inteiros com a instrução for.
    Deitel, Harvey; Paul, Harvey. C++ Como Programar (p. 147). Edição do Kindle.
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
    int total = 0;

    // loop for até 20 de 2 em 2
    for( int numero = 2; numero <= 20; numero += 2 )
        total += numero; // soma os valores de número

    // imprime
    cout << "Soma = " << total << endl;

    // pula linha
    cout << endl;

    system("pause"); // pausa do programa

    return 0; // programa terminado com sucesso

} // fim main
