/*
    programa para inverter os valores do vetor original
    Feito por: Pedro, 20/11/2021
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
    int num; // para entreda de dados do usuário

    cout << "INVERTENDO OS VALORES DO VETOR" << endl;

    // entrada de dados
    cout << "Digite quantos elementos quer no vetor: ";

    cin >> num; // aguarda a entrada de dados do usuário

    int vetor[ num ]; // cria um vetor com n elementos

    srand( time( 0 ) ); // gera a semente para rand

    // loop para adicionar valores aleatórios ao vetor
    for( int i = 0; i < num; i++ )
    {
        vetor[ i ] =  1 + rand() % 50; // vetor recebe valores aleatórios entre 1 e 50 inclusive
    } // fim for

    cout << "vetor original = { "; // exibe um abre chaves
    // loop para mostrar os valores aleatórios ao vetor
    for( int i = 0; i < num; i++ )
    {
        cout << vetor[ i ] << " "; // mostra os elementos do vetor
    } // fim for
    cout << " }"; // mostra o fecha chaves

    // loop for para inverter os valores do vetor
    for( int i = 0; i < num / 2; i++ )
    {
        int temp = vetor[ i ];
        vetor[ i ] = vetor[ num - 1 - i ];
        vetor[ num - 1 - i ] = temp;
    } // fim for

    cout << "\nvetor invertido = { "; // exibe um abre chaves
    // loop para mostrar os valores aleatórios ao vetor
    for( int i = 0; i < num; i++ )
    {
        cout << vetor[ i ] << " "; // mostra os elementos do vetor
    } // fim for
    cout << " }"; // mostra o fecha chaves

    cout << endl; // pula uma linha

    system("pause"); // pausa do programa

    return 0; // programa terminado com sucesso

} // fim main
