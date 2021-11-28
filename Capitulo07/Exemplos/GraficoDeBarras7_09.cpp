/*
    1// Figura 7.9: fig07_09.cpp
    2// Programa de impressão de gráfico de barras.
    Deitel, Harvey; Paul, Harvey. C++ Como Programar (p. 259). Edição do Kindle.
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

    // constante
    const int tamanho = 11;

    // array
    int notas[ tamanho ] = { 0, 0, 0, 0, 0, 0, 1, 2, 4, 2, 1 };

    // cabeçalho
    cout << "GRÁFICO DE BARRAS DAS NOTAS" << endl;

    // loop para  gerar gráfico de barras para cada nota no array
    for( int i = 0; i < tamanho; i++ )
    {
        // gera saída do rotulo do gráfico de barras
        if( i == 0 ) // se i igual a zero
        {
            // imprima
            cout << "   0-9: ";
        } // fim if
        // se não, se i igual a dez
        else if( i == 10 )
        {
            // imprima
            cout << "   100: ";
        } // fim else if
        // se não
        else
        {
            // imprima
            cout << " " << i * 10 << "-" << ( i * 10 ) + 9 << ":  ";
        } // fim else

        // loop para mostra o gráfico de barras
        for( int j = 0; j < notas[ i ]; j++ )
            // imprima
            cout << '*';

        cout << endl; //pula uma linha
    } // fim for externo

    // pula linha
    cout << endl;

    system("pause"); // pausa do programa

    return 0; // programa terminado com sucesso

} // fim main
