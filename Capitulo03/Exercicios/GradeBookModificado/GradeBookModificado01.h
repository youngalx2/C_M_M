#include <iostream>
#include <string>

using namespace std;

class GradeBookModificado01
{
public:
    GradeBookModificado01( string, string ); // cria o construtor
    void setNomeDoCurso( string ); // função que configura o nome do curso
    string getNomeDoCurso(); // função que obtem o nome do curso
    void setNomeDoProfessor( string ); // função que configura o nome do professor
    string getNomeDoProfessor(); // função que obtem o nome do professor
    void displayMessage(); // função que mostra a mensagem de boas-vindas

private:
    string nomeDoCurso; // variável para o nome do curso
    string nomeDoProfessor; // variável que recebe o nome do professor

}; // fim classe Grade
