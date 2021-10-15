#include <iostream>
#include <string>

using namespace std;

// cria a classe empregado
class Empregado
{
public:
    Empregado(string, string, int ); // cria o construtor com 3 parâmetros
    void setNome(string); // configura o nome do empregado
    string getNome(); // obtem o nome do empregado
    void setSobreNome( string ); // configura o sobre nome do empregado
    string getSobreNome(); // obtem o sobrenome do empregado
    void setSalario( int ); // configura o valor do salário do empregado
    int getSalario(); // obtem o valor do salálario do empregado
    int salarioAnual( int ); // retorna o valor do salário anual

private:
    string nomeDoEmpregado; // variável que recebe o nome do empregado
    string sobreNome; // variável que recebe o sobrenome do empregado
    int salario; // variável que recebe o salário do empregado
}; // fim classe
