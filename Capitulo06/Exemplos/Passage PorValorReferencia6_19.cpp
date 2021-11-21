/*
    1// Figura 6.19: fig06_19.cpp
    2// Comparando a passagem por valor e a passagem por referência com as referências.
    Deitel, Harvey; Paul, Harvey. C++ Como Programar (p. 211). Edição do Kindle.
*/

// incluir biblioteca
#include <iostream> // para cout e cin
#include <locale> // para setlocale
#include <iomanip> // para setw, fixed, setprecision

using namespace std;

// protótipos
int passagemPorValor( int );
void passagemPorReferencia( int & );

// função principal
int main()
{
    // localização geográfica
    setlocale( LC_ALL, "portuguese");

    // limpa a tela
    system("cls");

    // variável
    int x = 2;
    int z = 4;

    // cabeçalho
    cout << "PASSAGEM POR VALOR E POR REFERÊNCIA" << endl;

    // demonstra passagem por valor
    cout << "x = " << x << " antes da passagem por valor.";

    cout << "\nx = " << passagemPorValor( x )
            << " Valor retornado pela passagem por valor." << endl;

    // demonstra passagem por referência
    cout << "\nz = " << z << " antes da passagem por referência.";

    // chama a função passagem por referência
    passagemPorReferencia( z );

    // imprime
    cout << "\nz = " << z << " depois da passagem por refreência." << endl;

    // pula linha
    cout << endl;

    system("pause"); // pausa do programa

    return 0; // programa terminado com sucesso

} // fim main

// cria afunção passagemPorValor
int passagemPorValor( int numero )
{
    // retorne
    return numero *= numero;
} // fim função passagemPorValor

// cria funçtao passagemPorReferencia
void passagemPorReferencia( int &numeroPorRefe )
{
    numeroPorRefe *= numeroPorRefe;
} // fim função passagemPorReferencia
