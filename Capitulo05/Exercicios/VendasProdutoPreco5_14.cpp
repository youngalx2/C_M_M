/*
    5.14 Uma empresa de pedidos pelo correio vende cinco produtos diferentes
    cujos preços de varejo são:
    produto 1 — $2,98,
    produto 2 — $4,50,
    produto 3 — $9,98,
    produto 4 — $4,49 e
    produto 5 — $6,87.
    Escreva um programa que lê uma série de pares de números como mostrado  a seguir:
    a) número de produto
    b) quantidade vendida
    Seu programa deve utilizar uma instrução switch para determinar o preço de varejo
    de cada produto. Seu programa deve calcular e exibir  o valor de varejo total de todos
    os produtos vendidos. Utilize um loop controlado por sentinela para determinar quando
    o programa deve  parar o loop e exibir os resultados finais.
    Deitel, Harvey; Paul, Harvey. C++ Como Programar (p. 178). Edição do Kindle.
    Autor: Pedro Filho, 29/08/2021
*/

// incluir biblioteca
#include <iostream>
#include <locale>
#include <iomanip> // para setw, setprecision

using namespace std;

// função principal
int main()
{
    // localização geográfica
    setlocale( LC_ALL, "portuguese");

    // limpa a tela
    system("cls");

    // variáveis
    int produto = 0;
    int quantidadeVendida = 0;
    float valor1  = 0;
    float valor2  = 0;
    float valor3  = 0;
    float valor4  = 0;
    float valor5  = 0;
    float totalVendido = 0;

    // cabeçalho
    cout << "\t\tTABELA DE VENDAS" << endl;

    // tabela de preço Menu
    cout << "\t****************************" << endl;
    cout << "\t* Produto            Valor *" << endl;
    cout << "\t****************************" << endl;
    cout << "\t*  01               R$2,98 *" << endl;
    cout << "\t*  02               R$4,50 *" << endl;
    cout << "\t*  03               R$9,98 *" << endl;
    cout << "\t*  04               R$4,45 *" << endl;
    cout << "\t*  05               R$6,87 *" << endl;
    cout << "\t****************************" << endl;

    // entrada de dados
    cout << "Informe o número do produto ( -1 = sair ): ";
    cin >> produto;

    // enquanto o produto diferente de -1 faça
    while( produto != -1 )
    {
        cout << "Informe a quantidade vendida: ";
        cin >> quantidadeVendida;

        // tomada
        switch( produto )
        {
            case 1:
                valor1 += ( quantidadeVendida * 2.98 );
                break;

            case 2:
                valor2 += ( quantidadeVendida * 4.50 );
                break;

            case 3:
                valor3 += ( quantidadeVendida * 9.98 );
                break;

            case 4:
                valor4 += ( quantidadeVendida * 4.49 );
                break;

            case 5:
                valor5 += ( quantidadeVendida * 6.87 );
                break;

            default:
                cout << "Valor errado!" << endl;
                break;
        } // fim switch

        // entrada de dados
        cout << "Informe o número do produto ( -1 = sair ): ";
        cin >> produto;

    } // fim while

    // configura o valor monetário com 2 valores decimais
    cout << fixed << setprecision( 2 ) << endl;

    // calcula o total das vendas
    totalVendido = valor1 + valor2 + valor3 + valor4 + valor5;

    // imprime resultado
    cout << "Produto 1 R$" << valor1 << endl;
    cout << "Produto 2 R$" << valor2 << endl;
    cout << "Produto 3 R$" << valor3 << endl;
    cout << "Produto 4 R$" << valor4 << endl;
    cout << "Produto 5 R$" << valor5 << endl;
    cout << "Total vendido R$" << totalVendido << endl;

    // pula linha
    cout << endl;

    system("pause"); // pausa do programa

    return 0; // programa terminado com sucesso

} // fim main
