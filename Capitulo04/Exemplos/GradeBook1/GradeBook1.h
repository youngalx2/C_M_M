/*
    1// Figura 4.8: GradeBook.h
    2// Definição da classe GradeBook que determina a média de uma classe.
    3// As funções-membro são definidas no GradeBook.cpp
    Deitel, Harvey; Paul, Harvey. C++ Como Programar (p. 105). Edição do Kindle.
*/

#include <string>

using namespace std;

// cria a classe GradeBook1
class GradeBook1
{
public:
    GradeBook1( string ); // cria o construtor GradeBook1
    void setCourseName( string ); // configura o nome do curso
    string getCourseName(); // recupera o nome do curso
    void displayMessage(); // mostra a mensagem de boas-vinda
    void determineClassAverage(); // caucula a média das notas inceridas pelo usuário
private:
    string courseName; // cria a variável da classe
}; // fim classe GradeBook1
