// Inclua biblioteca
#include <iostream>
#include <locale>

using namespace std;

main()
{
    setlocale(LC_ALL, "portuguese");

    // Variáveis
    int n1, n2;

    // Entrada de dados
    cout<<"Digite dois inteiros: ";
    cin>>n1>>n2;

    // Verifique se n1 e multiplo do outro
    if (n1 % n2 == 0) {
        // Mostra dados
        cout<<n1<<" é multiplo de "<< n2<<endl;
    }
    if (n1 % n2 != 0) {
        //Mostra dados
        cout<<n1<<" não é multiplo de "<< n2<<endl;
    }
}
