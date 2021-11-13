/*
    4.34 (Criptografia) Uma empresa quer transmitir dados por telefone, mas está
    preocupada com a possibilidade de seus telefones estarem  grampeados.
    Todos os dados são transmitidos como inteiros de quatro dígitos.
    A empresa solicitou que escrevêssemos um programa  que encriptasse dados
    para que pudessem ser transmitidos com maior segurança.
    Seu programa deve ler um inteiro de quatro dígitos e  encriptá-lo como mostrado
    a seguir: Substitua cada dígito pelo (a soma desse dígito mais 7) módulo 10.
    Em seguida, troque o primeiro  dígito pelo terceiro, o segundo dígito pelo quarto e
    imprima o inteiro encriptado. Escreva um programa separado que aceita como
    entrada  um inteiro de quatro dígitos criptografado e o descriptografe para formar
    o número original.
    Deitel, Harvey; Paul, Harvey. C++ Como Programar (p. 138). Edição do Kindle.
    Autor: Pedro Filho, 22/08/2021
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

    // variáveis
    int numero = 0;
    int novoNumero = 0;
    int n1, n2,n3,n4;
    int cripto1, cripto2, cripto3, cripto4;

    // entrada de dados
    cout << "Digite um número de 4 digitos: ";
    cin >> numero; // aguarda entrada do usuário

    // separando digitos
    n1 = numero / 1000 % 1000;
    n2 = numero % 1000 / 100;
    n3 = numero % 100 / 10;
    n4 = numero % 10 / 1;

    // criptografia
    cripto1 = ( n1 + 7 ) % 10;
    cripto2 = ( n2 + 7 ) % 10;
    cripto3 = ( n3 + 7 ) % 10;
    cripto4 = ( n4 + 7 ) % 10;

    // cria um novo número
    novoNumero = (cripto3 * 1000) + (cripto4 * 100) + (cripto1 * 10 ) + (cripto2 * 1 );

    // mostra digitos
    cout << "Número: ";
    cout << n1 << " " << n2 << " " << n3 << " " << n4 <<  endl;

    cout << "Criptografia: ";
    cout << cripto3 << " " << cripto4 << " " << cripto1 << " " << cripto2 << endl;

    cout << "Novo número = " << novoNumero << endl;
    cout << endl;

    system("pause"); // pausa do programa

    return 0; // programa terminado com sucesso

} // fim main
