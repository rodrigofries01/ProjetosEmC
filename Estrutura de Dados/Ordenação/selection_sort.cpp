#include <stdio.h>
#include <new>
#include <string>
#include <stdlib.h>
#include <iostream>
#define TAM 10

using namespace std; // para utilizar o cout

void imprimeVetor(int vetor[TAM])
{
  cout << "\n";
  for (int i = 0; i < TAM; i++)
  {
    cout << " [" << vetor[i] << "]";
  }
  cout << "\n";
}

void selection_sort(int vetor[TAM])
{
  int posicaoDoMenorValor, aux, i, j;

  for (i = 0; i < TAM; i++)
  {
    // recebe a posicao inicial para o menor valor
    posicaoDoMenorValor = i;

    for (j = i + 1; j < TAM; j++)
    {
      // caso encontre um valor menor na frente dos analizados
      if (vetor[j] < vetor[posicaoDoMenorValor])
      {
        posicaoDoMenorValor = j;
      }
    }
    // verifica se houve mudança
    if (posicaoDoMenorValor != i)
    {
      aux = vetor[i];
      vetor[i] = vetor[posicaoDoMenorValor];
      vetor[posicaoDoMenorValor] = aux;
    }
    imprimeVetor(vetor);
  }
}

int main()
{
  int vetor[TAM] = {10, 9, 8, 7, 6, 5, 4, 3, 2, 1};

  selection_sort(vetor);

  imprimeVetor(vetor);
  return 0;
}