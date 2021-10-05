/*
    1// Figura 3.17: fig03_17.cpp
    2// Cria e manipula um objeto GradeBook; ilustra a validação.
    Deitel, Harvey; Paul, Harvey. C++ Como Programar (p. 80). Edição do Kindle.
*/
#include <iostream>
#include <string>
using namespace std;

#include "GradeBook.h"

int main()
{
    GradeBook meuGradeBook1( "C++ Como Programar " );
    meuGradeBook1.displayMessage();
    cout << "meuGradeBook1 criado para o curso:\n" << meuGradeBook1.getGradeBook() << "!" << endl;

    GradeBook meuGradeBook2( "Visual C# Como Programar" );
    cout << "meuGradeBook2 criado para o curso:\n" << meuGradeBook2.getGradeBook() << "!" << endl;

    cout << "Hello world!" << endl;
    return 0;
}
