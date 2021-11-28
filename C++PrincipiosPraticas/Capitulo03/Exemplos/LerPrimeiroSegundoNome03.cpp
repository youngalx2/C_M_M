/*
    read first and second name
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

    cout << "Entre com o primeiro e o segundo nome: ";

    string primeiroNome; // firstName is a variavel of type string
    string segundoNome; // secondName is a variable of type string

    cin >> primeiroNome; // read characters into firstName
    cin >> segundoNome; // read characters into secondName

    // cin >> primeiroNome >> segundoNome; read characters into firstName and secondName

    // mostra uma das maneiras de im-rimir o primeiro e o segundo nome
    cout << "Olá, " << primeiroNome << " " << segundoNome << "!" << endl;

    // mostra como imprimir usando o sinal de [ + ] exemplo de concatenação
    cout << "Olá, " << primeiroNome + segundoNome << "!" << endl;

    system("pause"); // pausa do programa

    return 0; // programa terminado com sucesso

} // fim main
