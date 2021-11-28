/*
    6.47 Os exercícios 6.35–6.37 desenvolveram um programa de instrução auxiliada
    por computador para ensinar multiplicação a um aluno da  escola primária.
    Este exercício sugere aprimoramentos nesse programa.

    a) Modifique o programa para permitir que o usuário insira uma capacidade de
    nível de graduação.
    O nível 1 significa utilizar somente  números de um único
    dígito nos problemas,
    o nível 2 significa utilizar números com dois dígitos etc.

    b) Modifique o programa para permitir que o usuário selecione os tipos de
    problemas aritméticos que ele ou ela deseja estudar.
    A opção
    1  significa problemas de adição somente,
    2 significa problemas de subtração somente,
    3 significa problemas de multiplicação somente,
    4 significa problemas de divisão somente e
    5 significa problemas de todos esses tipos misturados aleatoriamente.
    Deitel, Harvey; Paul, Harvey. C++ Como Programar (p. 247). Edição do Kindle.
    Autor: Pedro Filho, 27/09/2021
*/

// incluir biblioteca
#include <iostream> // para cout e cin
#include <locale> // para setlocale
#include <iomanip> // para setw, fixed, setprecision
#include <ctime>

using namespace std;

// protótipos
int umNumeroAleatorio(); // gera um número aleatório
int doisNumerosAleatorios(); // gera dois números aleatórios
int tresNumerosAleatorios(); // gera três números aleatórios

int escolherPerguntaNivel(); // para saber em que nível o aluno está
int escolherOperacaoAritimetica(); // para saber qual das 4 operações o aluno quer estudar
int tipoDaOperacao( int tipoOperacao, int num1, int num2 ); // seleciona o tipo da operação aritimética

char sinalDaOperacao( int operacao ); // sinal da operação aritimética

void mensagemParaAcerto(); // para respostas certas
void mensagemParaErros(); // para respostas erradas
void acertosErros( int jogadas, int acertos, int erros ); // mostra o resumo

