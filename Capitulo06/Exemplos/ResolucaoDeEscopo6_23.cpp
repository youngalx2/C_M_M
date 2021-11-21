/*
    1// Figura 6.23: fig06_23.cpp
    2// Utilizando o operador unário de resolução de escopo.
    Deitel, Harvey; Paul, Harvey. C++ Como Programar (p. 216). Edição do Kindle.
*/

// incluir biblioteca
#include <iostream> // para cout e cin
#include <locale> // para setlocale
#include <iomanip> // para setw, fixed, setprecision

using namespace std;

// variável global
int numero = 7;

// função principal
int main()
{
    // localização geográfica
    setlocale( LC_ALL, "portuguese");

    // limpa a tela
    system("cls");

    // variável interna
    double numero = 10.5;

    // imprime e chama a variável interna
    cout << "Chama avariável local de nome número = " << numero << endl;

    // imprime e chama a variável global número usando o operador unaria
    cout << "Chama a variável global número usando o operador unário (::) número = "
                << ::numero << endl;

    // pula linha
    cout << endl;

    system("pause"); // pausa do programa

    return 0; // programa terminado com sucesso

} // fim main
