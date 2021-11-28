/*
    1// Figura 7.25: fig07_25.cpp
    2// Cria objeto GradeBook utilizando um array bidimensional de notas.
    Deitel, Harvey; Paul, Harvey. C++ Como Programar (p. 286). Edição do Kindle.
    08/10/2021
*/

#include <iostream>
#include <string>
#include "GradeBook7_23.h"

using namespace std;

int main()
{
    setlocale( LC_ALL, "portuguese" );

    system("cls"); // limpa a tela

    // cria a matriz
    int gradesArray[ GradeBook::students ] [ GradeBook::tests ] =
        {
            { 87, 96, 70 },
            { 68, 87, 90 },
            { 94, 100, 90 },
            { 100, 81, 82 },
            { 83,65,85 },
            { 78, 87, 65 },
            { 85,75,83 },
            { 91, 94, 100 },
            { 76, 72, 84 },
            { 87, 93, 73 }

        }; // fim matriz

    // cria o objeto da classe
    GradeBook myGradeBook("C++ como programa dos Deitel", gradesArray);

    myGradeBook.displayMessage();

    myGradeBook.processGrades();

    system("pause"); // pausa o programa

    cout << "Hello world!" << endl;

    return 0; // fim do programa
} // fim main
