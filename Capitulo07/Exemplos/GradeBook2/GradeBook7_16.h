  /*
    1// Figura 7.16: GradeBook.h
    2// Definição da classe GradeBook que usa um array para armazenar notas de teste.
    3// As funções-membro são definidas em GradeBook.cpp
    Deitel, Harvey; Paul, Harvey. C++ Como Programar (p. 271). Edição do Kindle.
    Autor: 04/10/2021
*/

// incluir biblioteca
#include <string> // para strings

using namespace std;

// cria a classe GradeBook
class GradeBook
{
public:
    // constante -- número de alunos que fizeram o teste
    const static int students = 10; // na parte pública pode ser usado por toda a classe

    // cria o construtor para inicializa onome do curso e às notas
    GradeBook( string, const int [] );

    void setCourseName( string ); // configura o nome do curso
    string getCourseName(); // retorna o nome do curso
    void displayMessage(); // mostra a mensagem de boas vindas
    void processGradeBook(); // realiza varias operações nos dados
    int getMinimum(); // localiza a menor nota
    int getMaximum(); // localiza a maior nota
    double getAverage(); // calcula a média do aluno
    void outputBarChart(); // mostra as barras de caracteres baseado nas notas do alunos
    void outputGrades(); // mostra as notas dos alunos

private:
    // variável para
    string courseName; // armazena o nome do curso
    // array para
    int grades[ students ];  // armazena as notas dos estudantes

}; // fim da classe
