/*
    cria um dicionário simples, evita nomes repetidos
    Autor: 24/10/2021
*/

#include <iostream>
#include <locale>
#include <vector>
#include <algorithm>

using namespace std;

// função principal
int main()
{
    // localização geográfica
    setlocale( LC_ALL, "portuguese");

    // limpa a tela
    system("cls");

    vector<string> palavras; // cria o vetor palavras

    for (string temp; cin >> temp;) // ler palavras separadas por espaços em branco
        palavras.push_back (temp); // coloca palavras no vetor

    cout << "Número de palavras:" << palavras.size () << endl;

    sort( palavras.begin(), palavras.end() ); // classifica as palavras

    for(int i = 0; i < palavras.size (); ++ i)
          if (i == 0 || palavras [ i ] != palavras [ i - 1 ]  ) // esta é uma palavra nova?
            cout << palavras [i] << endl;

    system("pause"); // pausa do programa

    return 0; // programa terminado com sucesso

} // fim main
