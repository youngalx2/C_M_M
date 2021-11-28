/*
    1.3.4 Escreva um fragmento de código que imprima verdadeiro se
    as variáveis duplas x e y estiverem estritamente entre 0 e 1 e falso caso contrário.
    Sedgewick, Robert; Wayne, Kevin. Ciência da Computação (p. 81).
    Pearson Education. Edição do Kindle
    Feito por: Pedro Filho, 18/11/2021
*/

#include <iostream>
#include <locale>

using namespace std;

// função principal
int main()
{
    setlocale( LC_ALL, "portuguese"); // localização geográfica

    system("cls"); // limpa a tela

    double a = 0, b = 1;

    if( (a > -1 && a < 2) || (b > -1 && b < 2) )
        // imprima
        cout << "Verdadeiro" << endl;
    else
        cout << "Falso" << endl;

    cout << endl; // pula uma linha

    system("pause"); // pausa do programa

    return 0; // programa terminado com sucesso

} // fim main
