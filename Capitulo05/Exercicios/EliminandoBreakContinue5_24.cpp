/*
    5.25 Uma crítica às instruções break e continue é que elas não são instruções
    estruturadas. De fato, elas podem ser sempre substituídas por  instruções
    estruturadas, embora possa ser inconveniente fazer isso. Descreva de maneira
    geral como você removeria qualquer instrução  break de um loop em um programa
    e a substituiria por alguma equivalente estruturada. [Dica: A instrução break deixa
    um loop a partir  de dentro do corpo do loop. Outra maneira de deixar é fazendo
    falhar o teste de continuação do loop. Considere a possibilidade de utilizar
    no teste de continuação do loop um segundo teste que indica ‘saída prévia por
    causa de uma condição ‘break’’.] Utilize a técnica que você  desenvolveu aqui para
    remover a instrução break do programa da Figura 5.13.
    Deitel, Harvey; Paul, Harvey. C++ Como Programar (p. 180). Edição do Kindle.
    Deitel, Harvey; Paul, Harvey. C++ Como Programar (p. 179). Edição do Kindle.
    Autor: Pedro Filho 01/09/2021
*/

// incluir biblioteca
#include <iostream>
#include <locale>
#include <iomanip>

using namespace std;

// função principal
int main()
{
    // localização geográfica
    setlocale( LC_ALL, "portuguese");

    // limpa a tela
    system("cls");

    // cabeçalho
    cout << "\nEliminando o uso de <break>" << endl;

    // ELIMINANDO O USO DO <BREAK>
    // loop for para teste ( sair do for sem usar <break> )
    for( int i = 1; i <= 10; i++ )
    {
        // imprime
        cout << i << "\taaaaaaa" << endl;

        // condição
        // se i igual a 4
        if( i == 4 )
            // sai do loop for
            // break;

            // i recebe o valor 10
            i = 10; // sai do loop sem usar o break

    } // fim for

    // cabeçalho
    cout << "\nEliminando o uso de <continue>"  << endl;

    // ELIMINANDO O USO DO <CONTINUE>
    // loop for para mostrar a não utilização do <continue>
    for( int i = 1; i <= 10; i++ )
    {
        // condição
        // se i igual a 5
        if( i == 5 )
            // usando continue
            // continue;
            i = 6; // i recebe um número posterior ao 5

        // imprima
        cout << i << "\taaaaaaaaaaa" << endl;

    } // fim for continue

    // pula linha
    cout << endl;

    system("pause"); // pausa do programa

    return 0; // programa terminado com sucesso

} // fim main
