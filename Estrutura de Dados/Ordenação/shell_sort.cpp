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
}

void shell_sort(int vetor[TAM])
{
  int i, j, atual;
  int h = 1;

  // de quantos em quantos sera o pulo entre as analises
  while (h < TAM)
  {
    h = 3 * h + 1;
  }

  // reduz a distancia entre as analises
  while (h > 1)
  {
    h = h / 3;

    for (i = h; i < TAM; i++)
    {
      // elemento atual em analise
      atual = vetor[i];

      // elemento anterior ao analizado
      j = i - h;
      imprimeVetor(vetor);

      // analisando os membros anteriores
      while ((j >= 0) && (atual < vetor[j]))
      {

        // posiciona os elementos uma posicao para frente
        vetor[j + h] = vetor[j];

        // faz o j andar para tras
        j = j - h;

        // agora que o espaco foi aberto, colocamos o atual (menor numero) na posicao correta
        vetor[j + h] = atual;
      }
    }
  }
}

int main()
{
  int vetor[TAM] = {10, 9, 8, 7, 6, 5, 4, 3, 2, 1};

  shell_sort(vetor);

  imprimeVetor(vetor);
  return 0;
}
