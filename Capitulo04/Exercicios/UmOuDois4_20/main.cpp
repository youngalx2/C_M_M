/*
    4.20 O programa de resultados de teste da Figura 4.16–Figura 4.18 supõe que
    qualquer valor inserido pelo usuário que não for 1 deve ser 2.
    Modifique o aplicativo para
    Deitel, Harvey; Paul, Harvey. C++ Como Programar (p. 136). Edição do Kindle.
    Autor: Pedro Filho, 17/08/2021
*/

#include <iostream>
#include <locale>

using namespace std;

int main()
{
    // localizador geográfico
    setlocale(LC_ALL, "portuguese");

    // limpa a tela
    system("cls");

    // cria variáveis
    int numero = 0;
    int contador = 1;
    int aprovados = 0;
    int reprovados = 0;

    // enquanto contador menor ou igual a 10 faça
    while( contador <= 10)
    {
        // entrada de dados
        cout << contador << "º Digite 1 para aprovado ou 2 para reprovado: ";
        cin >> numero; // aguarda entrada do usuário

        // se numero igual a 1
        if( numero == 1 )
            aprovados++; // incrementa aprovados

        if( numero == 2 ) // se número igual a 2
            reprovados++; // incrementa reprovados

        // incrementa contador
        contador++;

        if( contador > 1 ) // se contador maior que 1
            if( numero < 1 ) // e numero menor que 1
                contador--; // decrementa contador

        if( contador > 1 ) // se contador maior que 1
            if( numero > 2 ) // e numero maior que 2
                contador--; // decrementa contador

        if( contador == 1) // se contador igual a 1
            if( numero < 1 ) // e numero menor que 1
                contador = 0; // contador recebe zero

        if( contador == 1) // se contador igual a 1
            if( numero > 2 ) // e numero maior que 2
                    contador = 0; // contador recebe zero

    } // fim while contador

    // mostra resultado
    cout << "\nForam cadastrados " << contador - 1 << " Alunos." << endl;
    cout << "Aprovados: " << aprovados << "\nReprovados: " << reprovados << endl;

    // pausa o programa
    system("pause");

    // fim do programa
    return 0;
} // fim main
