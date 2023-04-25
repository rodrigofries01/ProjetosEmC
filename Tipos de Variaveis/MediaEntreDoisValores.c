#include <stdio.h>
#include <locale.h>

void main()
{

  // Permite usar acentos
  setlocale(LC_ALL, "");

  float Nota1, Nota2, resultado;

  printf("Digite a primeira nota: ");
  scanf("%f", &Nota1);

  printf("Digite a segunda nota: ");
  scanf("%f", &Nota2);

  resultado = (Nota1 + Nota2) / 2;

  printf("\nA média entre %.2f e %.2f é %.2f\n", Nota1, Nota2, resultado);

  system("pause");
}