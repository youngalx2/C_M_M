/*
    1// Figura 6.26: maximum.h
    2// Definição do template de função maximum.
    Deitel, Harvey; Paul, Harvey. C++ Como Programar (p. 219). Edição do Kindle.
*/

template < class T > // ou tamplate < typename T >
T maximum( T value1, T value2, T value3 )
{
    T maximumValue = value1; // presupoe que value1 é o maior valor

    // determina que value2 é o meior valor
    // se value2 maior que maximumValue
    if( value2 > maximumValue ) // se verdade
        // maximumValue recebe value2
        maximumValue = value2;

    // se value3 maior que maximumValue
    if( value3 > maximumValue )
        //maximumValue recebe o valor de value3
        maximumValue = value3;

        // retorne o valor de maximumValue
        return maximumValue;

} // fim template
