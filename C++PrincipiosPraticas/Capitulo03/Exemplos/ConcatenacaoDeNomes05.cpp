/*
    concatenação entre nomes
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

    // solicita a entrada de dados
    cout << "Informe o primeiro e o segundo nome: ";

    // cria as variáveis
    string primeiroNome; // primeiroNome is a variable of type string
    string segundoNome; // segundoNome is a variable of type string

    // espera a entrada do usuário
    cin >> primeiroNome >> segundoNome; // read characters into firstName and secondName

    // variável para a concatenação do primeiroNome mais(+) espaço mais(+) segundoNome
    string nomes = primeiroNome + ' ' + segundoNome; // o sinal de + faz a junção das variáveis

    // mostra a concatenação dos nomes
    cout << "Olá, " << nomes << endl;

    system("pause"); // pausa do programa

    return 0; // programa terminado com sucesso

} // fim main
