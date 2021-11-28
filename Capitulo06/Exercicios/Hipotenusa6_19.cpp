/*
    6.19 (Hipotenusa) Defina uma função hypotenuse que calcula o comprimento
    da hipotenusa de um triângulo reto quando os outros dois lados  são dados.
    Utilize essa função em um programa para determinar o comprimento da hipotenusa
    para cada um dos triângulos mostrados  abaixo. A função deve aceitar dois
    argumentos double e retornar a hipotenusa como um double.
    Deitel, Harvey; Paul, Harvey. C++ Como Programar (p. 243). Edição do Kindle.
    Autor: Pedro Filho, 19/09/2021
*/

// incluir biblioteca
#include <iostream> // para cout e cin
#include <locale> // para setlocale
#include <iomanip> // para setw, fixed, setprecision
#include <cmath>

using namespace std;

// protótipo de função
double hipotenusa( double ladoA, double ladoB );

// função principal
int main()
{
    // localização geográfica
    setlocale( LC_ALL, "portuguese");

    // limpa a tela
    system("cls");

    // variáveis
    double resposta = 0;
    double lado1 = 0, lado2 = 0;
    int contador = 1;

    // cabeçalho
    cout << "\tTRIÂNGULO RETÂNGULO" << endl;

    // configura os valores
    cout << fixed << setprecision(1) << endl;

    // enquanto contador diferente de -1
    while( contador != -1 )
    {
        // entrada de dados
        cout << "Digite o valor do ladoA do triângulo: ";
        cin >> lado1;
        cout << "Digite o valor do ladoB do triângulo: ";
        cin >> lado2;

        // chama a função hipotenusa e atribui os valores dos lados 1 e 2
        resposta = hipotenusa( lado1, lado2 );

        cout << "Triângulo" << setw(10) << "LadoA" << setw(10) << "LadoB"
                << setw(15) << "Hipotenusa" << endl;

        // imprimir resultado
        cout << setw(3) << contador << setw(15) << lado1 << setw(10) << lado2
                << setw(12) << sqrt( resposta ) << endl;

        // pergunta
        cout << "\nDeseja continuar (-1 = sair): ";
        cin >> contador;

        // se contador igual a -1
        if( contador == -1 )
            break; // sair do programa

    } // fim while

    // pula linha
    cout << endl;

    system("pause"); // pausa do programa

    return 0; // programa terminado com sucesso

} // fim main

// cria a função hipotenusa
double hipotenusa( double ladoA, double ladoB )
{
    // cria variável
    double hipo  = pow( ladoA, 2 ) + pow( ladoB, 2 );

    // retorne o valor
    return hipo;

} // fim função hipotenusa
