/*
    1// Figura 7.12: fig07_12.cpp
    2// Tratando arrays de caracteres como strings.
    Deitel, Harvey; Paul, Harvey. C++ Como Programar (p. 265). Edição do Kindle.
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

    // arrays
    char string1[ 20 ]; // array para 20 caracteres
    char string2[ ] = "string literal"; // array para 15 caracteres( tamanho da string )

    // lê a string fornecida pelo usuário para o array string1
    cout << "Entre com uma string \"Hellow there\": ";
    cin >> string1;

    // imprime a saída
    cout << "A string1 é " << string1 << "\nA string2 é " << string2 << endl;

    cout << "Imprime a string1 com espaços em branco entre os caracteres: " << endl;

    // loop para separar os caracteres da string 1
    for( int espaco = 0; espaco < string1[ espaco ]; espaco++ )
        // imprime o valor digitado com espaços entre cada caractere
        cout << string1[ espaco ] << ' ';

    cin >> string1;

    cout << "\no final da string1 é: " << string1 << endl;

    // pula linha
    cout << endl;

    system("pause"); // pausa do programa

    return 0; // programa terminado com sucesso

} // fim main
