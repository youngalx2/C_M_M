/*
    1// Figura 4.17: Analysis.cpp
    2// Definições de função-membro para a classe Analysis que
    3// analisa os resultados dos testes
    Deitel, Harvey; Paul, Harvey. C++ Como Programar (p. 119). Edição do Kindle.
    Autor:
*/

#include <iostream>
#include <locale>
#include "Analysis.h"

using namespace std;

// cria a função examina o resultado
void Analysis::examinaResultado()
{
    // inicializa variáveis na declaração
    int aprovados = 0; // número de aprovador
    int reprovados = 0; // número de reprovados
    int contarEstudantes = 1; // conta o números de estudantes
    int resposta;  // recebe a resposta do usuário

    // cabeçalho
    cout << "APROVADOS ou REPROVADOS" << endl;

    // loop que processa 10 estudantes controlado por contador
    while( contarEstudantes <= 10)
    {
        // entrada de dados
        cout << "Entre com o resultado (1 = aprovado 2 = reprovado): ";
        cin >> resposta;

        // verificar se resposta == 1
        if( resposta == 1 )
        {
            // e passado recebe 1
            aprovados = aprovados + 1;
        } // fim if
        else // se não
        {
            // reprovados
            reprovados = reprovados + 1;
        } // reproados

        contarEstudantes = contarEstudantes + 1;

    } // fim while

    // mostra resultado
    cout << "\nAprovados = " << aprovados << "\nReprovados = " << reprovados << endl;

    // se aprovados maior que 8
    if( aprovados > 8 )
    {
        // imprima
        cout << "O professor merece um bônus." << endl;
    } // fim if

} // fim lasse
