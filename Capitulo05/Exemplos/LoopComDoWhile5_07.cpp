/*
    contando até 10 com do while
    Autor:
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

    // cria variável contador
    int contador = 1;

    // loop do while
    do // faça
    {
        // imprime o contador
        cout << contador << " ";

        // incrementa o contador em 1
        contador++;

    // enquanto contador menor ou igual a 10
    } while( contador <= 10 );

    // pula linha
    cout << endl;

    system("pause"); // pausa do programa

    return 0; // programa terminado com sucesso

} // fim main
