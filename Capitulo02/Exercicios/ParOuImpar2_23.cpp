// inclua biblioteca
#include <iostream>

using namespace std;

// Função Main
main()
{
    // Variável
    int num;

    //Entrada de dados
    cout<<"Digite um inteiro: ";
    cin>>(num);

    // Verificar se num é para
    if (num % 2 == 0){
        //Mostrar se é par
        cout<<num<<" PAR."<<endl;
    }
    if (num % 2 != 0) {
        // mostra impar
        cout<<num<<" IMPAR."<< endl;
    }

}
