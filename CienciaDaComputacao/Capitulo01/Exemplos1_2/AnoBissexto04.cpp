/*
    Este programa testa se um número inteiro corresponde a um ano bissexto
    no calendário gregoriano. Um ano é um ano bissexto se for divisível por 4 (2004),
    a menos que seja divisível por 100, caso em que não é (1900),
    a menos que seja divisível por 400, caso em que é (2000).
    Sedgewick, Robert; Wayne, Kevin. Ciência da computação (p. 28).
    Pearson Education. Edição do Kindle.
    08/11/2021
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

    // variável
    int pesquisarAno; // ano a pesquisar
    double anoBissexto; // confirma o ano bissexto

    // entrada de dados
    cout << "Digite um ano para saber se é bissexto: ";
    cin >> pesquisarAno;

    // calcular
    anoBissexto = (pesquisarAno % 4 == 0 );
    cout << "anoBissexto = (pesquisarAno % 4 == 0 ); " << anoBissexto << endl;
    anoBissexto = anoBissexto && (pesquisarAno % 100 != 0 );
    cout << "anoBissexto = anoBissexto && (pesquisarAno % 100 != 0 );" << anoBissexto << endl;
    anoBissexto = anoBissexto || (pesquisarAno % 400 == 0 );
    cout << "anoBissexto = anoBissexto || (pesquisarAno % 400 == 0 );" << anoBissexto << endl;

    // se a resposta for 1
    if( anoBissexto == 1 )
        // imprima
        cout << pesquisarAno << " É um ano bissexto." << endl;

    // se a resposta for 0
    if( anoBissexto == 0 )
        // imprima
        cout << pesquisarAno << " Não é um ano bissexto." << endl;

    system("pause"); // pausa do programa

    return 0; // programa terminado com sucesso

} // fim main
