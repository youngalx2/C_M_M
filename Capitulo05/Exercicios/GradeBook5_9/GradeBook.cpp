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
    totalDasNotas = 0; // inicializa o total das notas em zero
    totalDePontos = 0; // inicializa o total de pontos em zero
    mediaDePontos = 0; // inicializa a média de pontos em zero
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
        cout << "\nO nome do curso: \" " << name << " \" \nExcede o número de 25 caracteres."
        << "\n\nO nome do curso está limitado aos primeiros 25 caracteres." << endl;
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
    cout << "\nBem vindo ao curso:\n" << getCourseName() << "!\n" << endl;
} // fim displayMessage

// cria a função imput notas
void GradeBook::inputGrades()
{
    // cria variável
    int grade;
    int pontosA = 0;
    int pontosB = 0;
    int pontosC = 0;
    int pontosD = 0;
    int pontosF = 0;

    // entrada de dados
    cout << "\nEntre com a letra ( A-a, B-b,C-c,D-d ou F-f) para nota : " << endl;

    // enquanto usuário não digitar a tecla ctrl z
    while( ( grade = cin.get() ) != EOF )
    {
        // determina que nota foi inserida
        switch( grade )
        {
            case 'A':
            case 'a':
                aCount++;
                pontosA += 4;
                break;

            case 'B':
            case 'b':
                bCount++;
                pontosB += 3;
                break;

            case 'C':
            case 'c':
                cCount++;
                pontosC += 2;
                break;

            case 'D':
            case 'd':
                dCount++;
                pontosD += 1;
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
    // calcula total das notas;
    totalDasNotas = aCount + bCount + cCount + dCount + fCount;

    // calcula o total de pontos
    totalDePontos = pontosA + pontosB + pontosC + pontosD;

    // calcula a média dos pontos
    mediaDePontos = totalDePontos / 4;

} // fim função


// cria a função displayGradeReport
void GradeBook::displayGradeReport()
{
    // imprima
    cout << "\nRelação dos estudantes que tiveram às notas: " << endl;
    cout << "\n\tA: " << aCount << " Alunos"; // mostra total das notas A
    cout << "\n\tB: " << bCount << " Alunos"; // mostra total das notas B
    cout << "\n\tC: " << cCount << " Alunos"; // mostra total das notas C
    cout << "\n\tD: " << dCount << " Alunos"; // mostra total das notas D
    cout << "\n\tF: "  << fCount << " Alunos"; // mostra total das notas F
    cout << "\n\tTotal de notas: " << totalDasNotas;
    cout << "\n\tTotal de pontos: " << totalDePontos;
    cout << "\n\tMédia dos pontos: " << mediaDePontos;

} // fim função displayGradeReport
