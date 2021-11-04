/*
    Pré-incremento e Pós-incremento
    Autor:
*/

#include <iostream>
#include <locale>

using namespace std;

// função principal
int main()
{
    // define a localização geográfica
    setlocale(LC_ALL, "portuguese");

    // limpa a tela
    system("cls");

    // cabeçalho
    cout << "PÓS-INCREMENTO" << endl;
    // cria variável
    int valor = 5;
    // mostra resultado
    cout << "int valor = 5;" << endl;
    cout << "valor++ = " << valor++ << endl;
    cout << "valor = " << valor << endl;

    cout << "\nPRÉ-INCREMENTO" << endl;
     // variável
    valor = 7;
    // mostra resultado
    cout << "int valor = 7;" << endl;
    cout << "++valor = " << ++valor << endl;
    cout << "valor = " << valor << endl;

    // pausar
    system("pause");

    return 0; // programa terminado com sucesso

} // fim main
