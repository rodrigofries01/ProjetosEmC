#include <stdio.h>
#include <new>
#include <string>
#include <stdlib.h>
#include <iostream>
#define TAM 10

using namespace std; // para utilizar o cout

void imprime_vetor(int vetor[TAM])
{
  for (int i = 0; i < TAM; i++)
  {
    cout << " - " << vetor[i];
  }
  cout << "\n";
}

int busca_simples(int vetor[TAM], int valorProcurado, int *posicaoEncontrada)
{

  bool valorFoiEncontrado;

  // percorre a lista em busca do valor
  for (int i = 0; i < TAM; i++)
  {
    if (vetor[i] == valorProcurado)
    {
      valorFoiEncontrado = true;
      *posicaoEncontrada = i;
    }
  }

  if (valorFoiEncontrado)
  {
    return 1;
  }
  else
  {
    return -1;
  }
}

int busca_binaria(int vetor[TAM], int valorProcurado, int *posicaoEncontrada)
{
  int esquerda = 0;      // Limite da esquerda
  int direita = TAM - 1; // limite da direita
  int meio;              // meio onde fica o cursor

  while (esquerda <= direita)
  {
    // Encontra o meio da análise
    meio = (esquerda + direita) / 2;

    // Quando o valor do meio é encontrado
    if (valorProcurado == vetor[meio])
    {
      *posicaoEncontrada = meio;
      return 1;
    }

    // Ajustando os limites laterais
    if (vetor[meio] < valorProcurado)
    {
      esquerda = meio + 1;
    }
    else
    {
      direita = meio - 1;
    }
  }
  return -1;
}

int main()
{
  int vetor[TAM] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
  int valorProcurado;
  int posicaoEncontrada;

  imprime_vetor(vetor);

  cout << "Qual valor deseja encontrar?"
       << "\n";
  scanf("%d", &valorProcurado);

  if (busca_binaria(vetor, valorProcurado, &posicaoEncontrada) == 1)
  {
    cout << "O valor encontrado esta na posicao " << posicaoEncontrada << "\n ";
  }
  else
  {
    cout << "O valor nao foi encontrado!";
  }

  return 0;
}
