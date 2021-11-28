/*
    Sensação termica - É a temperatura que sentimos provocada pelo efeito combinado
    entre a velocidade do vento e a temperatura do ar marcada pelos termômetros.
    ST = Sensação térmica em graus Celsius
    V = Velocidade do vento em metros por segundo
    T = Temperatura em graus Celsius
    formula => ST = 33 + (10 x sqrt( V ) + 10,45 - V) x (T - 33) / 22
    Escreva um programa que receba dois argumentos de linha de comando duplos,
    temperatura e velocidade, e imprima a sensação térmica.
    Use Math.pow (a, b) para calcular ab.
    Sedgewick, Robert; Wayne, Kevin. Ciência da Computação (p. 81).
    Pearson Education. Edição do Kindle.
    Feito por: Pedro Filho, 19/11/2021
*/

#include <iostream>
#include <locale>
#include <cmath>

using namespace std;

// função principal
int main()
{
    setlocale( LC_ALL, "portuguese"); // localização geográfica

    system("cls"); // limpa a tela

    // variáveis
    double temperatura;
    double veloDoVento;
    double senTermica = 0.0;

    cout << "SENSAÇÃO TERMICA" << endl;

    // entrada de dados
    cout << "Digite a temperatura em graus Celcius: ";
    cin >> temperatura;
    cout << "Digite a velocidade do vento: ";
    cin >> veloDoVento;

    // senTermica = 33 + (10 x sqrt( veloDoVento ) + 10,45 - veloDoVento ) x ( temperatura - 33 ) / 22
    // calcula a sensação térmica
    senTermica = 33 + (10 * sqrt( veloDoVento ) + 10.45 - veloDoVento ) * (temperatura - 33 ) / 22;

    // imprime o resultado
    cout << "A sensação térmica de " << temperatura << "ºC \ncom a velocidade do vento de "
            << veloDoVento << "Km é de " << senTermica << "ºC" << endl;

    cout << endl; // pula uma linha

    system("pause"); // pausa do programa

    return 0; // programa terminado com sucesso

} // fim main
