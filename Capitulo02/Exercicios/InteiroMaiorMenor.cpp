// Inclua biblioteca
#include <iostream>
using namespace std;
// Função principal
main()
{
    // Variaveis
    int n1, n2, n3, n4, n5;
    int maior;
    int menor;

    // Entrada de dados
    cout<<"digite 5 inteiros: ";
    cin>>(n1)>>(n2)>>(n3)>>(n4)>>(n5);

    // atribuindo valor a maior e menor
    maior = n1;
    menor = n1;

    // descobrindo o maior valor
    if( n2 > maior )
        maior = n2;

    if( n3 > maior )
        maior = n3;

    if (n4 > maior )
        maior = n4;

    if ( n5 > maior  )
        maior =n5;

    // descobrindo o menor
    if ( n2 < menor )
        menor = n2;

    if ( n3 < menor )
        menor = n3;

    if ( n4 < menor )
        menor = n4;

    if ( n5 < menor )
        menor = n5;

    // mostra resultado
    cout << "O maior valor é " << maior << endl;
    cout << "O menor valor é " << menor << endl;

} // fim main
