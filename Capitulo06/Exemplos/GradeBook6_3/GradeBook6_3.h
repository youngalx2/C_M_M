/*
    1// Figura 6.3: GradeBook.h
    2// Definição de classe GradeBook que localiza a máxima de três notas.
    3// As funções-membro são definidas no GradeBook.cpp
    Deitel, Harvey; Paul, Harvey. C++ Como Programar (p. 185). Edição do Kindle.
*/

#include <string>

using namespace std;

// cria classe GradeBook
class GradeBook
{
public:
    GradeBook( string ); // cria o construtor que inicializa o nome docurso
    void setCourseName( string ); // configura o nome do curso
    string getCourseName(); // retorna o nome do curso
    void displayMessage(); // exibe a mensagem de boas-vindas
    void inputGrades(); // inserie três notas fornecidas pelo usuário
    void dysplayGradeReport(); // exibe um relatório das notas fornecidas
    int maximum( int, int, int ); // determina o maior entre 3 valores

private:
    string courseName; // recebe o nome do curso
    int studentMaximum; // recebe a maior nota

}; // fim classe
