/*
    6.10 Escreva um programa completo que solicita ao usuário o raio de uma esfera
    e calcula e imprime o volume dessa esfera. Utilize uma função  inline sphereVolume
    que retorna o resultado da seguinte expressão: (4.0/ 3.0) * 3.14159 * pow( radius, 3).
    Deitel, Harvey; Paul, Harvey. C++ Como Programar (p. 239). Edição do Kindle.
    Autor: Pedro Filho, 10/09/2021
*/

// incluir biblioteca
#include <iostream> // para cout e cin
#include <locale> // para setlocale
#include <iomanip> // para setw, fixed, setprecision
#include <cmath> // para pow( x, valor )

using namespace std;

// cria a constante pi
const double PI = 3.14159;

// protótipo de função
inline double volumeDaEsfera( const double raio );

// função principal
int main()
{
    // localização geográfica
    setlocale( LC_ALL, "portuguese");

    // limpa a tela
    system("cls");

    // cria variável
    double valorDoRaio;

    // configura saída de valores com 2 casas decimais
    cout << fixed << setprecision( 2 ) << endl;

    // entrada de dados
    cout << "Informe o valor do raio da esfera: ";
    cin >> valorDoRaio;

    // imprime o resultado
    cout << "O valor do volume da esfera com o raio de " << valorDoRaio
            << " é de " << volumeDaEsfera( valorDoRaio ) << endl;

    // pula linha
    cout << endl;

    system("pause"); // pausa do programa

    return 0; // programa terminado com sucesso

} // fim main

inline double volumeDaEsfera( const double raio )
{
    // retorna o cálculo do volume da esfera
    return ( 4.0 / 3.0 ) * PI * pow( raio, 3 );
} // fim função volumeDaEsfera
