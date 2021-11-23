/*
    1// Figura 6.27: fig06_27.cpp
    2// Programa de teste do template de função maximum.
    Deitel, Harvey; Paul, Harvey. C++ Como Programar (p. 219). Edição do Kindle.
*/

// incluir biblioteca
#include <iostream> // para cout e cin
#include <locale> // para setlocale
#include <iomanip> // para setw, fixed, setprecision

// inclui a definição do template da função maximum
#include "TemplateDeFuncao6_26.h"

using namespace std;

// função principal
int main()
{
    // localização geográfica
    setlocale( LC_ALL, "portuguese");

    // limpa a tela
    system("cls");

    // cria variáveis inteiras
    int int1, int2, int3;

    // entrada de dados
    cout << "Digite três valores inteiros: ";
    cin >> int1 >> int2 >> int3;

    // chama a versão int de maximum
    cout << "O maior valor inteiro é " << maximum( int1, int2, int3 ) << endl;

    // variáveis do tipo double
    double double1, double2, double3;

    // entrada de dados
    cout << "\nDigite três valores reais: ";
    cin >> double1 >> double2 >> double3;

    // imprime o maior valor
    cout << "O maior valor é " << maximum( double1, double2, double3 ) << endl;

    // variáveis
    char char1, char2, char3;

    // entrada de dados
    cout << "\nDigite três caracteres: ";
    cin >> char1 >> char2 >> char3;

    // mostra resultado
    cout << "O maior caractere é " << maximum( char1, char2, char3 ) << endl;

    // pula linha
    cout << endl;

    system("pause"); // pausa do programa

    return 0; // programa terminado com sucesso

} // fim main
