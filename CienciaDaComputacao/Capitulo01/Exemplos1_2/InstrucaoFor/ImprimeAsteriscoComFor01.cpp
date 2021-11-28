/*
    imprime asterisco com for
    Feito por: 17/11/2021
*/

#include <iostream>
#include <locale>

using namespace std;

// função principal
int main()
{
    setlocale( LC_ALL, "portuguese"); // localização geográfica

    system("cls"); // limpa a tela

    // variáveis
    int num, i, j;

    cout << "DESENHA UMA SETA COM ASTERISCO" << endl;

    // entrada de dados
    cout << "Digite um inteiro: ";
    cin >> num;

    // loop para linha
    for( i = 1; i <= num; i++ )
    {
        // loop para a coluna
        for( j = 1; j <= num; j++ )
        {
            if( i % j == 0 || j % i == 0 )
            {
                cout << "* ";
            } // fim if
            else
            {
                cout << "  ";
            } // fim else
        } // fim for interno

        cout << i << endl; // pula linha

    } // fim for externo

    cout << endl; // pula uma linha

    system("pause"); // pausa do programa

    return 0; // programa terminado com sucesso

} // fim main
