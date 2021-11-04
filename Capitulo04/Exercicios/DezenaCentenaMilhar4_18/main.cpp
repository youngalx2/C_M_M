/*
    4.18 Escreva um programa em C++ que utiliza uma instrução while e a seqüência
    de escape de tabulação, \t, para imprimir a seguinte tabela  de valores:
    N 10*N 100*N 1000*N
    Deitel, Harvey; Paul, Harvey. C++ Como Programar (p. 135). Edição do Kindle.
*/
#include <iostream>

using namespace std;

int main()
{
    // cria variáveis
    int contador = 1;

    // cabeçalho
    cout << "N\tN*10\tN*100\tN*1000" << endl;

    // enquanto contador menor ou igual a 10
    while( contador <= 5)
    {
        // imprime contador
        cout << contador << "\t" << contador * 10 << "\t" << contador * 100 << "\t" << contador * 1000 << endl;

        contador++; // incrementa contador
    } // fim while

    return 0; // fim do programa

} // fim main
