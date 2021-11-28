/*
    6.39 Modifique o programa do Exercício 6.38 para contar o número de suposições
    que o jogador faz. Se o número for 10 ou menor, imprima  “Você sabe o segredo
    ou teve sorte!”. Se o jogador adivinhar o número em 10 tentativas, então imprima
    “Ahah! Você sabe  o segredo!”. Se o jogador fizer mais de 10 suposições, imprima
    “Você deveria ser capaz de fazer melhor!”. Por que não  deve haver mais de 10 suposições? Bem, a cada ‘boa suposição’ o jogador deve ser capaz de eliminar metade dos números. Agora mostre  por que qualquer número de 1 a 1.000 pode ser adivinhado em 10 ou menos tentativas.
    Deitel, Harvey; Paul, Harvey. C++ Como Programar (p. 245). Edição do Kindle.
    Autor: Pedro Filho, 21/09/2021
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
void tentativasDeAcertos( int tentativas );

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
    int tentativas = 0;
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

        // contar o número de tentativas
        tentativas += 1;

        // resposta recebe o valor da função gera números aleatórios
        resposta = geraNumeroAleatorio();

        // enquanto número diferente de resposta faça
        while( numero != resposta )
        {
            // chama afunção avaliaResposta
            numero = avaliaResposta( numero, resposta );
            // soma o número de tentativas
            tentativas += 1;
        } // fim while interno

        // se o número digitado igual a resposta
        if( numero == resposta )
        {
            // imprima
            cout << "Excelente! Você adivinhou que eu gerei " << resposta
                    << " em " << tentativas << " tentativas." << endl;

            // chama a função tentativas de acerto
            tentativasDeAcertos( tentativas );

        } // fim if

        // pergunta se deseja continuar
        cout << "Deseja continuar s / n: ";
        cin >> simOuNao;

        // se simOuNao igual a n
        if( simOuNao == 'n' || simOuNao == 'N' )
            break; // saia do programa
        else
        {
            system("cls"); // limpa a tela
            tentativas = 0; // reinicializa o número de tentativas
        } // fim else

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
        cout << "Número alto. Tente um mais baixo. ";
        cin >> numero;
    } // fim else if
    else if( numero < resposta )
    {
        cout << "Número baixo. Tente um mais alto. ";
        cin >> numero;
    } // fim segundo else if

    // retorne o número
    return numero;

} // fim função avaliaResposta

// cria a função tentativasDeAcertos
void tentativasDeAcertos( int tentativas )
{
    // se tentativas menor ou igual a 10
    if( tentativas < 10 )
    {
        // imprima
        cout << "Você sabe o segredo ou teve sorte!" << endl;
    } // fim if
    // se não
    else if( tentativas == 10 )
    {
        // imprima
        cout << "Ahah! Você sabe o segredo!" << endl;
    } // fim else if
    // se não
    else if( tentativas > 10 )
        // imprima
        cout << "Você deveria ser capaz de fazer bem melhor!" << endl;

} // fim função tentativasDeAcertos
