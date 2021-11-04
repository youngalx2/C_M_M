/*
    1// Figura 4.10: fig04_10.cpp
    2// Cria o objeto da classe GradeBook e invoca sua função determineClassAverage.
    Deitel, Harvey; Paul, Harvey. C++ Como Programar (p. 107). Edição do Kindle.
*/
 #include <iostream>
 #include "GradeBook1.h"

using namespace std;

int main()
{
    // limpa a tela
    system("cls");

    // cria o objero da classe GradeBook1
    GradeBook1 meuGradeBook1( "Livro C++ como programar dos Deitel." );

    // chama a função membro display com o objeto meuGradeBook1
    meuGradeBook1.displayMessage();

    // chama a função membro determine com o objeto meuGradeBook1
    meuGradeBook1.determineClassAverage();

    // pausa o programa
    system("pause");

    // fim do programa
    return 0;
} // fim main
