/*
    1// Figura 6.12: fig06_12.cpp
    2// Um exemplo de escopo.
    Deitel, Harvey; Paul, Harvey. C++ Como Programar (p. 203). Edição do Kindle.
*/

// incluir biblioteca
#include <iostream>
#include <locale>
#include <iomanip>

using namespace std;

// protótipos
void useLocal();
void usestaticLocal();
void useGlobal();

// cria uma variável global
int x = 5;

// função principal
int main()
{
    // localização geográfica
    setlocale( LC_ALL, "portuguese");

    // limpa a tela
    system("cls");

    // cria variável local em main
    int x = 10;

    cout << "int x = 10;" << endl;
    // imprime a variável interna d

    //, e main
    cout << "imprime variável local x " << x << endl;

    {
        // cria variável interna x
        int x = 15;
        cout << "int x = 15;" << endl;
        cout << "Imprime o valor de x = " << x <<  endl;
    }

    // chama a função
    useLocal();
    usestaticLocal();
    useGlobal();

    // chama a função
    useLocal();
    usestaticLocal();
    useGlobal();

    // pula linha
    cout << endl;

    system("pause"); // pausa do programa

    return 0; // programa terminado com sucesso

} // fim main

// função useLocal
void useLocal()
{
    int x = 25;

    cout << "\nImprime variável local x = " << x << endl;

    x++;

    cout << "Imprime variável local após incremento x = " << x << endl;
} // fim função

void usestaticLocal()
{
    // cria variável
    static int x = 50;

    // mostra
    cout << "\nVariável static int x = " << x << endl;

    // incrementa a variável x
    ++x;

    // mostra
    cout << "Variável static int x após o incremento x = " << x << endl;
} // fim função usestaticLocal

// cria a função useGlobal
void useGlobal()
{
    // mostre
    cout << "\nVariável global int x = " << x << endl;

    // calcula a variável
    x *= 10;

    cout << "Variável x depois do incremento x = " << x << endl;
} // fim função useGlobal
