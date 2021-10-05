/*
    1// Figura 3.16: GradeBook.cpp
     2// Implementações das definições de função-membro de GradeBook.
     3// A função setCourseName realiza a validação.
    Deitel, Harvey; Paul, Harvey. C++ Como Programar (p. 79). Edição do Kindle.
*/
#include <iostream>
#include <string>
#include "GradeBook.h" // inicia a definição da classe GradeBook

using namespace std;

// construtor inicializa nomeDoCurso com string fornecida como argumento
GradeBook::GradeBook( string nome )
{
    setGradeBook( nome );
} // fim construtor

// função que configura nomeDoCurso
// assegura que o nome tenha no máximo 25 caracteres
void GradeBook::setGradeBook(string nome )
{
    if( nome.length() <= 25 ) // se o nome tiver 25 ou menos caracteres
        nomeDoCurso = nome; // armazena o nome no objeto

    if( nome.length() > 25 ) // se o nome tiver mais de 25 caracteres
    {
        // configura o nomeDoCurso com os primeiros 25 caracteres do parâmetro nome
        nomeDoCurso = nome.substr( 0, 25 );

        // imprima
        cout << "Nome \" " << nome << "\" excede o tamanho máximo (25 caracteres).\n"
                << "Limitado o nome do curso até (25 caracteres).\n" << endl;
    } // fim if
} // fim função set

// função para obter o nomeDoCurso
string GradeBook::getGradeBook()
{
    // retorna  o nomeDoCurso do objeto
    return nomeDoCurso;
} // fim função get

// função que exibe uma mensagem de boas-vinda  para o usuário GradeBook
void GradeBook::displayMessage()
{
    // chama a função getGradeBook para obter o nomeDoCurso
    cout << "Bem vindo ao curso:\n" << getGradeBook() << "!" << endl;
} // fim displayGradeBook
