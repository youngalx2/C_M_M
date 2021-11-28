/*
    Este programa usa um loop while para a tarefa simples e repetitiva de
    imprimir a saída mostrada abaixo. Após a terceira linha, as linhas a serem
    impressas diferem apenas no valor do índice contando a linha impressa,
    então definimos uma variável i para conter esse índice. Depois de inicializar
    o valor de i para 4, entramos em um loop while, onde usamos o valor de i na
    instrução System.out.println () e o incrementamos a cada vez por meio do loop.
    Após imprimir o 10º Hello, o valor de i se torna 11 e o loop termina.
    Sedgewick, Robert; Wayne, Kevin. Ciência da Computação (pp. 55-56).
    Pearson Education. Edição do Kindle.
    14/11/2021
*/

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

    // variável
    int conta = 1;

    cout << "CONTA ATÉ 10" << endl;

    while( conta < 11)
    {
        cout << conta << "th Hello" << endl;
        conta++; // incrementa em 1

    } // fim while

    system("pause"); // pausa do programa

    return 0; // programa terminado com sucesso

} // fim main
