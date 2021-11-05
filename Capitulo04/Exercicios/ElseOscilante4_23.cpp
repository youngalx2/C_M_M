/*
    4.23 (Problema do else oscilante) Mostre a saída de cada um dos seguintes
    quando x é 9 e y é 11 e quando x é 11 e y é 9. Observe que o  compilador
    ignora o recuo em um programa C++. O compilador C++ sempre associa um
    else com o if anterior a menos que ele seja instruído a fazer de modo diferente
    pela colocação de chaves {}. À primeira vista, o programador pode não estar
    certo de qual if corresponde a qual else, o que é referido como problema do ‘else
    oscilante’ (‘dangling-else’). Eliminamos o recuo do código a seguir  para tornar
    o problema mais desafiador. [Dica: Aplique as convenções de recuo que você aprendeu.]
    Deitel, Harvey; Paul, Harvey. C++ Como Programar (p. 137). Edição do Kindle.
    Deitel, Harvey; Paul, Harvey. C++ Como Programar (p. 136). Edição do Kindle.
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

    // variável
    int x = 9;
    int y = 11;

    cout << "A)" << endl;
    if( x < 10 )
    if( y > 11 )
    cout << "*****" << endl;
    else
    cout << "#####" << endl;
    cout << "$$$$$" << endl;

    cout << "B)" << endl;
    if( x < 10 )
    {
    if( y > 10 )
    cout << "*****" << endl;
    }
    else
    {
    cout << "#####" << endl;
    cout << "$$$$$" << endl;
    }

    system("pause"); // pausa do programa

    return 0; // programa terminado com sucesso

} // fim main
