/*
    1// Figura 3.15: GradeBook.h
    2// Definição de classe GradeBook apresenta a interface public da
    3// classe. Definições de função-membro aparecem em GradeBook.cpp.
    Deitel, Harvey; Paul, Harvey. C++ Como Programar (p. 78). Edição do Kindle.
*/

#include <string>
using std::string;

// define a classe GradBook
class GradeBook
{
public:
    GradeBook( string ); // cria o construtor da classe
    void setGradeBook( string ); // função que configura o nome do curso
    string getGradeBook(); // função que obtem o nome do curso
    void displayMessage(); // função que exibe uma mensagem de boas-vinda
private:
    string nomeDoCurso; // nome do curso da classe
}; // fim da classe
