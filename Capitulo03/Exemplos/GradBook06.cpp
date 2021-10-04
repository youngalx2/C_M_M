/*
    1// Figura 3.12: GradeBook.cpp
    2// Definições de função-membro de GradeBook. Esse arquivo contém
    3// implementações das funções-membro prototipadas em GradeBook.h.
    Deitel, Harvey; Paul, Harvey. C++ Como Programar (p. 75). Edição do Kindle.
    Autor:
*/

#include <iostream>
#include <locale>
#include <string>
#include "GradBook06.h"

using namespace std;

    // cria construtor
    GradBook06::GradBook06( string nome )
    {
        setNomeDoCurso( nome );
    } // fim construtor

    void GradBook06::setNomeDoCurso( string nome )
    {
        nomeDoCurso = nome;
    } // fim set

    // cria get
    string GradBook06::getNomeDoCurso()
    {
        return nomeDoCurso;
    } // fim get

    // cria display
    void GradBook06::displayMessage()
    {
        cout << "Bem vindo ao curso: " << getNomeDoCurso() << endl;
    } // fim display
