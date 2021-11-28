/*
    1// Figura 7.6: fig07_06.cpp
    2// Utilizando uma variável constante adequadamente inicializada.
    Deitel, Harvey; Paul, Harvey. C++ Como Programar (p. 257). Edição do Kindle.
    Autor: 01/10/2021
*/

// incluir biblioteca
#include <iostream> // para cout e cin
#include <locale> // para setlocale
#include <iomanip> // para setw, fixed, setprecision

using namespace std;

// função principal
int main()
{
    // localização geográfica
    setlocale( LC_ALL, "portuguese");

    // limpa a tela
    system("cls");

    // cria e inicializa uma constante
    const int x = 7;

    // cabeçalho
    cout << "CRIA E INICIALIZA UMA CONSTANTE" << endl;

    cout << "const int x = 7;" << endl;

    // imprime a constante
    cout << "O valor da constante x é " << x << endl;

    cout << "OBS: Toda constante tem que ser inicializada." << endl;

    // pula linha
    cout << endl;

    system("pause"); // pausa do programa

    return 0; // programa terminado com sucesso

} // fim main
