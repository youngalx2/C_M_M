/*
    6.27 (Temperaturas Celsius e Fahrenheit) Implemente as seguintes funções
    para trabalhar com inteiros:
    a) A função celsius retorna o equivalente em Celsius de uma temperatura em Fahrenheit.
    b) A função fahrenheit retorna o equivalente em Fahrenheit de uma temperatura em Celsius.
    c) Utilize essas funções para escrever um programa que imprime gráficos para
    mostrar os equivalentes em Fahrenheit de todas as temperaturas em Celsius de
    0 a 100 graus e os equivalentes em Celsius de todas as temperaturas em
    Fahrenheit de 32 a 212 graus. Imprima  as saídas em um formato tabular
    elegante que minimiza o número de linhas de saída mas permanece legível.
    Deitel, Harvey; Paul, Harvey. C++ Como Programar (p. 244). Edição do Kindle.
    Autor: Pedro Filho, 15/09/2021
*/

// incluir biblioteca
#include <iostream> // para cout e cin
#include <locale> // para setlocale
#include <iomanip> // para setw, fixed, setprecision

using namespace std;

// protótipos de função
int celsius( int fah );
int fahrenheit( int cel );
void temperaturaMista();

// função principal
int main()
{
    // localização geográfica
    setlocale( LC_ALL, "portuguese");

    // limpa a tela
    system("cls");

    // cria variáveis
    int cel = 0;
    int fah = 0;
    int opcao = 0;
    int resposta = 0;

    // enquanto resposta diferente de -1 faça
    while( resposta != -1)
    {
        // menu
        cout << "CONVERSÃO DE TEMPERATURA" << endl;
        cout << "***********************" << endl;
        cout << "*  1   =   Celcius    *" << endl;
        cout << "*  2   =   Fahreneit  *" << endl;
        cout << "*  3   =   Mistas     *" << endl;
        cout << "***********************" << endl;

        // entrada de dados
        cout << "Qual sua opção: ";
        cin >> opcao;

        // switch
        switch( opcao )
        {
            case 1:
                cout << "Digite a temperatura em Fahrenheit: ";
                cin >> fah;
                cout << "A temperatura " << fah << "ºF equivale a "
                        << celsius( fah ) << "ºC" << endl;
                break;

            case 2:
                cout << "Digite a temperatura em Celsius: ";
                cin >> cel;
                cout << "A temperatura " << cel << "ºC equivale a "
                        << fahrenheit( cel ) << "ºF" << endl;
                break;

            case 3:
                temperaturaMista();
                break;

        }// fim switch

        // Entrada da resposta
        cout << "Deseja continuar (-1 para sair)? ";
        cin >> resposta;

        // limpa a tela
        system("cls");

    } // fim while

    // pula linha
    cout << endl;

    system("pause"); // pausa do programa

    return 0; // programa terminado com sucesso

} // fim main

// cria a função fahrenheit
int fahrenheit( int cel )
{
    // cria variável
    int resultado = ( 1.8 * cel ) + 32;

    // retorne o resultado
    return resultado;
} // fim função fahrenheit

// cria função celsius
int celsius( int fah )
{
    int resultado = ( fah - 32 ) / 1.8;

    return resultado;
} // fim função celsius

// cria a função temperaturaMista
void temperaturaMista()
{
    // variável
    int resultado = 0;

    // cabeçalho
    cout << "Celsius" << setw( 15 ) << "Fahrenheit" << endl;

    for( int cel = 0; cel <= 50; cel += 5 )
    {
        // resultado recebe o valor da função celsius
        resultado = fahrenheit( cel );

        // imprime o resultado
        cout << setw(3) << cel << "ºC" << setw(12) << resultado << "ºF";

        // loop para criar graficos de asteriscos
        for( int j = 0; j <= resultado; j++ )
            // imprima asterisco
            cout << "*";

        // pula linha
        cout << endl;
    } // fim for

} // fim função temperatura mista
