/*
    1// Figura 7.26: fig07_26.cpp
    2// Demonstrando o template de classe vector da C++ Standard Library.
    Deitel, Harvey; Paul, Harvey. C++ Como Programar (p. 289). Edição do Kindle.
    Autor: 10/10/2021
*/

// incluir biblioteca
#include <iostream> // para cout e cin
#include <locale> // para setlocale
#include <iomanip> // para setw, fixed, setprecision
#include <vector> // para vector

using namespace std;

// protótipos
void outputVetor( const vector< int > & ); // exibe o vetor
void inputVetor( vector< int > & ); // introduz valores ao vetor

// função principal
int main()
{
    // localização geográfica
    setlocale( LC_ALL, "portuguese");

    // limpa a tela
    system("cls");

    // cria os vetores integers1 e integers2
    vector< int > integers1( 7 ); // vector< int > integers1 com 7 elementos
    vector< int > integers2( 10 ); // vector< int > integers2 com 10 elementos

    // imprime o tamanho e o conteúdo do vetor integers1
    cout << "O tamanho do vetor integers1 é de " << integers1.size()
            << " Antes da inicialização." << endl;

    // chama a função outputVetor
    outputVetor( integers1 );

    // imprime o tamanho e o conteúdo do vetor integers2
    cout << "O tamanho do vetor integers2 é "<< integers2.size()
            << " Antes da inicialização." << endl;

    // chama a função outputVetor
    outputVetor( integers2 );

    // insere valores inteiros em integers1 e 2
    inputVetor( integers1 );
    inputVetor( integers2 );

    // depois de inputVetor
    cout << "\nDepois de inserir valores ao vetor: " << endl;
    cout << "Integers1: " << endl;
    outputVetor( integers1 );
    cout << "\nIntegers2: " << endl;
    outputVetor( integers2 );

    // utiliza o operador de diferença ( != ) com objetos vetor
    cout << "\nEvolucão integers1 != integers2 " << endl;

    if( integers1 != integers2 )
        cout << "Integers1 é diferente de integers2." << endl;

    // cria o vetor integer3 utilizando integers1 como inicializador;
    // imprime o tamanho e o conteúdo
    vector< int > integers3( integers1 );

    // imprime o tamanho e o conteúdo do vetor integers3
    cout << "O tamanho do vetor integers3 é "<< integers3.size()
            << "Depois da inicialização." << endl;

    // chama a função outputVetor
    outputVetor( integers3 );

    // utilizando o operadore de atribuição (=) sobrecarregando
    cout << "Atribuindo integers2 para integers1:" << endl;

    // integers1 recebe integers2
    integers1 = integers2;

    cout << "integers1:" << endl;
    outputVetor( integers1 );
    cout << "integers2:" << endl;
    outputVetor( integers2 );

    // utiliza o sinal de (==) com os objetos vector
    if( integers1 == integers2 )
        // imprima
        cout << "Evolução integers1 é igual a integers2." << endl;

    // utilizando colchetes para criar valor
    cout << "\nintegers1[ 5 ] é " << integers1[ 5 ] << endl;

    // utilizando colchetes para criar valor
    cout << "Atribuindo 1000 para integers1[ 5 ]" << endl;
    integers1[ 5 ] = 1000;

    // imprima
    cout << "\nintegers1:" << endl;
    outputVetor( integers1 );

    // tentativa de utilizar subscrito fora do intervalo
    cout << "\nTentativa de atribuir 1000 para integers1.at( 15 )" << endl;
    integers1.at( 15 ) = 1000; // Erro, fora do intervalo

    // pula linha
    cout << endl;

    system("pause"); // pausa do programa

    return 0; // programa terminado com sucesso

} // fim main

// cria a função outputVetor
void outputVetor(const vector< int > &array )
{
    size_t i; // declara a variável de controle

    // loop para mostrar o vetor
    for( i = 0; i < array.size(); i++ )
    {
        // se multiplo de 4
        if( (i + 1) % 4 == 0 )

        // pule uma linha
        cout << endl;

        // imprima
        cout << setw( 12 ) << array[ i ];

    } // fim for

    // se diferente i modulo 4 diferente de zero
    if( i % 4 != 0 )
        // pule uma linha
        cout << endl;

} // fi função

// cria a função inputVetor
void inputVetor( vector< int > &array )
{
    // imprima
    cout << "Entre com 17 valores para os vetores: " << endl;

    for( size_t i = 0; i < array.size(); i++ )
        cin >> array[ i ];
} // fim da função inputVetor
