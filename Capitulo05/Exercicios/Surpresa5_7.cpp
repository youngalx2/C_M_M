/*
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

    // variáveis
    int linha;
    int coluna;

    // entrada de dados
    cout << "Digite dois inteiros ( linhas, colunas ): ";
    cin >> linha >> coluna; // aguarda entrada dos valores do usuário

    // loop for para linhas
    for( int i = 1;  i <= linha; i++ )
    {
        //loop for para colunas
         for( int j = 1; j <= coluna; j++ )
        {
            // imprima
            cout << "@";
        } // fim for interno

        // pula linha
        cout << endl;
    } // fim for externo

    // pula linha
    cout << endl;

    system("pause"); // pausa do programa

    return 0; // programa terminado com sucesso

} // fim main
