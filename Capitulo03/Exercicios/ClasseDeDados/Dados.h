#include <iostream>

using namespace std;

// cria a classe dados
class Dados
{
public:
    Dados(int, int, int); // construtor da classe
    void setDia(int); // função para configurar o dia
    int getDia(); // obtem o valor do dia
    void setMes(int); // configura o mês
    int getMes(); // obtem o valor do mês
    void setAno( int ); // configura o ano
    int getAno(); // obtem o valor do ano
    void displayMensagem(); // mostra dia, mês e ano formatada

private:
    int dia; // recebe o valor do dia
    int mes; // recebe o valor do mÊs
    int ano; // recebe o valor do ano
}; // fim classe
