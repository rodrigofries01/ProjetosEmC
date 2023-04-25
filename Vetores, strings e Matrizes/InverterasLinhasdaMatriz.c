#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main()
{

  // Para usar acentos
  setlocale(LC_ALL, "");

  // Preencha uma matriz 2x2 lendo valores do usuário e
  // depois troque os valores entre a primeira e a segunda linha.
  int minhaMatriz[2][2], aux1, aux2, i, j;

  // Lendo valores para matriz
  printf("Digite um valor para [0][0]");
  scanf("%d", &minhaMatriz[0][0]);
  printf("Digite um valor para [0][1]");
  scanf("%d", &minhaMatriz[0][1]);
  printf("Digite um valor para [1][0]");
  scanf("%d", &minhaMatriz[1][0]);
  printf("Digite um valor para [1][1]");
  scanf("%d", &minhaMatriz[1][1]);

  // Auxiliares
  aux1 = minhaMatriz[0][0];
  aux2 = minhaMatriz[0][1];

  // Invertendo valores usando auxiliares
  minhaMatriz[0][0] = minhaMatriz[1][0];
  minhaMatriz[0][1] = minhaMatriz[1][1];
  minhaMatriz[1][0] = aux1;
  minhaMatriz[1][1] = aux2;

  // Imprimindo nova matriz
  printf("\n%d %d", minhaMatriz[0][0], minhaMatriz[0][1]);
  printf("\n%d %d", minhaMatriz[1][0], minhaMatriz[1][1]);
}