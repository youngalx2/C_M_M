/*
    6.42 (Torres de Hanói) Neste capítulo, você estudou funções que podem ser
    facilmente implementadas tanto recursiva como iterativamente.  Neste exercício,
    apresentamos um problema cuja solução recursiva demonstra a elegância da
    recursão, e cuja solução iterativa pode não  ser tão evidente.
    Se abordássemos esse problema com métodos convencionais, rapidamente
    ficaríamos desesperados gerenciando os discos. Em vez disso,  abordar esse
    problema com a recursão em mente permite que os passos sejam simples.
    Mover n discos pode ser visualizado em termos  de mover somente n – 1 discos
    (e daí a recursão), como segue:
    a) Mova n – 1 discos do pino 1 para o pino 2, utilizando o pino 3 como área de
    armazenamento temporário.
    b) Mova o último disco (o maior) do pino 1 para o pino 3.
    c) Mova o n – 1 discos do pino 2 para o pino 3, utilizando o pino 1 como área
    de armazenamento temporário.
    O processo termina quando a última tarefa envolve mover n = 1 disco (isto é, o caso básico).
    Essa tarefa é realizada simplesmente movendo  o disco, sem a necessidade
    de uma área de armazenamento temporário.
    Escreva um programa para resolver o problema Torres de Hanói. Utilize uma função
    recursiva com quatro parâmetros:
    a) O número de discos a serem movidos.
    b) O pino em que esses discos inicialmente estão empilhados.
    c) O pino para o qual essa pilha de discos deve ser movido.
    d) O pino a ser utilizado como área de armazenamento temporário.
    Seu programa deve imprimir as instruções precisas que ele usará para mover
    os discos do pino inicial para o pino de destino. Por exemplo,  para mover uma pilha
    de três discos do pino 1 para o pino 3, seu programa deve imprimir a seguinte
    série de movimentos:
    1 → 3 (Isso quer dizer mover um disco do pino 1 para o pino 3.)
    1 → 2
    3 → 2
    1 → 3
    Deitel, Harvey; Paul, Harvey. C++ Como Programar (p. 246). Edição do Kindle.
    Deitel, Harvey; Paul, Harvey. C++ Como Programar (p. 246). Edição do Kindle.
    Autor: Pedro Filho, 24/09/2021
*/

// incluir biblioteca
#include <iostream> // para cout e cin
#include <locale> // para setlocale
#include <iomanip> // para setw, fixed, setprecision

using namespace std;

// protótipo
void torreDeHanoi( int discos, string origem, string destino, string auxiliar );

// função principal
int main()
{
    // localização geográfica
    setlocale( LC_ALL, "portuguese");

    // limpa a tela
    system("cls");

    // cria variável
    int discos;
    char resposta = 's';

    // enquanto resposta diferente de s
    while( resposta != 'n' )
    {
    // cabeçalho
    cout << "\tTORRE DE HANÓI" << endl;

    // entrada de dados
    cout << "Informe o número de discos: ";
    cin >> discos;

    // chama a função hanoi ( origem, destio, auxiliar )
    torreDeHanoi( discos, " 1 ", " 3 ", " 2 " );

    // pergunta
    cout << "Deseja continuar ( s / n )? ";
    cin >> resposta;

    // limpa a tela
    system("cls");

    } // fim while

    // pula linha
    cout << endl;

    system("pause"); // pausa do programa

    return 0; // programa terminado com sucesso

} // fim main

// cria a função torreDeHanoi
void torreDeHanoi( int discos, string origem, string destino, string auxiliar )
{
    // variável
    int contar = 1;

    // se discos igual a 1
    if( discos == 1 )
    {
        // imprima
        cout << "Mova o disco da " << origem << " para " << destino << endl;
    } // fim if
    else // se não
    {
        // chama a função recursivamente e mova o disco da origem para o destino
        // ( 1, 2, 3 ) 1 => 3
        torreDeHanoi( discos - 1, origem, auxiliar, destino );

        // imprima
        cout << "Mova o disco da " << origem << " para " << destino << endl;

        // chama a função recursivamente e mova o disco da origem para o destino
        // ( 2, 3, 1 ) 3 => 2
        torreDeHanoi( discos - 1, auxiliar, destino, origem );
    } // fim else
} // fim função
