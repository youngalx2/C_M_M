/*
    1// Figura 5.9: GradeBook.h
    2// Definição da classe GradeBook que conta as notas A, B, C, D e F.
    3// As funções-membro são definidas no GradeBook.cpp
    Deitel, Harvey; Paul, Harvey. C++ Como Programar (p. 152). Edição do Kindle.
*/
#include <iostream>
#include <locale>
#include "GradeBook5_9.h"

using namespace std;

int main()
{
    // localização geográfica
    setlocale(LC_ALL, "portuguese");

    // limpa a tela
    system("cls");

    // cabeçalho
    cout << "GRADEBOOK 5_9" << endl;

    // cria o objeto da classe GradeBook
    GradeBook meuGradeBook("Livro C++ como programar dos Deitel" );

    //mostra a mensagem de boas-vindas
    meuGradeBook.displayMessage();

    // lê as notas fornecidas pelo usuário
    meuGradeBook.inputGrades();

    // mostra  o relatório das notas lançadas
    meuGradeBook.displayGradeReport();

    cout << endl; // pula linha

    // pausa o programa
    system("pause");

    // fim do programa
    return 0;
} // fim main
