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
  int cont;

  for (cont = 0; cont < TAM; cont++)
  {
    cout << vetor[cont] << " - ";
  }
}

void pilha_push(int pilha[TAM], int valor, int *topo)
{
  // caso não possa colocar mais valores
  if (*topo == TAM - 1)
  {
    cout << "Pilha Cheia!"
         << "\n";
  }
  else
  {
    *topo = *topo + 1;
    pilha[*topo] = valor;
  }
}

int main()
{
  int pilha[TAM] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
  int topo = -1; // topo da pilha

  imprime_vetor(pilha);

  pilha_push(pilha, 1, &topo);
  pilha_push(pilha, 2, &topo);
  pilha_push(pilha, 3, &topo);
  pilha_push(pilha, 4, &topo);
  pilha_push(pilha, 5, &topo);
  pilha_push(pilha, 6, &topo);
  pilha_push(pilha, 7, &topo);
  pilha_push(pilha, 8, &topo);
  pilha_push(pilha, 9, &topo);
  pilha_push(pilha, 10, &topo);
  pilha_push(pilha, 11, &topo);

  imprime_vetor(pilha);

  return 0;
}