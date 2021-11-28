/*
    6.45 (Máximo divisor comum recursivo) O máximo divisor comum dos inteiros x e y
    é o maior inteiro que é divisível por x e y. Escreva uma  função recursiva mdc que
    retorna o máximo divisor comum de x e y, definido recursivamente como mostrado a
    seguir: Se y for igual a  0, então mdc( x, y) será x; caso contrário, mdc( x, y) será mdc( y, x% y), onde% é o operador módulo. [Nota: Para esse  algoritmo, x deve ser maior que y.]
    Deitel, Harvey; Paul, Harvey. C++ Como Programar (p. 247). Edição do Kindle.
    Autor:
*/

// incluir biblioteca
#include <iostream> // para cout e cin
#include <locale> // para setlocale
#include <iomanip> // para setw, fixed, setprecision

using namespace std;

// protótipo
int mdcRecursivo( int x, int y );

// função principal
int main()
{
    // localização geográfica
    setlocale( LC_ALL, "portuguese");

    // limpa a tela
    system("cls");

    // variáveis
    int x, y;
    int resultado = 0;
    char resposta = 's';

    // enquanto resposta diferente de n
    while( resposta != 'n' )
    {
        // cabeçalho
        cout << "\tMÁXIMOMDIVISOR COMUM RECURSIVO" << endl;

        // entrada de dados
        cout << "Informe um valor para x: ";
        cin >> x;
        cout << "Informe um valor para y diferente de 0: ";
        cin >> y;

        // chama a função mdcRecursivo
        resultado = mdcRecursivo( x, y );

        // imprime o resultado
        cout << "O mdc entre " << x << " e " << y  << " é " << resultado << endl;

        // pergunta
        cout << "Quer fazer outra pesquisa ( s / n )? ";
        cin >> resposta;
        system("cls") ; // limpa a tela

    } // fim while

    // pula linha
    cout << endl;

    system("pause"); // pausa do programa

    return 0; // programa terminado com sucesso

} // fim main

// cria a função mdcRecursivo
int mdcRecursivo( int x, int y )
{
    // se y igual a zero
    if( y == 0 )
        // retorne o valor de x
        return x;
    else // se não
    {
        // imprima
        cout << x << " % " << y << " = " << x % y << endl;

        // retorne o valor do mdcRecursivo
        return mdcRecursivo( y, x % y );
    } // fim else

} // fim função
