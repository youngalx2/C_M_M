/*
    1// Figura 4.12: GradeBook.h
    2// Definição da classe GradeBook que determina a média de uma classe.
    3// As funções-membro são definidas no GradeBook2.cpp
    Deitel, Harvey; Paul, Harvey. C++ Como Programar (p. 111). Edição do Kindle.
*/

#include <string>

using namespace std;

// cria a classe GradeBook2
class GradeBook2
{
public:
    GradeBook2( string ); // cria o construtor da classe e inicializa o nome do curso
    void setCurseName( string ); // configura o nome do curso
    string getCurseName(); // obtem o nome do curso
    void displayMessage(); // mostra mensagem de boas-vindas
    void determineClassAverage(); // calcula a soma e a média das notas

private:
    string curseName; // variável nome do cruso da classe
}; // fim classe GradeBook2
