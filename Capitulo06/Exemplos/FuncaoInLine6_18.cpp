/*
    1// Figura 6.18: fig06_18.cpp
    2// Utilizando uma função inline para calcular o volume de um cubo.
    Deitel, Harvey; Paul, Harvey. C++ Como Programar (p. 209). Edição do Kindle.
*/

// incluir biblioteca
#include <iostream> // para cout e cin
#include <locale> // para setlocale
#include <iomanip> // para setw, fixed, setprecision

using namespace std;

// cria a função inline cubo
inline int cubo( int num )
{
    return num * num * num;
} // fim cubo

// função principal
int main()
{
    // localização geográfica
    setlocale( LC_ALL, "portuguese");

    // limpa a tela
    system("cls");

    // variável
    int x = 0;
    int resposta;

    // entrada de dados
    cout << "Informe um número: ";
    cin >> x; // aguarda entrada do usuário

    // chama a função cubo e atribui o valor a resposta
    resposta = cubo( x );

    // imprime o resultado
    cout << "O cubo de " << x << " é " << resposta << endl;

    // pula linha
    cout << endl;

    system("pause"); // pausa do programa

    return 0; // programa terminado com sucesso

} // fim main
