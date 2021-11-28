/*
    1// Figura 7.23: GradeBook.h
    2// Definição da classe GradeBook que utiliza um
    3// array bidimensional para armazenar notas de teste.
    4// As funções-membro são definidas em GradeBook.cpp
    Deitel, Harvey; Paul, Harvey. C++ Como Programar (p. 282). Edição do Kindle.
*/

// biblioteca
#include <string>

using namespace std;

class GradeBook
{
public:
    const static int students = 10; // número de estudantes avaliados
    const static int tests = 3; // número de testes aplicados para cada aluno

    GradeBook( string, const int [][ tests ] );
    void setCourseName( string ); // configura o nome do curso
    string getCourseName(); // retorna o nome do curso
    void displayMessage(); // exibe uma mensagem de de boas-vindas
    void processGrades(); // realiza várias operações de dados
    int getMinimum(); // localiza a menor nota
    int getMaximum(); // localiza a maior nota
    double getAverage( const int [], const int ); // calcula a média das notas
    void outputBarChart(); // gera saída do gráfico de barras das notas
    void outputGrades(); // gera a saída do conteúdo da matris notas

private:
    string courseName; // para o nome do curso
    int grades[ students ][ tests ]; // para as notas dos alunos

}; // fim classe grade book
