/*
    1// Figura 5.18: fig05_18.cpp  2// Operadores lógicos.
    Deitel, Harvey; Paul, Harvey. C++ Como Programar (p. 163). Edição do Kindle.
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

    // cria a tabela verdade para o operador AND  ( E ) &&
    cout << boolalpha << "Operador Lógico E ( && )"
            << "\nverdade && verdade: " << ( true && true )
            << "\nverdade && falso: " << ( true && false )
            << "\nfalso && verdade: " << ( false && true )
            << "\nfalso && falso: " << ( false && false ) << endl;

    // cria a tabela verdade para o operador OU ||
    cout << boolalpha << "\nOperador lógico OU ||"
            << "\nverdade || verdade: " << ( true || true )
            << "\nverdade || falso: " << ( true || false )
            << "\nfalso || verdade: " << ( false || true )
            << "\nfalso || falso: " << ( false || false ) << endl;

    // cria a tabela verdade para o operador NÃO !
    cout << boolalpha << "\nOperador lógico NÃO !"
            << "\n!verdade: " << ( !true )
            << "\n!falso: " << ( !false ) << endl;

    // pula linha
    cout << endl;

    system("pause"); // pausa do programa

    return 0; // programa terminado com sucesso

} // fim main
