/*
    3.14 (Classe Employee) Crie uma classe chamada Employee que inclua três
    partes de informações como membros de dados — um nome  (tipo string),
    um sobrenome (tipo string) e um salário mensal (tipo int). [Nota: Nos capítulos
    subseqüentes, utilizaremos números  que contêm pontos de fração decimal
    (por exemplo, 2,75) — chamados valores de ponto flutuante — para representar
    quantias em dólar.]  Sua classe deve ter um construtor que inicialize os três
    membros de dados. Forneça uma função set e uma função get para cada membro
    de dados. Se o salário mensal não for positivo, configure-o como 0.
    Escreva um programa de teste que demonstre as capacidades da classe  Employee.
    Crie dois objetos Employee e exiba o salário anual de cada objeto.
    Então dê a cada Employee um aumento de 10% e exiba  novamente o salário anual
    de cada Employee.
    Deitel, Harvey; Paul, Harvey. C++ Como Programar (p. 92). Edição do Kindle.
    Autor:
*/
#include <iostream>
#include <string>

#include "Empregado.h"

using namespace std;

Empregado::Empregado(string nome, string sobrenome, int salario )
{
    setNome(nome); // configura o nome
    setSobreNome( sobrenome); // configura o sobrenome
    setSalario( salario ); // configura o valor do salário
} // fim construtor

// cria a função para configurar o nome do Empregado
void Empregado::setNome(string nome )
{
    // se nome menor ou igual a 30 caracteres
    if( nome.length() <= 30)
        // variável recebe o nome
        nomeDoEmpregado = nome;
} // fim função setNome

// função getNome
string Empregado::getNome()
{
    return nomeDoEmpregado;
} // fim função getSobre

// cria a função setSobrenome
void Empregado::setSobreNome(string sobrenome)
{
    // se sobrenome menor ou igual a 25
    if( sobrenome.length() <= 25 )
        sobreNome = sobrenome;
} // fim função get

// função getSobreNome
string Empregado::getSobreNome()
{
    return sobreNome;
} // fim get

// função setsalario
void Empregado::setSalario( int sal )
{
    // se salário maior ou igual a zero
    if( sal >= 0 )
        salario = sal;
} // fim função get

// função get salário
int Empregado::getSalario()
{
    return salario;
} // fim função

// função getSalarioAnual( int salario )
int Empregado::salarioAnual( int salario )
{
    return salario * 12;
} // fim salario anual
