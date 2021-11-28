/*
    6.32 O máximo divisor comum (MDC) de dois inteiros é o maior inteiro que
    é divisível por cada um dos dois números. Escreva uma função  mdc que retorna
    o máximo divisor comum de dois inteiros.
    Deitel, Harvey; Paul, Harvey. C++ Como Programar (p. 244). Edição do Kindle.
    Autor: Pedro Filho, 19/09/2021
*/

// incluir biblioteca
#include <iostream> // para cout e cin
#include <locale> // para setlocale
#include <iomanip> // para setw, fixed, setprecision

using namespace std;

// protótipo
int calculaMDC( int n1, int n2 );

// função principal
int main()
{
    // localização geográfica
    setlocale( LC_ALL, "portuguese");

    // limpa a tela
    system("cls");

    // variável
    int num1, num2;
    int resultado;

    // cabeçalho
    cout << "MDC ENTRE DOIS VALORES" << endl;

    // entrada de dados
    cout << "Digite o primeiro número: ";
    cin >> num1;
    cout << "Digite o segundo número: ";
    cin >> num2;

    // resultado recebe o valor retornado da função calculaMDC
    resultado = calculaMDC( num1, num2 );

    // imprime resultado
    cout << "O MDC entre " << num1 << " e " << num2 << " é [" << resultado << "]" << endl;

    // pula linha
    cout << endl;

    system("pause"); // pausa do programa

    return 0; // programa terminado com sucesso

} // fint im main

// função mdc
int calculaMDC( int n1, int n2 )
{
    // cria variável
    int resto;

    // enquanto n2 diferente de zero faça
    while( n2 != 0 )
    {
        // resto recebe o valor do resto entre n1 e n2
        resto = n1 % n2;
        // n1 recebe o valor de n2
        n1 = n2;
        // n2 recebe o valor do resto
        n2 = resto;

    } // fim while

    // retorne o valor de n1
    return n1;

} // fim função mdc
