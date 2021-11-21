/*
    1// Figura 6.20: fig06_20.cpp
    2// As referências devem ser inicializadas.
    Deitel, Harvey; Paul, Harvey. C++ Como Programar (p. 212). Edição do Kindle.
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

    // variáveis
    int x = 3;
    int &y = x; // y referência (é um alias para x ) x

    // imprime
    cout << "x = " << x << endl << "y = " << y << endl;

    // y recebe outro valor
    y = 7; // passagem por referência modifica o valor original de x

    cout << "\ny = " << y << " y recebe um novo valor" << endl;

    // imprime depois de y receber outro valor
    cout << "Valor de x " << x << " depois de y receber outro valor" << endl;

    // pula linha
    cout << endl;

    system("pause"); // pausa do programa

    return 0; // programa terminado com sucesso

} // fim main
