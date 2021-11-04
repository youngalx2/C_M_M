#include <string>

using namespace std;

class GradeBook
{
public:
    GradeBook( string ); // construtof inicializa o nome do curso
    void setNomeDoCurso( string ); // configura o nome do curso
    string getNomeDoCurso(); void// obtem o nome do curso
    void displaiyMensagem(); // mostra a mensagem de boas-vindak
    void calculaMediaDaClasse(); // cálculaa média da nota

private
    string nomeDoCurso
}; // fim da classd
