/*
    4.19 Utilizando uma abordagem semelhante àquela do Exercício 4.17,
    identifique os dois maiores valores entre os dez números. [Nota: Cada  número
    deve ser inserido apenas uma vez.]
    Deitel, Harvey; Paul, Harvey. C++ Como Programar (p. 135). Edição do Kindle.
    Autor: Pedro Filho, 07/08/2021
*/

#include <iostream>
#include <locale>

using namespace std;

int main()
{
    // limpa a tela
    system("cls");

    // localização geográfica
    setlocale( LC_ALL, "portuguese");

    // variáveis
    int contador = 1; // contador do while
    int numero = 0; // para valores do usuário
    int primeiroMaior = 0; // seleciona o primieiro maior valor
    int segundoMaior = 0; // seleciona o segundo maior valor

    // enquanto contador menor ou igual a 10 faça
    while( contador <= 10 )
    {
        // entrada de dados
        cout << "Entre com o " << contador << "º valor: ";
        cin >> numero; // aguarda a entrada do usuário

        // se contador igual a 1 faça
        if( contador == 1 )
        {
            primeiroMaior = numero; // primeiro maior recebe o número
            segundoMaior = numero; // segundo maior recebe o número
        } // fim if
        // se não
        else
        {
            // se número maior que o primeiro maior
            if( numero > primeiroMaior )
            {
                primeiroMaior = numero; // primeiro maior recebe o número
            } // fim if
        } // fim else

        // se número maior que primrieo maior
        if( numero < primeiroMaior )
            // e número maior que segundo maior
            if( numero > segundoMaior )
                // segundo maior recebe o número
                segundoMaior = numero;

        // incrementa o contador
        contador++;

    } // fim while

    // mostra resultado
    cout << "\nPrimeiro maior é " << primeiroMaior << "\nSegundo maior é " << segundoMaior << endl;

    return 0; // fim programa

} // fim main
