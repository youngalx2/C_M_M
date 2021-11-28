/*
    1// Figura 7.7: fig07_07.cpp
    2// Uma variável const deve ser inicializada.
    Deitel, Harvey; Paul, Harvey. C++ Como Programar (p. 257). Edição do Kindle.
    Autor: 02/10/2021
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

    // cria constante e não inicializa
    const int x;

    cout << "O valor daconstante x é: " << endl;
    cin >> x;

    // pula linha
    cout << endl;

    system("pause"); // pausa do programa

    return 0; // programa terminado com sucesso

} // fim main
