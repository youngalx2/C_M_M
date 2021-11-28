/*
    1.3.8 Reescrever TenHellos para fazer um programa Hellos que leva
    o número de linhas para imprimir como um argumento de linha de
    comando. Você pode presumir que o argumento é menor que 1000.
    Dica: Use i% 10 ei% 100 para determinar quando usar st, nd, rd ou th
    para imprimir o enésimo Hello.
    Sedgewick, Robert; Wayne, Kevin. Ciência da Computação (p. 81).
    Pearson Education. Edição do Kindle.
    Feito por: Pedro, 19/11/2021
*/

#include <iostream>
#include <locale>

using namespace std;

// função principal
int main()
{
    setlocale( LC_ALL, "portuguese"); // localização geográfica

    system("cls"); // limpa a tela

    // variável
    int num;

    // entrada de dadps
    cout << "Digite um número inteiro: ";
    cin >> num;

    // loop for para num
    for( int i = 1; i <= num; i++ )
    {
        if( i % 100 >= 11 && i % 100 <= 20 )
            cout << "th Hello" << endl;
        else if( i % 10 == 1 ) cout << "st Hello" << endl;
        else if( i % 10 == 2 ) cout << "nd Hello" << endl;
        else if( i % 10 == 3 ) cout << "rd Hello" << endl;
    }

    cout << endl; // pula uma linha

    system("pause"); // pausa do programa

    return 0; // programa terminado com sucesso

} // fim main
