/*
    1// Figura 7.8: fig07_08.cpp
    2// Calcula a soma dos elementos do array.
    Deitel, Harvey; Paul, Harvey. C++ Como Programar (p. 258). Edição do Kindle.
    Autor: 02/10/2021
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

    // cria a constante e inicializa
    const int tamanhoDoArray = 10;

    // cria array para 10 elementos
    int arrayNotas[ tamanhoDoArray ] = { 87, 68, 94, 100, 83, 78, 85, 91, 76, 87 };
    // cria variável
    int total = 0;

    // cabeçalho
    cout << "SOMA OS VALORES DO ARRAY" << endl;

    // loop para somar os valores do array
    for( int i = 0; i < tamanhoDoArray; i++ )
    {
        // imprime
        cout << arrayNotas[ i ] << ' ';

        // soma os valores do array
        total += arrayNotas[ i ];
    } // fim for

    // imprime o valor da soma
    cout << "\nO valor total dos elemsntos do array é " << total << endl;

    // pula linha
    cout << endl;

    system("pause"); // pausa do programa

    return 0; // programa terminado com sucesso

} // fim main
