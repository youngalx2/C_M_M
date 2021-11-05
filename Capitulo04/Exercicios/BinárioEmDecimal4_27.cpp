/*
    4.27 Insira um inteiro contendo somente 0s e 1s (isto é, um inteiro ‘binário’)
    e imprima seu equivalente decimal. Utilize os operadores de módulo  e divisão
    para pegar os dígitos do número ‘binário’ um de cada vez da direita para a esquerda.
    De modo muito semelhante ao sistema de  números decimais, em que o dígito mais
    à direita tem um valor posicional de 1, o próximo dígito à esquerda tem um valor
    posicional de  10, depois 100, depois 1.000 e assim por diante, no sistema de números
    binários o dígito mais à direita tem um valor posicional de 1, o  próximo dígito à esquerda
    tem um valor posicional de 2, depois 4, depois 8 e assim por diante.
    Assim, o número decimal 234 pode ser  interpretado como 2 * 100 + 3 * 10 + 4 * 1.
    O equivalente decimal do binário 1101 é 1 * 1 + 0 * 2 + 1 * 4 + 1 * 8 ou 1 + 0 + 4 + 8, ou
    13. [Nota: Recomendamos que leitor não familiarizado com números binários consulte
    o Apêndice D.]
    Deitel, Harvey; Paul, Harvey. C++ Como Programar (p. 138). Edição do Kindle.
    Autor: Pedro Filho, 19/08/2021
*/

// incluir biblioteca
#include <iostream>
#include <locale>

using namespace std;

// função principal
int main()
{
    // localização geográfica
    setlocale( LC_ALL, "portuguese");

    // limpa a tela
    system("cls");


    system("pause"); // pausa do programa

    return 0; // programa terminado com sucesso

} // fim main
