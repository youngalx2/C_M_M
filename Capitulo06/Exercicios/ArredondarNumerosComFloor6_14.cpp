/*
    6.14 A função floor pode ser utilizada para arredondar um número para uma
    casa decimal específica. A instrução  y = floor( x * 10 + .5)/ 10;
    arredonda x para a casa decimal (a primeira posição à direita do ponto de fração decimal).
    A instrução  y = floor( x * 100 + .5)/ 100;  arredonda x para a casa dos centésimos
    (isto é, a segunda posição à direita do ponto de fração decimal).
    Escreva um programa que define  quatro funções para arredondar um número x de
    várias maneiras:
    a) roundToInteger( number)
    b) roundToTenths( number)
    c) roundToHundredths( number)
    d) roundToThousandths( number)
    Para cada valor lido, seu programa deve imprimir o valor original, o número
    arredondado para o inteiro mais próximo, o número arredondado para o décimo
    mais próximo, o número arredondado para o centésimo mais próximo e o número
    arredondado para o milésimo  mais próximo.
    Deitel, Harvey; Paul, Harvey. C++ Como Programar (p. 243). Edição do Kindle.
    Deitel, Harvey; Paul, Harvey. C++ Como Programar (p. 242). Edição do Kindle.
    Autor: Pedro filho, 12/09/2021
*/

// incluir biblioteca
#include <iostream> // para cout e cin
#include <locale> // para setlocale
#include <iomanip> // para setw, fixed, setprecision
#include <cmath> // para floor ( arredondar o número )
#include <ctime> // para srand( time(NULL) )

using namespace std;

// protótipos de função
void roundToInteger( int number );
void roundToTenths( int number);
void roundToHundredths( int number);
void roundToThousandths( int number);

// função principal
int main()
{
    // localização geográfica
    setlocale( LC_ALL, "portuguese");

    // limpa a tela
    system("cls");

    // variáveis
    int x = 0;
    int resposta = 0;

    // cria o gerador
    srand( time( NULL ) );

    // enquando verdade
    while( true )
    {
        // CRIA NÚMERO ALEATÓRIO
        x = 1 + rand() % 50;

        // cabeçalho
        cout << "ARREDONDANDO NÚMEROS com FLOOR() " << endl;

        // chama a função roundtoInteger
        roundToInteger( x );

        // chama a função roundtoTenths
        roundToTenths( x );

        // chama a função roundToHundredths
        roundToHundredths( x );

        // chama a função roundToThousandths
        roundToThousandths( x );

        // entrada da resposta
        cout << "Digite qualquer tecla para continuar (-1 = sair): ";
        cin >> resposta;

        // limpa a tela
        system("cls");

        if( resposta == -1 )
            break; // saia do programa

    } // fim enquanto

    // pula linha
    cout << endl;

    system("pause"); // pausa do programa

    return 0; // programa terminado com sucesso

} // fim main

// cria afunção roundToInteger
void roundToInteger( int number )
{
    cout << "\nNenhuma casa decimal." << endl;

    // variáveis
    float mudar = number / 3.14159;
    float y = floor( mudar + .5 ); // arredonda y

    // mostra o resultado
    cout << "Você digitou " << number << " / 3,14159 = " << mudar
            << "\nque foi arredondado para " << y << endl;
} // fim função roundToInteger

void roundToTenths( int number)
{
    cout << "\nUma casa decimal." << endl;

    // variáveis
    float mudar = number / 3.14159;
    float y = floor( mudar * 10 + .5 ) / 10; // arredonda y com uma casa

    // mostra o resultado
    cout << "Você digitou " << number << " / 3,14159 = " << mudar
            << "\nque foi arredondado para " << y << endl;
} // fim função

void roundToHundredths( int number)
{
        cout << "\nDuas casas decimais." << endl;

    // variáveis
    float mudar = number / 3.14159;
    float y = floor( mudar * 100 + .5 ) / 100; // arredonda y com duas casa

    // mostra o resultado
    cout << "Você digitou " << number << " / 3,14159 = " << mudar
            << "\nque foi arredondado para " << y << endl;
} // fim função

void roundToThousandths( int number)
{
        cout << "\nTrês casas centésimais." << endl;

    // variáveis
    float mudar = number / 3.14159;
    float y = floor( mudar * 1000 + .5 ) / 1000; // arredonda y com três casas

    // mostra o resultado
    cout << "Você digitou " << number << " / 3,14159 = " << mudar
            << "\nque foi arredondado para " << y << endl;
} // fim função
