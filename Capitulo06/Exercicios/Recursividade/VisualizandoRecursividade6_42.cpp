/*
    6.44 (Visualizando a recursão) É interessante observar a recursão ‘em ação’.
    Modifique a função fatorial da Figura 6.29 para imprimir sua  variável local e seu
    parâmetro de chamada recursiva. Para cada chamada recursiva, exiba as saídas
    em uma linha separada e adicione  um nível de recuo. Faça o melhor que você
    puder para tornar a saída limpa, interessante e significativa. Seu objetivo aqui
    é projetar e  implementar um formato de saída que ajude uma pessoa a entender
    melhor a recursão. Você pode querer adicionar essas capacidades de  exibição
    aos muitos outros exemplos e exercícios de recursão ao longo de todo este texto.
    Deitel, Harvey; Paul, Harvey. C++ Como Programar (p. 247). Edição do Kindle.
    Autor: Pedro Filho,27/09/2021
*/

// incluir biblioteca
#include <iostream> // para cout e cin
#include <locale> // para setlocale
#include <iomanip> // para setw, fixed,     setprecision

// protótipo
int fibonacci( int n );
double fibonacciDouble( double num );

using namespace std;

// função principal
int main()
{
    // localização geográfica
    setlocale( LC_ALL, "portuguese");

    // limpa a tela
    system("cls");

    // cabeçalho
    cout << "\tSEQUÊNCIA DE FIBONACCI" << endl;

    // chama a função fibonacci para inteiros
    fibonacci( 100  );

    // pula linha
    cout << endl;

    system("pause"); // pausa do programa

    return 0; // programa terminado com sucesso

} // fim main

// cria a função fibonacci inteiro
int fibonacci( int n )
{
    // variáveis
    int a = 0;
    int b = 1;
    int c = 0;

    // imprima
    cout << "Integer => 0 1 ";

    // enquanto b menor que n faça
    while( b < n )
    {
        // c recebe o valor da soma de a mais b
        c = a + b;
        // imprime o valor de c
        cout << c << " ";
            // a recebe b
            a = b;
            cout << a << endl;

            // e b recebe c; que fica livre para receber a soma de a mais b
            b = c;
            cout << setw( 5 ) << b << endl;

    } // fim while com inteiros
} // fim da função fibonacci de inteiros
