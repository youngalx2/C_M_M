/*
    1// Figura 6.25: fig06_25.cpp
    2// Desfiguração de nomes.
    Deitel, Harvey; Paul, Harvey. C++ Como Programar (p. 218). Edição do Kindle.
    Autor:
*/

// incluir biblioteca
#include <iostream> // para cout e cin
#include <locale> // para setlocale
#include <iomanip> // para setw, fixed, setprecision

using namespace std;

// prototipos
int quadrado( int x )
{
    return x * x;
} // fim função

// cria a função quadrado
double quadrado( double y )
{
    return y * y;
} // fim função

// cria a função
void nada1( int a, float b, char c, int &d )
{

}

// cria a função nada2
int nada2( char a,  int b, float &c, double d )
{
    return 0;
}

// função principal
int main()
{
    // localização geográfica
    setlocale( LC_ALL, "portuguese");

    // limpa a tela
    //system("cls");

    // pula linha
    cout << endl;

    system("pause"); // pausa do programa

    return 0; // programa terminado com sucesso

} // fim main
