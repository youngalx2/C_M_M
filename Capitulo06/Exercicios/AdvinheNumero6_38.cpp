/*
    6.38 (Jogo ‘Adivinhe o número’) Escreva um programa que joga ‘adivinhe o número’
    como mostrado a seguir: Seu programa escolhe o número  a ser adivinhado selecionando
    um inteiro aleatoriamente no intervalo de 1 a 1.000. O programa então exibe o seguinte:
    Tenho um número entre 1 e 1000. Você consegue adivinhá-lo?
    Digite sua primeira suposição.  O jogador então digita uma primeira suposição.
    O programa responde com uma das seguintes frases:
    1. Excelente! Você adivinhou o número!
    Quer jogar de novo (s ou n)?
    2. Muito baixo. Tente novamente.
    3. Muito alto. Tente novamente.
    Se a suposição do jogador estiver incorreta, o programa deve fazer um loop até
    o jogador por fim acertar o número. Seu programa deve  continuar dizendo ao jogador
    Muito alto ou Muito baixo para ajudar o jogador a acertar a resposta.
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
int geraNumeroAleatorio();
int avaliaResposta( int numero, int resposta );

// função principal
int main()
{
    // localização geográfica
    setlocale( LC_ALL, "portuguese");

    // limpa a tela
    system("cls");

    // variáveis
    int numero = 1;
    int resposta;
    char simOuNao = ' ';

    // enquanto número diferente de zero
    while( numero != 0 )
    {
        // gerador
        srand( time( NULL ) );

        // entrada de dados
        cout << "Tenho um número entre 1 e 1000" << endl;
        cout << "Você consegue advinhar?"
                << "\nDiga sua primeira suposição: ";
        cin >> numero;

        // resposta recebe o valor da função gera números aleatórios
        resposta = geraNumeroAleatorio();

        // enquanto número diferente de resposta faça
        while( numero != resposta )
        {
            // chama afunção avaliaResposta
            numero = avaliaResposta( numero, resposta );
        } // fim while interno

        // se o número digitado igual a resposta
        if( numero == resposta )
        {
            // imprima
            cout << "Excelente! Você adivinhou que eu gerei " << resposta << endl;
        } // fim if

        // pergunta se deseja continuar
        cout << "Deseja continuar s / n: ";
        cin >> simOuNao;

        // se simOuNao igual a n
        if( simOuNao == 'n' || simOuNao == 'N' )
            break; // saia do programa
        else
            system("cls"); // limpa a tela

    } // fim while externo

    // pula linha
    cout << endl;

    system("pause"); // pausa do programa

    return 0; // programa terminado com sucesso

} // fim main

// função geraNumeroAleatorio
int geraNumeroAleatorio()
{
    int alea = 1 + rand() % 1000;
    // retorne alea
    return alea;
} // fim função geraNumeroAleatorio

// cria a função avaliaResposta
int avaliaResposta( int numero, int resposta )
{
    if( numero > resposta )
    {
        cout << "Digite um número menor: ";
        cin >> numero;
    } // fim else if
    else if( numero < resposta )
    {
        cout << "Digite um número maior: ";
        cin >> numero;
    } // fim segundo else if

    // retorne o número
    return numero;

} // fim função avaliaResposta
