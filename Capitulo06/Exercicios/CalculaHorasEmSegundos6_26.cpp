/*
    6.26 Escreva uma função que aceita a hora como três argumentos do tipo inteiro
    (horas, minutos e segundos) e retorna o número de segundos  desde a última
    vez que o relógio ‘deu 12’. Utilize essa função para calcular a quantidade de tempo
    em segundos entre duas horas, ambas  as quais estão dentro de um ciclo de 12 horas.
    Deitel, Harvey; Paul, Harvey. C++ Como Programar (p. 244). Edição do Kindle.
    Autor: Pedro Filho, 15/09/2021
*/

// incluir biblioteca
#include <iostream> // para cout e cin
#include <locale> // para setlocale
#include <iomanip> // para setw, fixed, setprecision

using namespace std;

// protótipo
int horasEmSegundos( int horas, int minutos, int segundos );

// função principal
int main()
{
    // localização geográfica
    setlocale( LC_ALL, "portuguese");

    // limpa a tela
    system("cls");

    // variáveis
    int horas = 0;
    int minutos;
    int segundos;
    int resposta = 0;
    int diferenca = 0;

    // enquanto resposta diferente de -1 faça
    while( resposta != -1 )
    {
        // entrada de dados
        cout << "Informe às horas atuais: ";
        cin >> horas;
        cout << "Informe os minutos: ";
        cin >> minutos;
        cout << "Informe os segundos: ";
        cin >> segundos;

        // chama a função horas em minutos
        diferenca = horasEmSegundos( horas, minutos, segundos );

        // mostra resultado
        cout << "De 12 horas até agora já se passaram " << diferenca << " segundos." << endl;

        // faz uma pergunta
        cout << "\nDeseja continuar (-1 para sair)? ";
        cin >> resposta;

    } // fim while

    // pula linha
    cout << endl;

    system("pause"); // pausa do programa

    return 0; // programa terminado com sucesso

} // fim main

// cria a função horasEmSegundos
int horasEmSegundos( int horas, int minutos, int segundos )
{
    int diferenca = 0;

    // se horas maior que 0 e menor que 12
    if( horas > 0 && horas < 12 )
    {
        // diferença recebe
        diferenca = ( horas * 3600 ) + (minutos * 60 ) + segundos;
    } // fim if
    else if( horas > 12 && horas < 24 )
    {
        // diferença recebe
        diferenca = ( ( horas - 12 ) * 3600 ) + (minutos * 60 ) + segundos;
    } // fim else if
    else
    {
        diferenca = ( minutos * 60 ) + segundos;
    } // fim else

    // retorne o valor da difrença
    return diferenca;

} // fim função horasEmSegundos
