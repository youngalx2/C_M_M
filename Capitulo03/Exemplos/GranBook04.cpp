/*
    1// Figura 3.7: fig03_07.cpp
    2// Instanciando múltiplos objetos da classe GradeBook e utilizando
    3// o construtor GradeBook para especificar o nome do curso
    4// quando cada objeto GradeBook é criado.
    Deitel, Harvey; Paul, Harvey. C++ Como Programar (p. 68). Edição do Kindle.
    Autor:
*/

#include <iostream>
#include <locale>
#include <string>

using namespace std;

// cria a classe GradBook
class GradBook
{
public:

    // cria o construtor da classe
    GradBook ( string nome )
    {
        // chama a função-membro set que inicializa o nome do curso
        setNomeDoCurso( nome );

    } // fim construtor

    // cria a função setNomeDoCurso
    void setNomeDoCurso( string nome )
    {
        nomeDoCurso = nome; // armazena o nome do curso no objeto
    } // fim função set

    // cria a função getNomeDoCurso
    string getNomeDoCurso()
    {
        return nomeDoCurso; // retorna o nome do curso do objeto
    } // fim get

    // cria a função displayMessage
    void displayMessage()
    {
        // mostra a mensagem de boas vinda
        cout << "Bem vindo ao curso: " << getNomeDoCurso() << endl;
    } // fim display

private:
    string nomeDoCurso; // cria a variável privativa da classe

}; // fim classe


// função principal
int main()
{
    // define a localização geográfica
    setlocale(LC_ALL, "portuguese");

    // cria variável
    string nomeCurso;

    // cria o objeto da classe GradBook
    GradBook meuGradBook01( "C++ Como Programar.");
    GradBook meuGradBook02( "C# How to Program." );

    // mostra resultado inicial
    meuGradBook01.displayMessage();
    meuGradBook02.displayMessage();

    return 0; // programa terminado com sucesso

} // fim main
