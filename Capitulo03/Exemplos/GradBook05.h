#include <iostream>
#include <string>

using namespace std;

class GradBook
{
public:
    // cria o construtor
    GradBook( string nome )
    {
        setNomeDoCurso( nome );
    } // fim construtor

    // cria função set
    void setNomeDoCurso( string nome )
    {
        // atribui parâmetro nome à variável da classe nomeDoCurso
        nomeDoCurso = nome;
    } // fim set nome

    // cria a função get
    string getNomeDoCurso()
    {
        // retorna o valor da variável nomeDoCurso
        return nomeDoCurso;
    } // fim get

    // cria display
    void displayMessage()
    {
        cout << "Bem vindo ao curso: " << getNomeDoCurso() << endl;
    } // fim display

private:
    // cria a variável da classe
    string nomeDoCurso;

}; // fim classe
