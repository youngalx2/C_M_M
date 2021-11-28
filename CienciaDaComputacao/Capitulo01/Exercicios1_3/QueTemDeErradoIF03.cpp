/*
    1.3.3 O que há de errado (se houver) com cada uma das seguintes afirmações?
    a. if (a> b) então c = 0;
    b. se a> b {c = 0; }
    c. if (a> b) c = 0;
    d. if (a> b) c = 0
    senão b = 0;
    Sedgewick, Robert; Wayne, Kevin. Ciência da Computação (p. 81). Pearson Education. Edição do Kindle.
    Feito por:
*/

#include <iostream>
#include <locale>

using namespace std;

// função principal
int main()
{
    setlocale( LC_ALL, "portuguese"); // localização geográfica

    system("cls"); // limpa a tela

    // variáveis
    int a, b, c;

    // O que tem de errado? if (a > b) então c = 0;
    // Erro: em C++ não existe a palavra então.
    // correto:
    // se a maior que b
    if ( a > b ) // se verdade
        c = 0; // a variável c recebe o valor zero

    // O que tem de errado? b. se a> b {c = 0; }
    // Erro: depois de se(if) coloca´se parêntese e a expressão dentro do parêntese
    // correto:
    if( a > b ) { c = 0; }

/*    c. if (a> b) c = 0;
    d. if (a> b) c = 0
    senão b = 0;
    */
    cout << endl; // pula uma linha

    system("pause"); // pausa do programa

    return 0; // programa terminado com sucesso

} // fim main
