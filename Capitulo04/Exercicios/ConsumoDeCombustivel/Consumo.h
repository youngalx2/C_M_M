// cria a classe Consumo
#include <iostream>

using namespace std;

// cria a classe consumo
class Consumo
{
public:
    void setQuilometrosRodados( float ); // configura os Kms rodados
    float getQuilometrosRodados(); // obtem os Kms rodados
    void setLitrosAbastecidos( float ); // configura os litros abastecidos
    float getLitrosAbastecidos(); // obtem os litros abastecidos
    void consumoKmPorLitros( double, double ); // calcula o consumo

private:
    // cria as variáveis da classe
    float quilometragem; // recebe a quilomtragem rodada
    float litrosAbastecidos; // recebe os valores dos litros abastecidos
};
