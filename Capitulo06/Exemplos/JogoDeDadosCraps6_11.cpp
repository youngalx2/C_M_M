/*
    1// Figura 6.11: fig06_11.cpp
    2// Simulação do jogo de dados craps.
    Deitel, Harvey; Paul, Harvey. C++ Como Programar (p. 197). Edição do Kindle.
*/

// incluir biblioteca
#include <iostream> // padrão cout,cin
#include <locale> // para setlocale
#include <iomanip> // para setw, fixed e setprecision
#include <cstdlib> // para srand e rand
#include <ctime> // para time que vai ser usado com srand( time( 0 ) )

using namespace std;

// protótipo de função
// diz ao compilador que essa função vai existir
int rollDice();

// função principal
int main()
{
    // localização geográfica
    setlocale( LC_ALL, "portuguese");

    // limpa a tela
    system("cls");

    // Enumeração constantes que representam o status do jogo
    enum Status { CONTINUE, WON, LOST };

    // variável
    int myPoint; // pontos que serão usados quando vencer ou perder na primeira jogada
    Status gameStatus; // pode conter CONTINUE, WON e LOST

    // torna aleatório o gerador de números aleatório usando a hora atual
    srand( time( 0 ) );

    // chama a função rollDice e atribui a variável na primeira rolagem dos dados
    int sumOfDice = rollDice();

    // determina o status e apontuação do jogo (se necessário )
    // com base no primeiro lançamento
    switch( sumOfDice )
    {
        case 7: // ganha se sair na primeira jogada
        case 11: // ganha se sair na primeira jogada
            gameStatus = WON; // você venceu
            break; // sai do switch

        case 2: // perde se sair na primeira jogada
        case 3: // perde se sair na primeira jogada
        case 12: // idem
            gameStatus = LOST;
            break;

        default: // não ganha nem prede, mas registra a pontuação
            myPoint = rollDice(); // chama a função rola dados e atribui a variável meus pontos
            gameStatus = CONTINUE;
            // imprime os pontos
            cout << "Meus pontos são: " << myPoint << endl;
            break; // opicional, mas necessário
    } // fim switch

    //enquanto o jogo não estiver completo
    while ( gameStatus == CONTINUE ) // você nem venceu, nem perdeu
    {
        sumOfDice = rollDice(); // chama a função e atribui a variável

        // determina o status do jogo
        if( sumOfDice == myPoint )
        {
            gameStatus = WON; // venceu
        } // fim if
        // se não
        else
        {
            // se o status do jogo  for igual a sete
            if( sumOfDice == 7 )
                // você perdeu
                gameStatus = LOST; // perdeu
        } // fim else
    } // fim while

    // verifica a reposta de status do jogo
    if( gameStatus == WON )
    {
        cout << "Você venceu!" << endl;
    } // fim if
    else
    {
        cout << "Você perdeu!" << endl;
    } // fim else

    // pula linha
    cout << endl;

    system("pause"); // pausa do programa

    return 0; // programa terminado com sucesso

} // fim main

// cria a função rola dados
int rollDice()
{
    // dado 1 recebe valor aleatório
    int dado1 = 1 + rand() % 6;

    // dado 2 recebe um valor aleatório
    int dado2 = 1 + rand() % 6;

    // soma os valores dos dados
    int sum = dado1 + dado2;

    // imprime
    cout << "Jogador rolou " << dado1 << " + " << dado2 << " = " << sum << endl;

    // retorna o valor da soma
    return sum;

} // fim função rola dados
