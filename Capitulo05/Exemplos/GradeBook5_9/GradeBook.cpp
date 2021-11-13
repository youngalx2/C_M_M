/*
    1// Figura 5.10: GradeBook.cpp
    2// Definições de função-membro para a classe GradeBook que
    3// utiliza uma instrução switch para contar as notas A, B, C, D e F.
    Deitel, Harvey; Paul, Harvey. C++ Como Programar (p. 152). Edição do Kindle.
    Autor:
*/

// incluir biblioteca
#include <iostream>
#include <locale>
#include "GradeBook5_9.h"

using namespace std;

GradeBook::GradeBook( string name )
{
    setCourseName( name );
    aCount = 0; // inicializa a contagem da nota A com zero
    bCount = 0; // inicializa a contagem da nota B com zero
    cCount = 0; // inicializa a contagem da nota C com zero
    dCount = 0; // inicializa a contagem da nota D com zero
    fCount = 0; // inicializa a contagem da nota F com zero
} // fim construtor

// cria a função para configurar o nome do curso com até 25 caracteres
void GradeBook::setCourseName( string name )
{
    // se o nome tiver até 25 caracteres
    if( name.length() == 25 )
    {
        // nome do curso recebe o nome
        courseName = name;
    } // fim if
    else // se o nome tiver mais de 25 caracteres
    {
        //configura o nome do curso com os primeiros 25 caracteres
        courseName = name.substr( 0, 25 );

        // imprime o aviso
        cout << "O nome do curso: \" " << name << " \" \nExcede o número de 25 caracteres."
        << "\nO nome do curso está limitado aos primeiros 25 caracteres." << endl;
    } // fim else if

} // fim setCourseNome

// cria a função getCourseName
string GradeBook::getCourseName()
{
    // retorna o nome do curso
    return courseName;
} // fim get

// cria a função displayMessage
void GradeBook::displayMessage()
{
    // chama a função getCourseName e imprima a mensagem de boas vindas
    cout << "Bem vindo ao curso: " << getCourseName() << "!\n" << endl;
} // fim displayMessage

// cria a função imput notas
void GradeBook::inputGrades()
{
    // cria variável
    int grade;

    // entrada de dados
    cout << "Entre com a letra da nota : " << endl;

    // enquanto usuário não digitar a tecla ctrl z
    while( ( grade = cin.get() ) != EOF )
    {
        // determina que nota foi inserida
        switch( grade )
        {
            case 'A':
            case 'a':
                aCount++;
                break;

            case 'B':
            case 'b':
                bCount++;
                break;

            case 'C':
            case 'c':
                cCount++;
                break;

            case 'D':
            case 'd':
                dCount++;
                break;

            case 'F':
            case 'f':
                fCount++;
                break;

            case '\n':
            case '\t':
            case ' ':
                break;

            default:
                cout << "Valor indevido!" << endl;
                break;

        } // fim switch
    } // fim while
} // fim função

// cria a função displayGradeReport
void GradeBook::displayGradeReport()
{
    // imprima
    cout << "\nRelação dos estudantes que tiveram às notas: " << endl;
    cout << "\nA: " << aCount; // mostra total das notas A
    cout << "\nB: " << bCount; // mostra total das notas B
    cout << "\nC: " << cCount; // mostra total das notas C
    cout << "\nD: " << dCount; // mostra total das notas D
    cout << "\nF: " << fCount; // mostra total das notas F
} // fim função displayGradeReport
