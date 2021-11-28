/*
    Comparando o primeiro nome com o segundo nome
    05/11/2021
*/

#include <iostream>
#include <locale>
#include <string>
using namespace std;

// função principal
int main()
{
    // localização geográfica
    setlocale( LC_ALL, "portuguese");

    // limpa a tela
    system("cls");

    // entrada de dadosp
    cout << "Entre com dois nomes: ";

    // cria as variáveis
    string primeiro;
    string segundo;

    // aguarda entrada do usuário
    cin >> primeiro >> segundo;

    // se primeiro igual ao segundo
    if( primeiro == segundo )
        // imprima
        cout << primeiro << " é igual a " << segundo << endl;

    // se primeiro menor que o segundo
    if( primeiro < segundo )
        // imprima
        cout << primeiro << " vem antes de " << segundo << endl;

    // se primeiro maior que o segundo
    if( primeiro > segundo )
        // imprima
        cout << primeiro << " vem depois de " << segundo << endl;

    system("pause"); // pausa do programa

    return 0; // programa terminado com sucesso

} // fim main
