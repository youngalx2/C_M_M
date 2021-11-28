/*
    1// Figura 7.24: GradeBook.cpp
    2// Definições de função-membro para a classe GradeBook que
    3// utiliza um array bidimensional para armazenar notas.
    Deitel, Harvey; Paul, Harvey. C++ Como Programar (p. 283). Edição do Kindle.
    Autor: 07/10/2021
*/

// incluir biblioteca
#include <iostream> // para cout, cin, endl, fixed
#include <iomanip> // para setw, setprecision
#include <string>
#include "GradeBook7_23.h" // para a classe

using namespace std;

// cria o construtor
GradeBook::GradeBook( string name, const int gradesArray[][ tests ] )
{
    setCourseName( name ); // chama a função e recebe o nome do curso

    //copia notas de gradesArray para grades
    for( int student = 0; student < students; student++ )
        for( int test = 0; test < tests; test++ )
            grades[ student ][ test ] = gradesArray[ student ][ test ];
} // fim construtor GradeBook

// cria a função setCourseName
void GradeBook::setCourseName( string name ) // configura o nome do curso
{
    courseName = name;
} // fim função setCourseName

string GradeBook::getCourseName() // retorna o nome do curso
{
    return courseName;
} // fim função getCourseName

// cria função displayMessage
void GradeBook::displayMessage() // exibe uma mensagem de de boas-vindas
{
    cout << "Bem vindo ao curso:\n" << getCourseName() << "!" << endl;
} // fim função

// cria a função processGrades
void GradeBook::processGrades() // realiza várias operações de dadgros
{
    outputGrades(); // gera a saída das notas

    // chama as funções menor valor
    cout << "\nA menor nota foi " << getMinimum() << endl;

    // chama a função maior valor
    cout << "\nA maior nota foi " << getMaximum() << endl;

    // gera saída do gráfico de barras
    outputBarChart();

} // fim função

// cria a função getMinimum
int GradeBook::getMinimum() // localiza a menor nota
{
    // vaariável
    int lowGrade = 100;

    // loop para pesquisar pelos estudantes
    for( int student = 0; student < students; student++ )
    {
        // loop para pesquisar pelo teste
        for( int test = 0; test < tests; test++ )

            // se a nota for menor que a lowGrade
            if( grades[ student ][ test ]  < lowGrade )

                // lowgrade recebe a nota
                lowGrade = grades[ student ][ test ];
    } // fim for studante

    // retorna a menor nota
    return lowGrade;

}  // fim função getMinimum

// cria a função g etMaximum
int GradeBook::getMaximum() // localiza a maior nota
{
    // cria variável
    int heighGrade = 0; // para receber a maior nota

    // loop para os estudantes(linha)
    for( int student = 0; student < students; student++ )
    {
        // loop para os testes
        for( int test = 0; test < tests; test++ )
        {
            // se matriz maior que heith
            if( grades[ student ][ test ] > heighGrade )

                heighGrade = grades[ student ][ test ];
        } // fim for interno
    } // fim for externo

    // retorne heighGrades
    return heighGrade;

} // fim da função get

// cria a função
double GradeBook::getAverage( const int setOfGrades[], const int grades ) // calcula a média das notas
{
    int total = 0;

    // loop para percorre   r a matriz
    for( int grade = 0; grade < grades; grade++ )
    {
        total += setOfGrades[ grade ];
    } // fim loop for

    return static_cast< double >( total ) / grades;

} // fim função getArerage

// cria a função outputBahart
void GradeBook::outputBarChart() // gera saída do gráfico de barras das notas
{
    cout << "\nDISTRIBUIÇÃO DAS NOTAS" << endl;

    // cria constanteloo
    const int tamanhoFreq = 11;
    // cria array
    int frequencia[ tamanhoFreq ] = { 0 };

    //loop para mostrar a frequência
    for( int student = 0; student < students; student++ )
    {
        // loop para a coluna
        for( int test = 0; test < tests; test++ )
            // conta a frequência
            ++frequencia[ grades [student ][ test ] / 10 ];

    } // fim for externo

    // loop para cada frequência de notas mostra um asterisco
    for( int conta = 0; conta < tamanhoFreq; conta++ )
    {
        // gera a saída
        if( conta == 0 )
            cout << "  0-9: ";
        else if( conta == 10 )
            cout << "  100: ";
        else
            cout << conta * 10 << '-' << (conta * 10 ) + 9 << ":  ";

        // loop para mostrar o asteriscos
        for( int stars = 0; stars < frequencia[ conta ]; stars++ )
        {
            cout << "*";
        } // fim for asterisco

        cout << endl; // pula uma linha

    } // fim for conta
} // fim função outpurBarChart

// cria função
void GradeBook::outputGrades() // gera a saída do conteúdo da matris notas
{
    // imprima
    cout << "As notas são:\n\n";
    cout << "               ";

    // cria o título da coluna
    for( int test = 0; test < tests; test++ )
    {
        cout << "Testes:" << test + 1 << "  ";
    } // fim for

    // cria título da média
    cout << "Average" << endl;

    // cria o título da linha
    for( int student = 0; student < students; student++ )
    {
        cout << "Student " << setw( 2 ) << student + 1;

        // gera saída de notas
        for( int test = 0; test < tests; test++ )
            cout << setw( 10 ) << grades[ student ][ test ];

        // chama a função getAverage
        double average = getAverage( grades[ student ], tests );
        cout << setw( 11 ) << setprecision( 2 ) << fixed << average << endl;
    } // fim for externo
} // fim função getGardes
