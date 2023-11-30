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

// junta dois subarrays criados ao dividir o veto principal
void merge(int vetor[TAM], int indiceEsquerdo, int meio, int indiceDireito)
{
  int i, j, k;                        // Auxiliares contadores
  int n1 = meio - indiceEsquerdo + 1; // tamanho do primeiro vetor auxiliar
  int n2 = indiceDireito - meio;      // nome do segundo vetor auxiliar

  // cria dois arrays temporarios
  int vetorEsquerdo[n1], vetorDireito[n2];

  // passa os elementos do vetor principal para o primeiro vetor auxiliar( esquerda )
  for (i = 0; i < n1; i++)
  {
    vetorEsquerdo[i] = vetor[indiceEsquerdo + i];
  }
  // passa os elementos do vetor principal para o primeiro vetor auxiliar( Direita )
  for (j = 0; j < n2; j++)
  {
    vetorDireito[j] = vetor[meio + 1 + j];
  }

  // reseta as variaveis
  i = 0;
  j = 0;
  k = indiceEsquerdo;

  while (i < n1 && j < n2)
  {
    // caso o valor da esquerda seja menor
    if (vetorEsquerdo[i] <= vetorDireito[j])
    {
      // passa para o meu vetor principal o valor menor
      vetor[k] = vetorEsquerdo[i];
      // incrementa o auxiliar para passar a analise para os proximos valores do vetor auxiliar
      i++;
    }
    else
    {
      // passa para o meu vetor principal o valor menor
      vetor[k] = vetorDireito[j];
      // incrementa o auxiliar para passar a analise para os proximos valores do vetor auxiliar
      j++;
    }
    // aumenta o indice de posicionamento no vetor
    k++;
  }
  // se faltarem alguns elementos do array esquerdo passa eles para o array principal
  while (i < n1)
  {
    vetor[k] = vetorEsquerdo[i];
    i++;
    k++;
  }

  // se faltarem alguns elementos do array esquerdo passa eles para o array principal
  while (j < n2)
  {
    vetor[k] = vetorDireito[j];
    j++;
    k++;
  }
}

void merge_sort(int vetor[TAM], int indiceEsquerdo, int indiceDireito)
{
  if (indiceEsquerdo < indiceDireito)
  {
    // encontra o meio
    int meio = indiceEsquerdo + (indiceDireito - indiceEsquerdo) / 2;

    // da metade para tras
    merge_sort(vetor, indiceEsquerdo, meio);

    // da metade para frente
    merge_sort(vetor, meio + 1, indiceDireito);

    imprimeVetor(vetor);

    // une os dois subarrays que foram criados
    merge(vetor, indiceEsquerdo, meio, indiceDireito);
  }
}

int main()
{
  int vetor[TAM] = {10, 9, 8, 7, 6, 5, 4, 3, 2, 1};

  imprimeVetor(vetor);

  merge_sort(vetor, 0, TAM - 1);

  imprimeVetor(vetor);

  return 0;
}
