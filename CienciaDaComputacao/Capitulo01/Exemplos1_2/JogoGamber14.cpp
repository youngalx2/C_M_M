/*
    aposta | valor da aposta
    objetivo | quanto quer ganhar
    ensaios | tentativas
    apostas | contagem de aposta
    vitórias | contagem de vitórias
    dinheiro | dinheiro na mão

    Este programa usa três argumentos de linha de comando inteiros, estaca,
    objetivo e tentativas. O loop while interno neste programa simula um jogador
    com $ staca que faz uma série de apostas de $ 1, continuando até quebrar
    ou atingir $ goal. O tempo de execução deste programa é proporcional
    às tentativas vezes o número médio de apostas. Por exemplo, o terceiro
    comando abaixo faz com que quase 100 milhões de números aleatórios sejam gerados.
    Sedgewick, Robert; Wayne, Kevin. Computer Science (p. 71).
    Pearson Education. Edição do Kindle.
    15/11/2021
*/

#include <iostream>
#include <locale>
#include <cstdlib>
#include <ctime>
using namespace std;

// função principal
int main()
{
    // localização geográfica
    setlocale( LC_ALL, "portuguese");

    // limpa a tela
    system("cls");

    cout << "PROBABILIDADE DE VITÓRIA NO JOGO" << endl;

    // Execute experimentos de teste que começam com
    // $ aposta e termina em $ 0 ou $ objetivo.
    int valorDaAposta = 0;
    int quantoQuerGanhar = 0;
    int tentativas = 0;

    // entrada de dados
    cout << "Quanto vai apostar R$ ";
    cin >> valorDaAposta;
    cout << "Qual valor pretende ganhar ( valor > aposta ): R$ ";
    cin >> quantoQuerGanhar;
    cout << "Em quantas tentativas: ";
    cin >> tentativas;

    int aposta = 0;
    int vitoria = 0;

    srand( time( 0 ) ); // semente do aleatório

    // loop for repete x tentativas
    for(int t = 0; t < tentativas; t ++)
    {
        int dinheiro = valorDaAposta;

        // enquanto o dinheiro maior que zero e menor que quanto quer ganhar faça
        while( dinheiro > 0 && dinheiro < quantoQuerGanhar )
        {
            aposta++; //  você aposta R$ 1,00

            // se número sorteado for menor que 0,5
            if( rand() % 2 < 0.5 ) // se verdade
                dinheiro++; // você ganha R$ 1,00
            else // se falso
                dinheiro--; // você perde R$ 1,00

        } // fim while

        // se o dinheiro igual ao valor que quer ganhar
        if( dinheiro == quantoQuerGanhar ) // se verdade
            vitoria++; // você recebe 1 ponto na vitória

    } // fim for

    // imprime o resultado
    cout << "\nCom essa quantidade de tentativas você tem:\n\t"
            << 100 * vitoria / tentativas << "% de chances vitórias." << endl;
    cout << "\tEm " << aposta / tentativas << " tentativas " << endl;
    cout << endl; // pula uma  linha

    system("pause"); // pausa do programa

    return 0; // programa terminado com sucesso

} // fim main
