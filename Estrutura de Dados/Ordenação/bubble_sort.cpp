#include <stdio.h>
#include <new>
#include <string>
#include <stdlib.h>
#include <iostream>
#define TAM 10

using namespace std; // para utilizar o cout

void imprime_vetor(int vetor[TAM])
{
    // auxiliar contador
    cout << "\n";

    for (int i = 0; i < TAM; i++)
    {
        cout << " [" << vetor[i] << "]";
    }
    cout << "\n";
}

void bubble_sort(int vetor[TAM])
{
    int aux;

    for (int x = 0; x < TAM; x++)
    {
        imprime_vetor(vetor);
        for (int y = 0; y < TAM; y++)
        {
            if (vetor[x] < vetor[y])
            {
                aux = vetor[x];
                vetor[x] = vetor[y];
                vetor[y] = aux;
            }
        }
    }
}

int main()
{
    int vetor[TAM] = {10, 9, 8, 7, 6, 5, 4, 3, 2, 1};

    bubble_sort(vetor);
    imprime_vetor(vetor);

    return 0;
}