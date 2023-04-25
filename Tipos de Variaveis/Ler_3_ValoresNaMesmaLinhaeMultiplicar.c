#include <stdio.h>
#include <locale.h>

void main()
{

  // Permite usar acentos
  setlocale(LC_ALL, "");

  int num1, num2, num3, resultado;

  printf("Digite os 3 valores: ");
  scanf("%d%d%d", &num1, &num2, &num3);

  resultado = num1 * num2 * num3;

  printf("O resultado da multiplicacao entre %d x %d x %d eh %d ", num1, num2, num3, resultado);

  system("pause");
}