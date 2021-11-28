/*
    6.34 Escreva um programa que simula o lançamento de uma moeda.
    Para cada lançamento da moeda, o programa deve imprimir Heads ou  Tails
    (cara ou coroa). Deixe o programa lançar a moeda 100 vezes e conte o número
    de vezes que cada lado da moeda aparece. Imprima  os resultados. O programa
    deve chamar uma função flip separada que não aceita nenhum argumento e
    retorna 0 para coroa e 1 para cara.  [Nota: Se o programa simular realistamente
    o lançamento de uma moeda, cada lado da moeda deve aparecer aproximadamente
    metade  das vezes.]
    Deitel, Harvey; Paul, Harvey. C++ Como Programar (p. 244). Edição do Kindle.
    Autor: Pedro Filho, 20/09/2021
*/

// incluir biblioteca
#include <iostream> // para cout e cin
#include <locale> // para setlocale
#include <iomanip> // para setw, fixed, setprecision
#include <ctime>

using namespace std;

// protótipo
int caraOuCoroa();

// função principal
int main()
{
    // localização geográfica
    setlocale( LC_ALL, "portuguese");

    // limpa a tela
    system("cls");

    // variável
    int resultado;
    int cara = 0;
    int coroa = 0;

    // cabeçalho
    cout << "JOGO CARA ou COROA" << endl;

    // gerador para rand()
    srand( time( NULL) );

    // loop para números aleatórios
    for( int i = 1; i <= 100; i++ )
    {
        // resultado recebe o valor retornado da função cara ou coroa
        resultado = caraOuCoroa();

        // se o resultado igual a zero
        if( resultado == 0 )
        {
            // imprima coroa
            cout << setw(8) << "Coroa ";
            ++coroa; // incrementa coroa
        } // fim if
        else if( resultado == 1 ) // se não
        {
            // imprima coroa
            cout << setw(8) <<"Cara ";
            // incrementa cara
            ++cara;
        } // fim else if

    } // fim for

    // imprime resultado
    cout << "\nCara apareceu " << cara << " vezes" << endl;
    cout << "Coroa apareceu " << coroa << " vezes." << endl;

    // pula linha
    cout << endl;

    system("pause"); // pausa do programa

    return 0; // programa terminado com sucesso

} // fim main

// cria a função caraOuCoroa
int caraOuCoroa()
{
    // cria a variável que recebe um número aleatório entre 0 e 1
    int moeda = rand() % 2;

    // e retorna o valor gerado
    return moeda;

} // fim função caraOuCoroa

