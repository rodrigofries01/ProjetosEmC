// Crie um algoritmo que leia 3 notas e calcule a média entre elas. Se o valor for maior que 7 informe que o aluno foi aprovado, senão foi reprovado.

#include <stdio.h>

void main()
{
  float Nota1, Nota2, Nota3, resultado;

  printf("Digite as 3 notas: ");
  scanf("%f %f %f", &Nota1, &Nota2, &Nota3);

  resultado = (Nota1 + Nota2 + Nota3) / 3;

  if (resultado >= 7)
  {
    printf("Voce tirou %.2f, Esta aprovado!\n", resultado);
  }
  else
  {
    printf("Voce tirou %.2f, nao atingiu a media, esta reprovado! \n", resultado);
  }
}