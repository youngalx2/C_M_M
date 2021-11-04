/*
    1// Figura 3.10: fig03_10.cpp
    2// Incluindo a classe GradeBook a partir do arquivo Gradebook.h para uso em main.
    Deitel, Harvey; Paul, Harvey. C++ Como Programar (p. 72). Edição do Kindle.
    Autor:
*/

#include <iostream>
#include <locale>
#include "GradBook05.h"

using namespace std;

// função principal
int main()
{
    // define a localização geográfica
    setlocale(LC_ALL, "portuguese");

    // cria o objeto para a classe GradBook.h
    GradBook meuGradBook1( "C++ Como Programar" );
    GradBook meuGradBook2( "C# Como Programar" );

    // mostra resultado
    meuGradBook1.displayMessage();
    meuGradBook2.displayMessage();

    return 0; // programa terminado com sucesso

} // fim main