// função principal
int main()
{
    // localização geográfica
    setlocale( LC_ALL, "portuguese");

    // limpa a tela
    system("cls");

    // variáveis
    int resposta = 0;
    int produto = 1;
    int contaAcertos = 0;
    int contaErros = 0;
    int contaJogadas = 0;
    int num1 = 0; // para receber valores aleatórios
    int num2 = 0; // para receber valores aleatorios
    int nivelDoAluno = 0; // recebe a resposta do nível
    int aritimetica = 1; // recebe à função operação aritimética
    int valorDaAritimetica = 0;
    char sinal = ' '; // para o sinal aritimético ( +, -, *, / )

    // cabeçalho
    cout << "\tAPRENDENDO" << endl;

    // enquanto resposta diferente de -1
    while( resposta != -1 )
    {
        //gerador
        srand( time( NULL ) );

        // se conta acertos igual a zero
        if( contaAcertos == 0 )
        {
            // chama a função menu escolher o nivel
            nivelDoAluno = escolherPerguntaNivel();

            // limpa a tela
            system("cls");

            // chama a função menu escolha a operação aritimética
            aritimetica = escolherOperacaoAritimetica();
        } // fim if conta acertos

        // atribuindo valor às variáveis
        resposta = 0;
        produto = 1;

        // enquanto resposta diferente de produto
        while( resposta != aritimetica )
        {
            // switch recebe o valor em que o aluno está
            switch( nivelDoAluno )
            {
                case 1:
                    num1 = umNumeroAleatorio();
                    num2 = umNumeroAleatorio();
                    break;
                case 2:
                    num1 = doisNumerosAleatorios();
                    num2 = doisNumerosAleatorios();
                    break;
                case 3:
                    num1 = tresNumerosAleatorios();
                    num2 = tresNumerosAleatorios();
                    break;
            } // fim switch

            // sinal recebe o caractere retornado pela função sinalDaOperacao
            sinal = sinalDaOperacao( aritimetica );

            // se aritimética igual a 4 e num1 menor que num2
            if( ( aritimetica == 4 ) && ( num1 < num2 ) )
            {
                // entrada da resposta do usuário
                cout << "Quanto é( 99999 = sair ): " <<  num2 << " " << sinal << " " << num1 << " = ";
                cin >> resposta;
            } // fim if
            else // se não
            {
                // entrada da resposta do usuário
                cout << "Quanto é( 99999 = sair ): " <<  num1 << " " << sinal << " " << num2 << " = ";
                cin >> resposta;
            } // fim else

            // conta as jogadas
            contaJogadas += 1;

            // se resposta igual ao produto
            if( resposta == 99999 )
            {
                --contaJogadas;
                break; // fim do programa
            } // fim if

            // chama a função aritimética e atribuir o valor ao produto
            produto = tipoDaOperacao( aritimetica, num1, num2 ); // COLOCAR UM SWITCH AQUI;

            // se a resposta do usuário for igual ao produto do cálculo
            if( resposta == produto )
            {
                // chama a função mensagem para acertos
                mensagemParaAcerto();
                // conta os acertos
                ++contaAcertos;

            } // fim if
            else // se não
            {
                // repita enquanto a resposta for diferente de produto
                while( resposta != produto )
                {
                    // chama a função mensagem para erros
                    mensagemParaErros();

                    // conta os erros
                    ++contaErros;

                    // se aritimética igual a 4 e num1 menor que num2
                    if( ( aritimetica == 4 ) && ( num1 < num2 ) )
                    {
                        // entrada da resposta do usuário
                        cout << "Quanto é( 99999 = sair ): " <<  num2 << " " << sinal << " " << num1 << " = ";
                        cin >> resposta;
                    } // fim if
                    else // se não
                    {
                        // entrada da resposta do usuário
                        cout << "Quanto é( 99999 = sair ): " <<  num1 << " " << sinal << " " << num2 << " = ";
                        cin >> resposta;
                    } // fim else

                    // verifica se a resposta é igual ao produto
                    if( resposta == produto )
                    {
                        ++contaAcertos; // soma 1 a acertos
                        mensagemParaAcerto(); // exibe mensagem pelo acerto
                    } // fim if resposta igual produto

                    else if( resposta == 99999 )
                        // sair do programa
                        break;

                } // fim while resposta diferente do produto

            } // fim else

            // verifica se contaJogadas igual a 10
            if( contaJogadas >= 10 )
                break; // sair do programa

        } // fim while interno

        // se resposta igual a -1 ou o acerto igual a 10
        if( resposta == 99999 || contaJogadas >= 10 )
        {
            break; // fim do programa
        } // fim if

    } // fim primeiro while externo

    // chama afunção acertos e erros e mostra o resultado
    acertosErros( contaJogadas, contaAcertos, contaErros );

    // pula linha
    cout << endl;

    system("pause"); // pausa do programa

    return 0; // programa terminado com sucesso

} // fim main

// cria a função primeiroAleatorio
int umNumeroAleatorio()
{
    // variável recebe valor aleatório
    int alea = 1 + rand() % 10;
    // retorne o valor
    return alea;

} // fim função um

// cria a função doisNumerosAleatorio
int doisNumerosAleatorios()
{
    // variável recebe valor aleatório
    int alea = 10 + rand() % 90;
    // retorne o valor
    return alea;

} // fim função dois

// cria a função doisNumerosAleatorio
int tresNumerosAleatorios()
{
    // variável recebe valor aleatório
    int alea = 100 + rand() % 900;
    // retorne o valor
    return alea;

} // fim função tres

// cria a função para estabelecer o nível do jogo
int escolherPerguntaNivel()
{
    // variável
    int nivel = 0;

    // cabeçalho
    cout << "\tTABUADA DE?" << endl;
    cout << "=-=-=-=-=-=-=-=-=-=-=-=-=-=" << endl;
    cout << "=-       1 número        -=" << endl;
    cout << "=-       2 números       -=" << endl;
    cout << "=-       3 números       -=" << endl;
    cout << "=-=-=-=-=-=-=-=-=-=-=-=-=-=" << endl;
    cout << "Em que nível você está? ";
    cin >> nivel;

    // retorna o valor do nível do aluno.
    return nivel;

} // fim da função nível do jogo

