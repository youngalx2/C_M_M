#include <string>
#include "GradeBookModificado01.h"

GradeBookModificado01::GradeBookModificado01(string cursoNome, string professorNome )
{
    setNomeDoCurso( cursoNome );
    setNomeDoProfessor( professorNome );
} // fim construtor

void GradeBookModificado01::setNomeDoCurso( string nome )
{
    nomeDoCurso = nome;
} // fim setNomeDoCurso

string GradeBookModificado01::getNomeDoCurso()
{
    return nomeDoCurso;
} // fim getNomeDoCurso

void GradeBookModificado01::setNomeDoProfessor(string nome )
{
    nomeDoProfessor = nome;
} // fim setNomedoProfessor

string GradeBookModificado01::getNomeDoProfessor()
{
    return nomeDoProfessor;
} // fim grtNomeDoProfessor

void GradeBookModificado01::displayMessage()
{
    cout << "Bem vindo ao curso: " << getNomeDoCurso() << endl;
    cout << "Professor: " << getNomeDoProfessor() << endl;
} // fim display
