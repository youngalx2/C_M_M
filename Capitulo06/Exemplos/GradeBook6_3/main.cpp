/*
    1// Figura 6.5: fig06_05.cpp
    2// Cria o objeto GradeBook, insere notas e exibe relatório de notas.
    Deitel, Harvey; Paul, Harvey. C++ Como Programar (p. 187). Edição do Kindle.
*/

#include <iostream>
#include <locale>
#include "GradeBook6_3.h"

using namespace std;

int main()
{
    // localização
    setlocale( LC_ALL, "portuguese" );

    // limpa a tela
    system("cls");

    // cria o objeto da classe grade book
    GradeBook meuGradeBook( "Livro C++ como programar dos Deitel" );

    // exibe mensagens de boas vindas
    meuGradeBook.displayMessage();

    // adicionando às notas
    meuGradeBook.inputGrades();

    // mostra o maior valor das 3 notas
    meuGradeBook.dysplayGradeReport();

    // pula uma linha
    cout << endl;

    // pausa o programa
    system("pause");

    // fim do programa
    return 0;

} // fim main
