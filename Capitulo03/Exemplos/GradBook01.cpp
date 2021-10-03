/*
    Cria a classe Gradbook 01
    Autor:
*/

#include <iostream>
#include <locale>

using namespace std;

// cria a classe gradBook
class GradBook
{

public: // É UM ESPECIFICADOR DE ACESSO, são sempre seguidos por : (dois pontos)

    // cria a função-membro displayManssage que mostra uma mensagem de boas vindas
    void displayMessage()
    {
        cout << "Bem vindo ao Grad Book!" << endl;
    } // fim função membro
}; // fim classe

// função principal
int main()
{
    // define a localização geográfica
    setlocale(LC_ALL, "portuguese");

    // cria o objeto para a classe GradBook
    GradBook myGradBook;

    // chama a função da classe Gradbook
    myGradBook.displayMessage();

    return 0; // programa terminado com sucesso

} // fim main