// cria a função para estabelecer o nível do jogo
int escolherOperacaoAritimetica()
{
    // variável
    int operacao = 0;

    // cabeçalho
    cout << setw(25) << "OPERAÇÃO ARITIMÉTICA" << endl;
    cout << "=-=-=-=-=-=-=-=-=-=-=-=-=-=" << endl;
    cout << "=-       1 Somar         -=" << endl;
    cout << "=-       2 Subtrair      -=" << endl;
    cout << "=-       3 Multiplicar   -=" << endl;
    cout << "=-       4 Dividir       -=" << endl;
    cout << "=-       5 Misturados    -=" << endl;
    cout << "=-=-=-=-=-=-=-=-=-=-=-=-=-=" << endl;

    // enquanto operação menor que 1 e maior que 5
    cout << "Qual a sua opção? ";
    cin >> operacao;

    // retorna o valor do aluno.
    return operacao;

} // fim da função nível do jogo

// cria a função tipo da oparação aritimética
int tipoDaOperacao( int tipoOperacao, int num1, int num2 )
{
    switch( tipoOperacao )
    {
        case 1:
            return num1 + num2;
            break;
        case 2:
            return num1 - num2;
            break;
        case 3:
            return num1 * num2;
            break;
        case 4:
            // se num1 menor que num2
            if( num1 < num2 )
                // retorne o resultado de num2 dividido por num1
                return num2 / num1;
            return num1 / num2;
            break;
    } // fim switch
} // fim função tipo da operação aritimética

// cria a função sinal da operação aritimética
char sinalDaOperacao( int operacao )
{
    // FALTA TRABALHAR ESSA FUNÇÃO
    switch ( operacao ) // recebe o valor da operação ( 1=+, 2=-, 3=x, 4=/ )
    {
        case 1:
            return '+'; // retorna o sinal de somar +
            break;
        case 2:
            return '-'; // retorna o sinal de subtrair -
            break;
        case 3:
            return 'x'; // retorna o silan de vezes x
            break;
        case 4:
            return '/'; // retorna o sinal de dividir /
            break;

    } // fim switch

} // fim função sinal da operação

// cria a função mensagemParaAcerto
void mensagemParaAcerto()
{
    // variáveis
    int alea = 1 + rand() % 5;

    // switch
    switch( alea )
    {
        case 1:
            cout << "Muito bom!" << endl;
            break;
        case 2:
            cout << "Excelente!" << endl;
            break;
        case 3:
            cout << "Bom trabalho!" << endl;
            break;
        case 4:
            cout << "Continue assim!" << endl;
            break;
    } // fim switch
} // fim função mensagem boa

// cria a função mensagemParaErros
void mensagemParaErros()
{
    // variáveis
    int alea = 1 + rand() % 5;

    // switch
    switch( alea )
    {
        case 1:
            cout << "Não. Tente novamente." << endl;
            break;
        case 2:
            cout << "Errado. Tente mais uma vez." << endl;
            break;
        case 3:
            cout << "Não desista!" << endl;
            break;
        case 4:
            cout << "Não. Continue tentando." << endl;
            break;
    } // fim switch
} // fim função mensagem errada

// cria a função acertosErros que mostra os resultados
void acertosErros( int jogadas, int acertos, int erros )
{
    // mostra resultado
    cout << "\nVocê jogou " << jogadas << " vezes." << endl;
    cout << "Acertou " << acertos << "\nErrou " << erros << endl;

    // se acertos menor ou igual a 8
    if( acertos >= 8 )
        cout << "Parabéns! você está pronto para o próximo nível."  << endl;
    else
        cout << "Você acertou menos de 80 % das questões."
                << "\nPeça ajuda a seu professor." << endl;
} // fim função mostra resultado
