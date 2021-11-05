/*
    4.24 (Outro problema de else oscilante) Modifique o seguinte código para produzir
    a saída mostrada. Utilize técnicas de recuo adequadas.  Você não deve fazer nenhuma
    alteração além de inserir chaves. O compilador ignora o recuo em um programa C++.
    Eliminamos o recuo  do seguinte código para tornar o problema mais desafiador.
    [Nota: É possível que não seja necessária nenhuma modificação.]
    Deitel, Harvey; Paul, Harvey. C++ Como Programar (p. 137). Edição do Kindle.
*/

// incluir biblioteca
#include <iostream>
#include <locale>

using namespace std;

// função principal
int main()
{
    // localização geográfica
    setlocale(LC_ALL, "portuguese");

    // limpa a tela
    system("cls");

    // variáveis
    int x = 5;
    int y = 8;

    if( x == 5 )
    if( y == 8 )
    cout << "@@@@@" << endl;
    else
    cout << "#####" << endl;
    cout << "$$$$$" << endl;
    cout << "&&&&&" << endl;

    // Deitel, Harvey; Paul,  Harvey. C++ Como Programar (p. 137). Edição do Kindle.

    // pausa o programa
    system("pause");

    return 0; // programa terminado com sucesso

} // fim main
