/*
    1// Figura 3.5: fig03_05.cpp
    2// Define a classe GradeBook que contém um membro de dados courseName
    3// e funções-membro para configurar e obter seu valor;
    4// Cria e manipula um objeto GradeBook com essas funções.
    Deitel, Harvey; Paul, Harvey. C++ Como Programar (p. 63). Edição do Kindle.
    Autor:
*/

#include <iostream>
#include <locale>

using namespace std;

// cria a classe GradBook
class GradBook
{
public:
    // cria a função que configura o nome do curso
    void setNomeDoCurso( string nome )
    {
        nomeDoCurso = nome;
    } // fim função set

    // cria a função que obtem o nome do curso
    string getNomeDoCurso()
    {
        return nomeDoCurso; // retornao nome do curso
    } // fim get

    // cria a função displayMessage
    void displayMessage()
    {
        cout << "Bem vindo ao curso: " << getNomeDoCurso() << "!" << endl;
    } // fim display

private:
    // variável
    string nomeDoCurso;

}; // fim classe
// função principal
int main()
{
    // define a localização geográfica
    setlocale(LC_ALL, "portuguese");

    // cria variável
    string nomeCurso;

    // cria o objeto da classe GradBook
    GradBook meuGradBook;

    // mostra o valor inicial do nome do curso
    cout << "O valor inicial do nome do curso é: " << meuGradBook.getNomeDoCurso() << endl;

    // entrada de dados pelo usuário
    cout << "Informe o nome do curso: ";

    // obtem o nome do curso digitado pelo usuário
    getline( cin, nomeCurso );

    // chama a função-membro set da classe GradBook, através do objeto meuGradBook,
    // e atribui o valor da variável string nomeCurso
    meuGradBook.setNomeDoCurso( nomeCurso );

    // pula uma linha
    cout << endl;

    // chama a função membro para mostra o nome do curso
    meuGradBook.displayMessage();

    return 0; // programa terminado com sucesso

} // fim main
