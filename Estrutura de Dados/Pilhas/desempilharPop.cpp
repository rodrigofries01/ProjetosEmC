#include <stdio.h>
#include <new>
#include <string>
#include <stdlib.h>
#include <iostream>
#define TAM 10

using namespace std; // para utilizar o cout

void imprime_vetor(int vetor[TAM], int topo)
{
  // auxiliar contador
  int cont;
  cout << "\n";

  for (cont = 0; cont < TAM; cont++)
  {
    cout << vetor[cont] << " - ";
  }

  cout << "Topo " << topo;
}

void pilha_push(int pilha[TAM], int valor, int *topo)
{
  // caso não possa colocar mais valores
  if (*topo == TAM - 1)
  {
    cout << " - Pilha Cheia!"
         << "\n";
  }
  else
  {
    *topo = *topo + 1;
    pilha[*topo] = valor;
  }
}

void pilha_pop(int pilha[TAM], int *topo)
{
  if (*topo == -1)
  {
    cout << " A pilha ja esta vazia";
  }
  else
  {
    cout << " - Valor Retirado " << pilha[*topo];
    pilha[*topo] = 0;
    *topo = *topo - 1;
  }
}

int main()
{
  int pilha[TAM] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
  int topo = -1; // topo da pilha

  imprime_vetor(pilha, topo);

  pilha_push(pilha, 1, &topo);
  imprime_vetor(pilha, topo);

  pilha_push(pilha, 2, &topo);
  imprime_vetor(pilha, topo);

  pilha_push(pilha, 3, &topo);
  imprime_vetor(pilha, topo);

  pilha_push(pilha, 4, &topo);
  imprime_vetor(pilha, topo);

  pilha_push(pilha, 5, &topo);
  imprime_vetor(pilha, topo);

  pilha_push(pilha, 6, &topo);
  imprime_vetor(pilha, topo);

  pilha_push(pilha, 7, &topo);
  imprime_vetor(pilha, topo);

  pilha_push(pilha, 8, &topo);
  imprime_vetor(pilha, topo);

  pilha_push(pilha, 9, &topo);
  imprime_vetor(pilha, topo);

  pilha_push(pilha, 10, &topo);
  imprime_vetor(pilha, topo);

  pilha_push(pilha, 11, &topo);
  imprime_vetor(pilha, topo);

  pilha_pop(pilha, &topo);
  imprime_vetor(pilha, topo);

  pilha_pop(pilha, &topo);
  imprime_vetor(pilha, topo);

  pilha_pop(pilha, &topo);
  imprime_vetor(pilha, topo);

  pilha_pop(pilha, &topo);
  imprime_vetor(pilha, topo);

  pilha_pop(pilha, &topo);
  imprime_vetor(pilha, topo);

  pilha_pop(pilha, &topo);
  imprime_vetor(pilha, topo);

  pilha_pop(pilha, &topo);
  imprime_vetor(pilha, topo);

  pilha_pop(pilha, &topo);
  imprime_vetor(pilha, topo);

  pilha_pop(pilha, &topo);
  imprime_vetor(pilha, topo);

  pilha_pop(pilha, &topo);
  imprime_vetor(pilha, topo);

  pilha_pop(pilha, &topo);
  imprime_vetor(pilha, topo);

  return 0;
}