/*
    Este programa recebe um argumento de linha de comando inteiro n e
    imprime uma tabela das potências de 2 que são menores ou iguais a 2n.
    Cada vez que passa pelo loop, ele aumenta o valor de ie dobra o valor
    da potência. Mostramos apenas as três primeiras e as três últimas linhas
    da tabela; o programa imprime n + 1 linhas.
    Sedgewick, Robert; Wayne, Kevin. Ciência da computação (p. 57).
    Pearson Education. Edição do Kindle.
    14/11/2021
*/

#include <iostream>
#include <locale>
#include <iomanip>

using namespace std;

// função principal
int main()
{
    // localização geográfica
    setlocale( LC_ALL, "portuguese");

    // limpa a tela
    system("cls");

    // variáveis
    int valor = 0;
    int contador = 0;

    cout << "Digite um valor para ver o dobro dele: ";
    cin >> valor;

    while( contador <= valor )
    {
        cout << setw( 5 );
        cout << contador << " - " << contador * contador << endl;

        contador++;

    } // fim while

    system("pause"); // pausa do programa

    return 0; // programa terminado com sucesso

} // fim main
