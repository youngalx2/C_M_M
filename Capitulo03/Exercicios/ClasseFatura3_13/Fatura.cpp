/*
    3.13 (Classe Invoice) Crie uma classe chamada Invoice que uma loja de suprimentos
    de informática possa utilizar para representar uma  fatura de um item vendido na loja.
    Uma Invoice (fatura) deve incluir quatro partes das informações como membros de dados
    — um  número identificador (tipo string), uma descrição (tipo string), a quantidade
    comprada de um item (tipo int) e o preço por item (tipo  int). [Nota: Nos capítulos
    subseqüentes, utilizaremos números que contêm pontos de fração decimal (por exemplo, 2,75)
    — chamados  valores de ponto flutuante — para representar quantias em dólar.]
    Sua classe deve ter um construtor que inicializa os quatro membros  de dados.
    Forneça uma função set e uma função get para cada membro de dados. Além disso,
    forneça uma função-membro chamada  getInvoiceAmount que calcula a quantia da fatura
    (isto é, multiplica a quantidade pelo preço por item) e depois retorna a quantidade  como um
    valor int. Se a quantidade não for positiva, ela deve ser configurada como 0. Se o preço por
    item não for positivo, ele deve ser  configurado como 0. Escreva um programa de teste que
    demonstre as capacidades da classe Invoice.
    Deitel, Harvey; Paul, Harvey. C++ Como Programar (p. 92). Edição do Kindle.
    Autor Pedro Filho, 09/08/2021
*/

#include <string>
#include <iostream>
#include "Fatura.h"

using namespace std;

// cria o construtor
Fatura::Fatura(string identidade, string descricao, int quantidade, int preco )
{
    setIdentidade( identidade );
    setDescricao( descricao );
    setQuantidade( quantidade );
    setPreco( preco );
} // fim construtor

// cria função setIdntidade
void Fatura::setIdentidade( string identidade )
{
    identeDaFatura = identidade;
} // fim função setIdentidade

// cria a função getIdentidade
string Fatura::getIdentidade()
{
    return identeDaFatura;
} // fim da função getIdentdade

// cria função descrição da fatura
void Fatura::setDescricao(string descricao )
{
    descricaoDaFatura = descricao;
} // fim função setDescricao

string Fatura::getDescricao()
{
    return descricaoDaFatura;
} // fim getDescrição

// cria função setQuantidade
void Fatura::setQuantidade( int quantidade )
{
    // se quantidade maior ou igual a zero
    if( quantidade >= 0 )
    {
        quantidadeDoProduto = quantidade;
    } // fim do proguto
} // fim função setquantidade

int Fatura::getQuantidade()
{
    return quantidadeDoProduto;
} // fim get

// cria a função setPreco
void Fatura::setPreco(int preco)
{
    // se preco maior que zero
    if( preco >= 0 )
    {
        precoDoProduto = preco;
    } // fim if
} // fim função

// cria a função get preço
int Fatura::getPreco()
{
    return precoDoProduto;
} // fim getPreco

// função para calcular o preço a pagar
int Fatura::getValorTotal( int quantidade, int preco )
{
    // retorna o valor a pagar
    return quantidade * preco;
} // fim função get valor total
