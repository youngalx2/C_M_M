/*
    3.12 (Classe Account) Crie uma classe chamada Account que um banco poderia
    utilizar para representar contas bancárias dos clientes. Sua  classe deve incluir um
    membro de dados de tipo int para representar o saldo da conta.
    [Nota: Nos capítulos subseqüentes, utilizaremos  números que contêm pontos
    de fração decimal (por exemplo, 2,75) — chamados valores de ponto flutuante —
    para representar quantias em dólar.] Sua classe deve fornecer um construtor que
    recebe um saldo inicial e o utiliza para inicializar o membro de dados.
    O construtor  deve validar o saldo inicial para assegurar que ele seja maior que ou
    igual a 0. Se não, o saldo deve ser configurado como 0 e o construtor deve exibir
    uma mensagem de erro, indicando que o saldo inicial era inválido.
    A classe deve fornecer três funções-membro. A funçãomembro credit deve adicionar
    uma quantia ao saldo atual. A função-membro debit deve retirar o dinheiro de Account
    e assegurar  que a quantia de débito não exceda o saldo de Account.
    Se exceder, o saldo deve permanecer inalterado e a função deve imprimir uma
    mensagem que indica “Debit amount exceeded account balance.”
    A função-membro getBalance deve retornar o saldo atual.  Crie um programa que cria
    dois objetos Account e testa as funções-membro da classe Account.
    Deitel, Harvey; Paul, Harvey. C++ Como Programar (p. 92). Edição do Kindle.
    Deitel, Harvey; Paul, Harvey. C++ Como Programar (p. 91). Edição do Kindle.
    Autor: Pedro Filho, 09/08/2021.
*/

#include <iostream>
#include "Conta.h"

using namespace std;

// cria o construtor da classe Conta
Conta::Conta( int saldo )
{
    setSaldo( saldo );
} // fim construtor

// função setSaldo para configurar o saldo
void Conta::setSaldo( int saldo )
{
    // se saldo maior ou igual a zero
    if( saldo >= 0 )
    {
        // saldo da conta recebe o valor do saldo
        saldoDaConta = saldo;
    } // fim if

    // se saldo menor que zero
    if( saldo < 0 )
    {
        // imprime
        cout << "Valor inválido" << endl;
    } // fim if
} // fim função

//  função getSaldo
int Conta::getSaldo()
{
    // retorne o valor do slado
    return saldoDaConta;
} // fim getSaldo

// cria a função crédito para conta
void Conta::creditoParaConta( int valor )
{
    // se valor maior que zero
    if( valor >= 0 )
    {
        // soma o valor ao saldo
        saldoDaConta += valor;
    } // fim if
} // fim função crédito para conta

// cria a função debito na conta
void Conta::debitoNaConta( int valor )
{
    // se o valor menor ou igual a saldoDaConta
    if( valor <= saldoDaConta )
    {
        // subitrai o valor do saldo da conta
        saldoDaConta -= valor;
    } // fim if

    // se o valor maior que o saldo da conta
    if( valor > saldoDaConta )
    {
        cout << "Valor Inválido!\n - valor que o saldo da conta." << endl;
    } // fim if
} // fim função debito em conta

// cria a função saldo atual
int Conta::saldoAtual()
{
    return saldoDaConta;
} // fim saldo atual
