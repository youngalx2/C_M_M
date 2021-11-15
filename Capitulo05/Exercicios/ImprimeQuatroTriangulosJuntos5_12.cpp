/*
    5.12 Escreva um programa que utiliza instruções for para imprimir os seguintes
    padrões separadamente, um embaixo do outro. Utilize loops  for para gerar os padrões.
    Todos os asteriscos (*) devem ser impressos por uma única instrução na forma
    cout << ‘*’; (isso faz com  que os asteriscos sejam impressos lado a lado).
    [Dica: Os últimos dois padrões requerem que cada linha inicie com um número
    apropriado  de espaços em branco. Crédito extra: Combine seu código dos quatro
    problemas separados em um único programa que imprime todos  os quatro padrões
    lado a lado usando inteligentemente os loops for aninhados.]
    Deitel, Harvey; Paul, Harvey. C++ Como Programar (p. 178). Edição do Kindle.
    Autor: Pedro Filho, 28/08/2021
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

    // primeiro triângulo
    cout << "Triângulo A:" << endl;

    // loop para linha
    for( int linha = 1; linha <= 10; linha++ )
    {
        // loop para a coluna
        for( int coluna = 1; coluna <= linha; coluna++ )
        {
            // imprime o asterisco e um espaço em branco
            cout << '*';
        } // fim for coluna

        // pula uma linha
        cout << endl;
    } // fim for linha

    // segundo triângulo
    cout << "Triângulo B:" << endl;

    // loop para linha
    for( int linha = 1; linha <= 10; linha++ )
    {
        // loop para a coluna
        for( int coluna = linha; coluna <= 10; coluna++ )
        {
            // imprime o asterisco e um espaço em branco
            cout << '*';
        } // fim for coluna

        // pula uma linha
        cout << endl;
    } // fim for linha

    // terceiro triângulo
    cout << "Triângulo C:" << endl;

    // loop para linha
    for( int linha = 1; linha <= 10; linha++ )
    {
        // loop para a coluna
        for( int espacos = 1; espacos <= linha; espacos++ )
        {
            // imprime espaços em branco
            cout << ' ';
        } // fim for espaços em branco

        // loop para o asterisco
        for( int asterisco = linha; asterisco <= 10; asterisco++ )
        {
            // imprime asterisco
            cout << '*';
        } // fim for asterisco

        // pula uma linha
        cout << endl;
    } // fim for linha

    // quarto triângulo
    cout << "Triângulo D:" << endl;

    // loop para linha
    for( int linha = 1; linha <= 10; linha++ )
    {
        // loop para a coluna
        for( int espacos = linha; espacos <= 10; espacos++ )
        {
            // imprime espaços em branco
            cout << ' ';
        } // fim for espaços em branco

        // loop para o asterisco
        for( int asterisco = 1; asterisco <= linha; asterisco++ )
        {
            // imprime asterisco
            cout << '*';
        } // fim for asterisco

        // pula uma linha
        cout << endl;
    } // fim for linha

    // pula linha
    cout << endl;

    system("pause"); // pausa do programa

    return 0; // programa terminado com sucesso

} // fim main
