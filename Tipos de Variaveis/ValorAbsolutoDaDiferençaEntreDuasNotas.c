// Crie um algoritmo que leia 2 notas e mostre o valor absoluto da diferença entre elas.

#include <stdio.h>
#include <locale.h>

void main()
{

  // Permite usar acentos
  setlocale(LC_ALL, "");

  int Nota1, Nota2;

  printf("Digite a primeira nota: ");
  scanf("%d", &Nota1);

  printf("Digite a segunda nota: ");
  scanf("%d", &Nota2);

  printf("A diferença das Notas eh %d\n ", abs(Nota1 - Nota2));

  system("pause");
}