/*
    7. Faça o exercício 6, mas com três valores de string. Portanto, se o usuário
    inserir os valores Steinbeck, Hemingway, Fitzgerald, a saída deve ser
    Fitzgerald, Hemingway, Steinbeck.
    Autor: Pedro, 10/11/2021
*/

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

    // variáveis
    string nome1, nome2, nome3;

    cout << "STRINGS EM ORDEM ALFABÉTICA" << endl;

    // entrada de dados
    cout << "Digite 3 nomes de pessoas: ";
    cin >> nome1 >> nome2 >> nome3;

    if( nome1 < nome2 && nome2 < nome3 && nome3 > nome1 ) // 1 2 3
        cout << nome1 << ", "<< nome2 << ", "<< nome3 << endl;

    if( nome1 < nome2 && nome1 <  nome3 && nome3 < nome2 ) // 1 3 2
        cout << nome1 << " " << nome3 << " " << nome2 << endl;

    if( nome2 < nome1 && nome2 < nome3 && nome1 < nome3 ) // 2 1 3
        cout << nome2 << " " << nome1 << " " << nome3 << endl;

   if( nome1 < nome2 && nome3 < nome1 && nome3 < nome2 ) // 2 3 1
        cout << nome3 << " " << nome1 << " " << nome2 << endl;

   if( nome1 > nome2 && nome1 > nome3 && nome2 > nome3 ) // 3 2 1
        cout << nome3 << " " << nome2 << " " << nome1 << endl;

   if( nome1 > nome2 && nome1 > nome3 && nome2 < nome3 ) // 3 1 2
        cout << nome2 << " " << nome3 << " " << nome1 << endl;

    if( nome1 == nome2 && nome2 == nome3  && nome3 == nome1 ) // todos iguais
        cout << nome1 << ", " << nome2 << ", " << nome3 << endl;

    if( nome1 == nome2 && nome3 > nome1  && nome3 > nome2 ) // 1 1 2
        cout << nome1 << ", " << nome2 << ", " << nome3 << endl;

    if( nome1 == nome2 && nome3 < nome1  && nome3 < nome2 ) // 2 2 1
        cout << nome1 << ", " << nome2 << ", " << nome3 << endl;

    if( nome1 < nome2 && nome1 < nome3  && nome2 == nome3 ) // 1 2 2
        cout << nome2 << ", " << nome3 << ", " << nome1 << endl;

    if( nome1 > nome2 && nome1 > nome3  && nome2 == nome3 ) // 2 1 1
        cout << nome2 << ", " << nome3 << ", " << nome1 << endl;

    system("pause"); // pausa do programa

    return 0; // programa terminado com sucesso

} // fim main
