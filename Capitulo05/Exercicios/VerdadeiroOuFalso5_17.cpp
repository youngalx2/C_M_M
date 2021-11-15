/*
    5.17 Assuma i = 1, j = 2, k = 3 e m = 2. O que cada uma das seguintes instruções imprime?
    Os parênteses são necessários em cada  caso?
    Deitel, Harvey; Paul, Harvey. C++ Como Programar (p. 178). Edição do Kindle.
    Autor: Pedro Filho, 30/08/2021
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

    // variáveis
    int i = 1;
    int j = 2;
    int k = 3;
    int m = 2;

    // imprime
    cout << "\t1 = VERDADEIRO ou 0 = FALSO" << endl;
    cout << "   int i = 1; int j = 2; int k = 3; int m = 2;" << endl;
    cout << "\t   Modêlo" << setw( 20 ) << "Resposta" << endl;
    cout << "\t( i == 1 )" << setw(15) << ( i == 1) << endl;
    cout << "\t( j == 3 )" << setw(15) << ( j == 3 ) << endl;
    cout << "\t( i >= 1 && j < 4 )" << setw(6) << ( i >= 1 && j < 4 ) << endl;
    cout << "\t( m <= 99 && k < m )" << setw(5) << ( m <= 99 && k < m ) << endl;
    cout << "\t( j > i || k == m )" << setw(6) << ( j > i || k == m ) << endl;
    cout << "   ( k + m < j || 3 - j >= k )" << setw(3) << ( k + m < j || 3 - j >= k ) << endl;
    cout << "\t( !m )" << setw(19) << ( !m )  << endl;
    cout << "\t( !( j - m ) )" << setw(11) << ( !( j - m ) ) << endl;
    cout << "\t( !( k > m ) )" << setw(11) << ( !( k > m ) ) << endl;

    // pula linha
    cout << endl;

    system("pause"); // pausa do programa

    return 0; // programa terminado com sucesso

} // fim main
