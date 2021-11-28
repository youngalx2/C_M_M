/*
    6.35 (Computadores na educação) Os computadores estão desempenhando
    um papel crescente na educação. Escreva um programa que ajuda  um aluno
    da escola primária a aprender multiplicação. Utilize rand para produzir dois inteiros
    a partir de um algarismo positivo. Então  ele deve digitar uma pergunta como
    Quanto é 6 vezes 7?  Em seguida, o aluno digita a resposta. Seu programa verifica
    a resposta do aluno. Se estiver correto, imprima “Muito bem!” e então  faça outra
    pergunta de multiplicação. Se a resposta estiver errada, imprima “Não. Tente novamente.”
    e então deixe o aluno tentar  a mesma pergunta repetidamente até que, por fim,
    ele consiga acertar o número.
    Deitel, Harvey; Paul, Harvey. C++ Como Programar (p. 245). Edição do Kindle.
    Deitel, Harvey; Paul, Harvey. C++ Como Programar (p. 244). Edição do Kindle.
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
        } // fim while interno

        // se resposta igual ao produto
        if( resposta == -1 )
        {
            break; // fim do programa
        } // fim if

    } // fim primeiro while
} // fim função entrar com dados
