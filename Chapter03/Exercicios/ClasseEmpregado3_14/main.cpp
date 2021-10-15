#include <iostream>
#include "Empregado.h"
#include <locale>

using namespace std;

int main()
{
    // localizador geográfico
    setlocale(LC_ALL, "portuguese");

    // limpa a tela
    system("cls");

    // variável
    int salAnual = 0;
    int aumentoSalario = 0;

    // cria o objeto da classe empregado
    Empregado meuEmpregado( "Pedro", "Filho", 1000 );

    // salário anual
    salAnual = meuEmpregado.salarioAnual(meuEmpregado.getSalario());
    aumentoSalario = (salAnual * 10) / 100;

    // mostra o empregado
    cout << "\nQUADRO DE EMPREGADOS" << endl;
    cout << "Nome: " << meuEmpregado.getNome() << endl;
    cout << "Sobrenome: " << meuEmpregado.getSobreNome() << endl;
    cout << "Salário mensal R$" << meuEmpregado.getSalario() << endl;
    cout << "Salário anual R$" << salAnual << endl;
    cout << "Aumento de 10% do salário anual R$" << aumentoSalario << endl;
    cout << "Salário anual com aumento de 10% R$" << salAnual + aumentoSalario << endl;


    // cria o objeto da classe empregado
    Empregado meuEmpregado1( "Maria", "Clementina", 850 );

    // salário anual
    salAnual = meuEmpregado1.salarioAnual(meuEmpregado1.getSalario());
    aumentoSalario = (salAnual * 10) / 100;

    // mostra o empregado
    cout << "\nQUADRO DE EMPREGADOS" << endl;
    cout << "Nome: " << meuEmpregado1.getNome() << endl;
    cout << "Sobrenome: " << meuEmpregado1.getSobreNome() << endl;
    cout << "Salário mensal R$" << meuEmpregado1.getSalario() << endl;
    cout << "Salário anual R$" << salAnual << endl;
    cout << "Aumento de 10% do salário anual R$" << aumentoSalario << endl;
    cout << "Salário anual com aumento de 10% R$" << salAnual + aumentoSalario << endl;

    // olá mundo
    cout << "Hello world!" << endl;

    // pausa o programa
    system("pause");

    // fum do programa
    return 0;

} // fim man
