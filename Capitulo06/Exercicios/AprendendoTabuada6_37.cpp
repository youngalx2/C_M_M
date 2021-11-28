/*
    6.37 Sistemas mais sofisticados de instrução auxiliada por computador monitoram
    o desempenho do aluno durante um período de tempo.  A decisão de iniciar um
    novo tópico é freqüentemente baseada no sucesso do aluno com tópicos anteriores.
    Modifique o programa do  Exercício 6.36 para contar o número de respostas
    corretas e incorretas digitadas pelo aluno. Depois que o aluno digitar 10 respostas,
    seu  programa deve calcular a porcentagem de respostas corretas. Se a porcentagem
    for menor que 75%, seu programa deve imprimir
    “Peça  ao seu professor uma ajuda extra” e terminar.
    Deitel, Harvey; Paul, Harvey. C++ Como Programar (p. 245). Edição do Kindle.
    Autor: Pedro Filho, 20/09/2021
*/

// incluir biblioteca
#include <iostream> // para cout e cin
#include <locale> // para setlocale
#include <iomanip> // para setw, fixed, setprecision
#include <ctime>

using namespace std;

// protótipos
int geraUmAleatorio(); // números aleatório entre 1 e 10
void entrarComDados();
void mensagemParaAcerto(); // para respostas certas
void mensagemParaErros(); // para respostas erradas
void acertosErros( int jogadas, int acertos, int erros ); // mostra o resumo

// função principal
int main()
{
    // localização geográfica
    setlocale( LC_ALL, "portuguese");

    // limpa a tela
    system("cls");

    //gerador
    srand( time( NULL ) );

    // cabeçalho
    cout << "APRENDENDO TABUADA" << endl;

    // Chama a função entrar com dados
    entrarComDados();

    // pula linha
    cout << endl;

    system("pause"); // pausa do programa

    return 0; // programa terminado com sucesso

} // fim main

// cria a função primeiroAleatorio
int geraUmAleatorio()
{
    // variável recebe valor aleatório
    int alea = 1 + rand() % 10;
    // retorne o valor
    return alea;

} // fim função

// entrada de dados
void entrarComDados()
{
    // variável
    int resposta = 0, produto = 1;
    int contaAcertos = 0;
    int contaErros = 0;
    int contaJogadas = 0;

    // enquanto resposta diferente de -1
    while( resposta != -1 )
    {
        // variáveis
        int num1 = geraUmAleatorio();
        int num2 = geraUmAleatorio();
        int resposta = 0, produto = 1;

        // enquanto resposta diferente de produto
        while( resposta != produto )
        {
            // entrada de dados
            cout << "Quanto é (-1 = sair): " <<  num1 << " x " << num2 << " = ";
            cin >> resposta;

            // conta as jogadas
            contaJogadas += 1;

            // se resposta igual ao produto
            if( resposta == -1 )
            {
                --contaJogadas;
                break; // fim do programa
            } // fim if

            // calcular os valores
            produto = num1 * num2;

            // se resposta igual ao produto
            if( resposta == produto ) // se
            {
                // chama a função mensagem para acertos
                mensagemParaAcerto();
                // conta os acertos
                ++contaAcertos;
            } // fim if
            else // se não
            {
                // chama a função mensagem para erros
                mensagemParaErros();
                // conta os erros
                ++contaErros;
            } // fim else

            // se contaJogadas igual a 10
            if( contaJogadas >= 10 )
                break; // sair do programa

        } // fim while interno

        // se resposta igual ao produto
        if( resposta == -1 )
        {
            break; // fim do programa
        } // fim if

        // se contaJogadas igual a 10
        if( contaJogadas >= 10 )
            break; // sair do programa
    } // fim primeiro while

    // chama afunção acertos e erros
    acertosErros( contaJogadas, contaAcertos, contaErros );

} // fim função entrar com dados

// cria a função mensagemParaAcerto
void mensagemParaAcerto()
{
    // variáveis
    int alea = 1 + rand() % 5;

    // switch
    switch( alea )
    {
        case 1:
            cout << "Muito bom!" << endl;
            break;
        case 2:
            cout << "Excelente!" << endl;
            break;
        case 3:
            cout << "Bom trabalho!" << endl;
            break;
        case 4:
            cout << "Continue assim!" << endl;
            break;
    } // fim switch
} // fim função mensagem boa

// cria a função mensagemParaErros
void mensagemParaErros()
{
    // variáveis
    int alea = 1 + rand() % 5;

    // switch
    switch( alea )
    {
        case 1:
            cout << "Não.   Tente novamente." << endl;
            break;
        case 2:
            cout << "Errado.    Tente mais uma vez." << endl;
            break;
        case 3:
            cout << "Não desista!" << endl;
            break;
        case 4:
            cout << "Não.   Continue tentando." << endl;
            break;
    } // fim switch
} // fim função mensagem errada

// cria a função acertosErros
void acertosErros( int jogadas, int acertos, int erros )
{
    // mostra resultado
    cout << "\nVocê jogou " << jogadas << " vezes." << endl;
    cout << "Acertou " << acertos << "\nErrou " << erros << endl;

    // se acertos menor ou igual a 8
    if( acertos >= 8 )
        cout << "Parabéns! você está pronto para o próximo nível."  << endl;
    else
        cout << "Você acertou menos de 80 % das questões."
                << "\nPeça ajuda a seu professor." << endl;
} // fim função mostra resultado
