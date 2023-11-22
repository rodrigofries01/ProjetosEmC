#include <stdio.h>
#include <new>
#include <string>
#include <stdlib.h>
#include <iostream>
#define TAM 5

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

bool pilha_vazia(int topo)
{
  if (topo == -1)
  {
    return true;
  }
  else
  {
    return false;
  }
}

bool pilha_cheia(int topo)
{
  if (topo == TAM - 1)
  {
    return true;
  }
  else
  {
    return false;
  }
}

int pilha_tamanho(int topo)
{
  cout << " - Tamanho da Pilha " << topo;
  return topo + 1;
}

int pilha_get(int pilha[TAM], int *topo)
{
  if (pilha_vazia(*topo))
  {
    cout << " - A pilha esta vazia";
    return 0;
  }
  else
  {
    cout << " - O Ultimo valor da pilha " << *topo;
    return pilha[*topo];
  }
}

void pilha_push(int pilha[TAM], int valor, int *topo)
{
  // caso não possa colocar mais valores
  if (pilha_cheia(*topo))
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
  if (pilha_vazia(*topo))
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

void pilha_construtor(int pilha[TAM], int *topo)
{
  *topo = -1;

  for (int cont = 0; cont < TAM; cont++)
  {
    pilha[cont] = 0;
  }
}

int main()
{
  int pilha[TAM];
  int topo; // topo da pilha

  pilha_construtor(pilha, &topo);

  imprime_vetor(pilha, topo);
  pilha_tamanho(topo);
  pilha_get(pilha, &topo);

  pilha_push(pilha, 1, &topo);
  imprime_vetor(pilha, topo);
  pilha_tamanho(topo);
  pilha_get(pilha, &topo);

  pilha_push(pilha, 2, &topo);
  imprime_vetor(pilha, topo);
  pilha_tamanho(topo);
  pilha_get(pilha, &topo);

  pilha_push(pilha, 3, &topo);
  imprime_vetor(pilha, topo);
  pilha_tamanho(topo);
  pilha_get(pilha, &topo);

  pilha_push(pilha, 4, &topo);
  imprime_vetor(pilha, topo);
  pilha_tamanho(topo);
  pilha_get(pilha, &topo);

  pilha_push(pilha, 5, &topo);
  imprime_vetor(pilha, topo);
  pilha_tamanho(topo);
  pilha_get(pilha, &topo);

  pilha_push(pilha, 6, &topo);
  imprime_vetor(pilha, topo);
  pilha_tamanho(topo);
  pilha_get(pilha, &topo);

  pilha_pop(pilha, &topo);
  imprime_vetor(pilha, topo);
  pilha_tamanho(topo);
  pilha_get(pilha, &topo);

  pilha_pop(pilha, &topo);
  imprime_vetor(pilha, topo);
  pilha_tamanho(topo);
  pilha_get(pilha, &topo);

  pilha_pop(pilha, &topo);
  imprime_vetor(pilha, topo);
  pilha_tamanho(topo);
  pilha_get(pilha, &topo);

  pilha_pop(pilha, &topo);
  imprime_vetor(pilha, topo);
  pilha_tamanho(topo);
  pilha_get(pilha, &topo);

  pilha_pop(pilha, &topo);
  imprime_vetor(pilha, topo);
  pilha_tamanho(topo);
  pilha_get(pilha, &topo);

  pilha_pop(pilha, &topo);
  imprime_vetor(pilha, topo);
  pilha_tamanho(topo);
  pilha_get(pilha, &topo);

  return 0;
}