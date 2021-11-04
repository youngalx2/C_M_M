#include <iostream>

using namespace std;

// cria a classe
class ComissaoPorVendas
{
public:
    // cria funções
    void setValorDaVenda( double ); // configura o valor da venda
    double getValorDaVenda(); // obtem o valor da venda
    void calcularValorDaVenda( double); // calcular o valor da venda
    void entradaDeDados(); // recebe os dados do usuário
    void mostrarSalario(); // mostra o resultado

private:
    // cria variáveis
    double valorDaVenda;

}; // fim classe
