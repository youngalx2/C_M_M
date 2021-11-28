/*
    adicionando valores ao vetor com push_back()
    22/10/2021
*/

// biblioteca padrão
#include <iostream> // cout, cin
#include <locale> // setlocale
#include <vector> // vector
#include <algorithm> // sort

using namespace std;

// função principal
int main()
{
    // localização geográfica
    setlocale( LC_ALL, "portuguese");

    // limpa a tela
    system("cls");

    // cria um vetor do tipo double sem elementos
    vector<double> vetor;

    // header
    cout << "ADICIONA VALORES COM PUSH_BACK" << endl;

    // data input
    cout << "Digite qualquer número ( um caractere = sair ): " << endl;

    // loop para adicionar valores ao vetor
    for( double valor = 0; cin >> valor;)
    {
        // adiciona um elemento no final do vetor
        vetor.push_back(valor);
    } // endl for

    cout << "\nvetor original = ";

    // loop para mostrar os valores do vetor
    for( double valor : vetor )
        // imprime os valores do vetor
        cout << valor << " ";

    cout << endl; // next line

    // organiza o vetor
    sort( vetor.begin(), vetor.end() );

    cout << "\nvetor organizado = ";

    // loop para mostrar os valores do vetor
    for( double valor : vetor )
        // imprime os valores do vetor
        cout << valor << " ";

    cout << endl; // next line

    // create variable
    double soma = 0; // soma os valores do vetor
    double maior = vetor[ 0 ]; // para o maior valor do vetor
    double menor = vetor[ 0 ]; // para o menor valor do vetor

    // loop pelos valores do vetor
    for( double valor : vetor )
    {
        soma += valor; // soma os valores

        if( valor > maior ) // se valor maior que maior
            maior = valor; // maior recebe o valor

        if ( valor < menor ) // se o valor for menor que menor
            menor = valor;  // menor recebe o valor
    } // fim for

    // imprime resultado
    cout << "\nSoma = " << soma // imprime a soma
            << "\nMédia = " << soma / vetor.size() // imprime a média
            << "\nMediana = " << vetor[ vetor.size() / 2 ] // imprime a mediana
            << "\nMenor valor = " << menor // imprime o menor valor
            << "\nMaior valor = " << maior << endl; // imprime o maior valor

    system("pause"); // pausa do programa

    return 0; // programa terminado com sucesso

} // fim main
