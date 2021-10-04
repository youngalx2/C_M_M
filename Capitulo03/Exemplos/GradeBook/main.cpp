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
