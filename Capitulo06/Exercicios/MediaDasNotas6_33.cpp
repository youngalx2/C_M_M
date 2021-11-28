/*
    6.33 Escreva uma função qualityPoints que insere a média de um aluno e retorna 4
    se a média do aluno for 90–100, 3 se a média for 80–89,  2 se a média for 70–79,
    1 se a média for 60–69 e 0 se a média for mais baixa que 60.
    Deitel, Harvey; Paul, Harvey. C++ Como Programar (p. 244). Edição do Kindle.
    Autor: Pedro Filho, 19/09/2021
*/

// incluir biblioteca
#include <iostream> // para cout e cin
#include <locale> // para setlocale
#include <iomanip> // para setw, fixed, setprecision

using namespace std;

// protótipo
float mediaDasNotas( float nota );

// função principal
int main()
{
    // localização geográfica
    setlocale( LC_ALL, "portuguese");

    // limpa a tela
    system("cls");

    // variável
    float media;
    float resultado;

    // cabeçalho
    cout << "MÉDIA DAS NOTAS" << endl;

    // entrada de dados
    cout << "Digite a média do aluno: ";
    cin >> media;

    // configura a saida dos valores
    cout << fixed << setprecision( 1 ) << endl;

    // resultado recebe o valor retornado da função
    resultado = mediaDasNotas( media * 10 );

    // se resultado igual a 4
    if( resultado == 4 )
        cout << "Nota A" << endl;
    else if ( resultado == 3 )
        cout << "Nota B" << endl;
    else if( resultado == 2 )
        cout << "Nota C" << endl;
    else if( resultado == 1 )
        cout << "Nota D" << endl;
    else
        cout << "Reprovado" << endl;

    // pula linha
    cout << endl;

    system("pause"); // pausa do programa

    return 0; // programa terminado com sucesso

} // fim main

// cria a função mediaDasNotas
float mediaDasNotas( float nota )
{
    // se nota maior ou igual a 90 e menor ou igua a 100
    if( nota >= 90 && nota <= 100 )
        // retorne 4
        return 4;
    else if( nota >= 80 && nota <= 89 )
        // retorne 3
        return 3;
    else if( nota >= 70 && nota <= 79 )
        // retorne 2
        return 2;
    else if( nota >= 60 && nota <= 69 )
        // retorne 1
        return 1;
    else if ( nota < 60 )
        // retorne 0
        return 0;
    else
        cout << "Valor indevido!" << endl;
} // fim função
