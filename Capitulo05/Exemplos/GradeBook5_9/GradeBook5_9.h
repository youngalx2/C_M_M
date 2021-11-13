/*
    1// Figura 5.9: GradeBook.h
    2// Definição da classe GradeBook que conta as notas A, B, C, D e F.
    3// As funções-membro são definidas no GradeBook.cpp
    Deitel, Harvey; Paul, Harvey. C++ Como Programar (p. 152). Edição do Kindle.
*/

#include <string>

using namespace std;

// cria a classe GradeBook
class GradeBook
{
public:
    GradeBook( string ); // cria o construtor da classe
    void setCourseName( string ); // configura o nome do curso
    string getCourseName(); // retorna o nome do curso
    void displayMessage(); // mostra a mensagem de boas-vindas
    void inputGrades(); // insere o número de notas do usuário
    void displayGradeReport(); // mostra um relatório baseado nas notas

private:
    string courseName; // nome do curso para esse grade book
    int aCount; // contas as notas A
    int bCount; // contas as notas B
    int cCount; // contas as notas C
    int dCount; // contas as notas D
    int fCount; // contas as notas F
};
