/*
    4.30 Escreva um programa que lê o raio de um círculo (como um valor double)
    e calcula e imprime o diâmetro, a circunferência e a área.  Utilize o valor 3,14159 para π.
    Deitel, Harvey; Paul, Harvey. C++ Como Programar (p. 138). Edição do Kindle.
   Autor: Pedro,  20/08/2021
*/
// incluir biblioteca
#include <iostream>
#include <locale>

using namespace std;

// função principal
int main()
{
    // localização geográfica
    setlocale( LC_ALL, "portuguese");

    // limpa a tela
    system("cls");

    // variáveis
    double raio;
    double area = 0;
    double diametro = 0;
    double circunferencia = 0;
    double perimetro = 0;
    double pi = 3.14159;
    int resposta = 0;


    // entrada de dados
    cout << "Informe o tamanho do raio da círculo (-1 para sair): ";
    cin >> raio; // aguarda entrada do usuário

    while( raio != -1 )
    {
        // cálculos
        diametro = raio * 2;
        area = pi * raio * raio;
        circunferencia = 2 * pi * raio;

        // cabeçalho
        cout << "CÍRCULO" << endl;

        // mostra o resultado
        cout << "Diâmetro = " << diametro << endl;
        cout << "Área = " << area << endl;
        cout << "Circunférencia = " << circunferencia << endl;

        // entrada de dados
        cout << "\nInforme o tamanho do raio da círculo (-1 para sair): ";
        cin >> raio; // entrada do usuário

    } // fim while

    system("pause"); // pausa do programa

    return 0; // programa terminado com sucesso

} // fim main
