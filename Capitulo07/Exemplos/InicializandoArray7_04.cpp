/*
    1// Figura 7.4: fig07_04.cpp
    2// Inicializando um array em uma declaração.
    Deitel, Harvey; Paul, Harvey. C++ Como Programar (p. 254). Edição do Kindle.
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

    // cria e inicializa o array de nome n com 10 elementos
    int n[ 10 ] = { 32, 27, 64, 18, 95, 14, 90, 60, 70, 37 };

    // cabeçalho
    cout << "INICIALIZANDO UM ARRAY" << endl;

    // imprime uma tabela
    cout << "Elementos" << setw( 13 ) << "Valores" << endl;

    // loop para mostra os elementos e os valores do array
    for( int i = 0; i < 10; i++ )
        // imprime
        cout << setw(7) << i << setw( 13 ) << n[ i ] << endl;

    // pula linha
    cout << endl;

    system("pause"); // pausa do programa

    return 0; // programa terminado com sucesso

} // fim main
