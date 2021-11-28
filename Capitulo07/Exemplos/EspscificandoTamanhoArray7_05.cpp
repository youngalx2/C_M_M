/*
    1// Figura 7.5: fig07_05.cpp
    2// Configura o array s para os inteiros pares de 2 a 20.
    Deitel, Harvey; Paul, Harvey. C++ Como Programar (p. 256). Edição do Kindle.
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

    // cria uma constante para especificar o tamanho do array
    const int tamanho = 10;

    // cria o array s com 10 elementos
    int s[ tamanho ];

    // loop para adicionar valores ao array s
    for( int i = 0; i < tamanho; i++ )
        // array s recebe os elementos
        s[ i ] = 2 + 2 * i;

    // cabeçalho
    cout << "ARRAY COM TMANHO ESPECÍFICO" << endl;

    // imprime uma tabela
    cout << "Elementos" << setw( 13 ) << "Valores" << endl;

    // loop para mostra os elementos e os valores do array
    for( int j = 0; j < 10; j++ )
        // imprime
        cout << setw(7) << j << setw( 13 ) << s[ j ] << endl;

    // pula linha
    cout << endl;

    system("pause"); // pausa do programa

    return 0; // programa terminado com sucesso

} // fim main
