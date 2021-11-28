/*
    1// Figura 7.3: fig07_03.cpp
    2// Inicializando um array.
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

    // cria o array n
    int n[ 10 ]; // cria um array de 10 elementos

    // cabeçalho
    cout << "INICIALIZANDO ARRAY" << endl;

    // inicializa elementos do array n com 0
    for( int i = 0; i < 10; i++ )
        // configura elementos na posição i com 0
        n [ i ] = 0;

    // imprime
    cout << "Elementos" << setw( 13 ) << "Valor" << endl;

    // gera a saída do valor de cada elemento no array
    for( int j = 0; j < 10; j++ )
        // configura a saida dos elementos do array na tabela
        cout << setw( 7 ) << j << setw( 13 ) << n[ j ] << endl;

    // pula linha
    cout << endl;

    system("pause"); // pausa do programa

    return 0; // programa terminado com sucesso

} // fim main
