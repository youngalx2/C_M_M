/*
    5.20 (Triplos de Pitágoras) Um triângulo retângulo pode ter lados que são todos inteiros.
    Um conjunto de três valores inteiros para os lados de  um triângulo retângulo é chamado
    de triplo de Pitágoras. Esses três lados devem satisfazer o relacionamento de que a soma
    dos quadrados de dois dos lados seja igual ao quadrado da hipotenusa. Localize todos os
    triplos de Pitágoras para side1, side2 e hypotenuse,  todos não maiores que 500.
    Utilize um loop for triplamente aninhado que tente todas as possibilidades.
    Esse é um exemplo de computação  baseada na força bruta. Você aprenderá em cursos
    mais avançados de ciência da computação que há muitos problemas interessantes para  os
    quais não há nenhuma abordagem algorítmica conhecida diferente da pura força bruta.
    Deitel, Harvey; Paul, Harvey. C++ Como Programar (p. 179). Edição do Kindle.
    Autor: Pedro Filho, 30/08/2021
*/

// incluir biblioteca
#include <iostream>
#include <locale>
#include <iomanip>
#include <cmath>

using namespace std;

// função principal
int main()
{
    // localização geográfica
    setlocale( LC_ALL, "portuguese");

    // limpa a tela
    system("cls");

    // cria variáveis
    int ladoA;
    int ladoB;
    int hipotenusa;
    int triangulo = 0;

    // cabeçalho
    cout << setw(24) << "TRIPLOS DE PITÁGORAS" << endl;

    //TÉCNICA DA FORÇA BRUTA
    // loop para força bruta
    // primrier loop lado a
    for( ladoA = 1; ladoA <= 500; ladoA++ )
    {
        // loop for para o ladoB
        for( ladoB = 1; ladoB <= 500; ladoB++ )
        {
            // loop for para a hipotenusa
            for( hipotenusa = 1; hipotenusa <= 500; hipotenusa++ )
            {
                // se o quadrado de a mais o quadrado de b igual a hipotenusa
                // então pode ser um triângulo retângulo
                if( ( pow(ladoA, 2) + pow( ladoB, 2) ) == ( pow(hipotenusa, 2) ) )
                {
                    // imprime os valores para formar triângulo retângulo
                    cout << setw( 5 ) << ladoA
                            << setw( 5 ) << " + "
                            << setw( 5 ) << ladoB
                            << setw( 5 ) << " = "
                            << setw( 5 ) << hipotenusa << endl;
                } // fim if

            } // fim for hipotenusa
        } // fim for ladoB
    } // fim for ladoA

    // pula linha
    cout << endl;

    system("pause"); // pausa do programa

    return 0; // programa terminado com sucesso

} // fim main
