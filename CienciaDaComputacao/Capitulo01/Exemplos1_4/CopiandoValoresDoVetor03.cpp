/*
    copiando valores de um vetor
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

    cout << "COPIANDO OS ELEMENTOS DO VETOR" << endl;

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

    // MOSTRA OS ELEMENTOS DO VETOR
    cout << "vetor original = { "; // exibe um abre chaves
    // loop para mostrar os valores aleatórios ao vetor
    for( int i = 0; i < num; i++ )
    {
        cout << vetor[ i ] << " "; // mostra os elementos do vetor
    } // fim for
    cout << " }"; // mostra o fecha chaves

    // cria o vetor2
    int vetor2[ num ];

    // loop para copiar os valores do vetor para vetor2
    for ( int i = 0; i < num; i++ )
    {
        vetor2[ i ] = vetor[ i ]; // cópia dos elementos do vetor para vetor2
    }

    cout << "\nvetor2 copiado = { "; // exibe um abre chaves
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
