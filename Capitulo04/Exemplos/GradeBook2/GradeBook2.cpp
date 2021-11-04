/*
    1// Figura 4.13: GradeBook.cpp
    2// Definições de função-membro para a classe GradeBook que resolve o
    3// programa de média de classe com repetição controlada por sentinela.
    Deitel, Harvey; Paul, Harvey. C++ Como Programar (p. 112). Edição do Kindle.
*/

#include <iostream>
#include <iomanip>
#include "GradeBook2.h"

using namespace std;

// cria o construtor Gradebook2 que inicializa como parâmetro a string nome
GradeBook2::GradeBook2( string nome )
{
    // valida e  armazena o nome do curso
    setCurseName( nome );
} // fim construtor

// cria a função setCurseName que configura o nome do curso
void GradeBook2::setCurseName( string nome )
{
    // se o nome tiver até 25 caracteres
    if( nome.length() <= 25 )
    {
        curseName = nome; // nome do curso recebe o nome
    } // fim if
    else // se o nome tiver mais de 25 caracteres
    {
        // configure para receber só os primeiros 25 caracteres
        curseName = nome.substr( 0, 25 );

        // imprima a mensagem
        cout << "Nome: \"" << nome << "\"\nExcede o limite de 25 caracteres\n"
                << "Nome do curso está limitado aos primeiros 25 caracteres." << endl;
    } // fim else
} // fim função setCurseName

// função getCurseName
string GradeBook2::getCurseName()
{
    // retorne o nome do curso
    return curseName;
} // fim getCurseName

// função displayMessage
void GradeBook2::displayMessage()
{
    // imprima
    cout << "\nBem vindo ao curso:\n" << getCurseName() << endl;
} // fim displayMessage

// função determineClassAverage
void GradeBook2::determineClassAverage()
{
    // cria variáveis
    int total = 0; // soma o total das notas digitadas pelo usuário
    int gradeCounter = 0; // conta o número de notas digitadas
    int grade; // recebe as notas lançadas
    double average = 0; // calcula a média das notas

    // entrada de dados
    cout << "Digite a nota (-1 = sair): ";
    cin >> grade; // aguarda as notas digitadas pelo usuário

    // enquanto nota diferente de -1 faça
    while( grade != -1 )
    {
        // se nota maior que zero
        if( grade > 0 )
        {
            total = total + grade; // soma as notas
            gradeCounter = gradeCounter + 1; // conta as notas digitadas
        } // fim if

        // entrada de dados
        cout << "Digite a nota (-1 = sair): ";
        cin >> grade; // aguarda as notas digitadas pelo usuário

    } // fim while

    // se a contagem das notas for diferente de zero
    if( gradeCounter != 0 )
    {
        // média recebe o valor da divisão total pela contagem das notas
        average = static_cast <double> ( total ) / gradeCounter;

        // imprime resultado
        cout << "\nForam lançadas " << gradeCounter << " notas, valor total " << total << endl;
        cout << "Média = " << average << endl;

    } // fim if
    else // se não
    {
        // imprima
        cout << "\nNenhuma nota foi inserida." << endl;
    } // fim else

} //  fim função determine
