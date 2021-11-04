/*
    4.13 Os motoristas se preocupam com o consumo de combustível dos seus automóveis.
    Um motorista monitorou vários tanques cheios de  gasolina registrando a quilometragem
    dirigida e a quantidade de combustível em litros utilizados para cada tanque cheio.
    Desenvolva um  programa C++ que utiliza uma instrução while para inserir os quilômetros
    percorridos e a quantidade de litros de gasolina utilizados  para cada taque.
    O programa deve calcular e exibir o consumo em quilômetros/litro para cada tanque cheio
    e imprimir a quilometragem  combinada e a soma total de litros de combustível consumidos
    até esse ponto.
    Deitel, Harvey; Paul, Harvey. C++ Como Programar (p. 133). Edição do Kindle.
    Autor: Pedro Filho, 14/08/2021
*/
#include <iostream>

#include "Consumo.h" // inclui a classe Consumo.h

using namespace std;

// cria a função para configurar a variável quilometragem
void Consumo::setQuilometrosRodados( float valor )
{
    if( valor >= 0 )
    {
        quilometragem = valor;
    } // fim if
} // fim setQuilometrosRodados

// cria a função getQuilometrosRodados
float Consumo::getQuilometrosRodados()
{
    // retorne o valor da quilometragem
    return quilometragem;
} // fim get

// cria a função setLitrosAbastecidos
void Consumo::setLitrosAbastecidos( float valor )
{
    if( valor >= 0 )
    {
        litrosAbastecidos = valor;
    } // fim if
} // fim função set

// cria a função getLitrosAbastecidos
float Consumo::getLitrosAbastecidos()
{
    // retorna o valor dos litros abastecidos
    return litrosAbastecidos;
} // fim get

// cria a função consumo
void Consumo::consumoKmPorLitros(double quantidade, double litros )
{
    // cria a variável
    double consumoAtual = quantidade / litros;

    // mostra o resultado
    cout << "Km/litros deste tanque: " << consumoAtual << endl;

} // fim consumo
