/*
    5.12 Escreva um programa que utiliza instruções for para imprimir os seguintes
    padrões separadamente, um embaixo do outro. Utilize loops  for para gerar os padrões.
    Todos os asteriscos (*) devem ser impressos por uma única instrução na forma
    cout << ‘*’; (isso faz com  que os asteriscos sejam impressos lado a lado).
    [Dica: Os últimos dois padrões requerem que cada linha inicie com um número
    apropriado  de espaços em branco.

    Crédito extra: Combine seu código dos quatro
    problemas separados em um único programa que imprime todos  os quatro padrões
    lado a lado usando inteligentemente os loops for aninhados.]
    Deitel, Harvey; Paul, Harvey. C++ Como Programar (p. 178). Edição do Kindle.

    Autor: Pedro Filho, 28/08/2021
*/

// incluir biblioteca
#include <iostream>
#include <locale>
#include <iomanip>

using namespace std;

// função principal
int main()
{
    // localização geográfica
    setlocale( LC_ALL, "portuguese");

    // limpa a tela
    system("cls");

    /*
    Crédito extra: Combine seu código dos quatro
    problemas separados em um único programa que imprime todos  os quatro padrões
    lado a lado usando inteligentemente os loops for aninhados.]
    Deitel, Harvey; Paul, Harvey. C++ Como Programar (p. 178). Edição do Kindle.
    */

    // cabeçalho
    cout << "TriânguloA: " << " TriânguloB: " << "   TriânguloC: " << "   TriânguloD: " << endl;

    // cria loop linha para os triângulos
    for( int linha = 1; linha <= 10; linha++ )
    {
        // primeiro triângulo
        for( int primeiro = 1; primeiro <= linha; primeiro++ )
        {
            // imprime asterisco
            cout << '*';
        } // fim for primeiro triângulo

        // cria 13 espaços em branco
        cout << setw(13);

        // cria o segundo triângulo
        for( int segundo = linha; segundo <= 10; segundo++ )
        {
            // imprime asterisco
            cout << '*';
        } // fim for segundo triângulo

        // cria 5 espaços em branco
        cout << setw( 5 );

        // cria o terceiro triângulo
        for( int terceiro = linha; terceiro <= 10; terceiro++ )
        {
            // imprime espaços vazios
            cout << ' ';
        } // fim for terceiro triângulo

        // quarto triângulo
        for( int quarto = 1; quarto <= linha; quarto++ )
        {
            // imprime asterisco
            cout << '*';
        } // fim for quarto triângulo

        // 5 espaços em branco
        cout << setw( 6 );

        // quinto triângulo
        for( int quinto = linha; quinto <= 10; quinto++ )
        {
            // imprime
            cout << '*';
        } // fim for quinto triângulo

        // pula linha
        cout << endl;

    } // fim for linha

    // pula linha
    cout << endl;

    system("pause"); // pausa do programa

    return 0; // programa terminado com sucesso

} // fim main
