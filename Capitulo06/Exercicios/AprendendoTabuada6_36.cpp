/*
    6.36 (Instrução auxiliada por computador) O uso de computadores no ensino
    é referido como instrução auxiliada por computador (computerassisted instruction – CAI).
    Um problema que se desenvolve em ambientes CAI é a fadiga do aluno. Isso pode ser
    eliminado variando  o diálogo do computador para prender a atenção do aluno.
    Modifique o programa do Exercício 6.35 de modo que os vários comentários  sejam
    impressos para cada resposta correta e cada resposta incorreta como segue:
    Réplicas para uma resposta correta:  Muito bom!  Excelente!  Bom trabalho!  Continue assim!
    Deitel, Harvey; Paul, Harvey. C++ Como Programar (p. 245). Edição do Kindle.
    Autor: Pedro, 20/09/2021
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

            // se resposta igual ao produto
            if( resposta == -1 )
            {
                break; // fim do programa
            } // fim if

            // calcular os valores
            produto = num1 * num2;

            // se resposta igual ao produto
            if( resposta == produto ) // se verdade
                // chama a função mensagem para acertos
                mensagemParaAcerto();
            else // se não
                // chama a função mensagem para erros
                mensagemParaErros();

        } // fim while interno

        // se resposta igual ao produto
        if( resposta == -1 )
        {
            break; // fim do programa
        } // fim if

    } // fim primeiro while
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
