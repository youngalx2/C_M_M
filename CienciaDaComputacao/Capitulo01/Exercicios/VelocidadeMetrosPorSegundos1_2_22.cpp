/*
    1.2.22 Escreva um programa que receba três argumentos duplos de
    linha de comando x0, v0 e t e imprima o valor de x0 + v0t - g t2 / 2,
    onde g é a constante 9,80665. (Observação: este valor é o deslocamento
    em metros após t segundos, quando um objeto é lançado diretamente da
    posição inicial x0 a uma velocidade de v0 metros por segundo.)
    Sedgewick, Robert; Wayne, Kevin. Ciência da computação (p. 46).
    Pearson Education. Edição do Kindle.
    Feito por: Pedro, 16/11/2021
*/

#include <iostream>
#include <locale>

using namespace std;

// função principal
int main()
{
    setlocale( LC_ALL, "portuguese"); // localização geográfica

    system("cls"); // limpa a tela

    const double g = 9.80665;
    double posicaoInicial = 0.0;
    double velocidade = 0.0;
    double tempo = 0.0;
    double deslocamento = 0.0;

    cout << "DESLOCAMENTO EM M/S" << endl;

    // entrada de dados
    cout << "Informe a posição inicial: ";
    cin >> posicaoInicial;
    cout << "Informe a velocidade: ";
    cin >> velocidade;
    cout << "Em quanto tempo? ";
    cin >> tempo;

    deslocamento = ( (posicaoInicial + velocidade) * tempo ) - g ;

    cout << "Deslocamento = " << deslocamento << "m/s" << endl;

    cout << endl; // pula uma linha

    system("pause"); // pausa do programa

    return 0; // programa terminado com sucesso

} // fim main
