/*
    1// Figura 3.11: GradeBook.h
    2// Definição da classe GradeBook. Esse arquivo apresenta a interface pública de
    3// GradeBook sem revelar as implementações de funções-membro de GradeBook
    4// que são definidas em GradeBook.cpp.
    Deitel, Harvey; Paul, Harvey. C++ Como Programar (p. 75). Edição do Kindle.
*/

#include <iostream>
#include <string>

using namespace std;

class GradBook06
{
public:
    GradBook06( string ); // construtor para GradBook06
    void setNomeDoCurso( string ); // cria a função set
    string getNomeDoCurso(); // cria a função get
    void displayMessage(); // cria a função display

private:
    string nomeDoCurso;
}; // fim classe
