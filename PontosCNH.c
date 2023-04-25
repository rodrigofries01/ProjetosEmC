#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

typedef struct Validade
{
  int ano;
  int mes;
  int dia;
} VALIDADE;

typedef struct Condutor
{
  int codigo;
  int pontosCNH;
  char cnh[20];
  char nome[40];
  VALIDADE Validade;
} CONDUTOR;

void lerCondutor(CONDUTOR Condutor[], int n)
{
  int i;
  for (i = 0; i < n; i++)
  {
    scanf(" %d", &Condutor[i].codigo);
    scanf(" %[^\n]s", Condutor[i].nome);
    scanf(" %[^\n]s", Condutor[i].cnh);
    scanf(" %d", &Condutor[i].Validade.ano);
    scanf(" %d", &Condutor[i].Validade.mes);
    scanf(" %d", &Condutor[i].Validade.dia);
    scanf(" %d", &Condutor[i].pontosCNH);
  }
}

void buscaDadosCondutor(CONDUTOR Condutor[], int n, int codigo)
{
  int i;
  for (i = 0; i < n; i++)
  {
    if (codigo == Condutor[i].codigo)
    {

      printf("Codigo: %d\n", Condutor[i].codigo);
      printf("Nome: %s\n", Condutor[i].nome);
      printf("CNH: %s\n", Condutor[i].cnh);
      printf("VAlidade %d/%d/%d\n", Condutor[i].Validade.dia, Condutor[i].Validade.mes, Condutor[i].Validade.ano);
      printf("Pontos: %d\n", Condutor[i].pontosCNH);
    }
  }
}

void mediaPontosCNH(CONDUTOR Condutor[], int n)
{
  int i;
  float media;
  for (i = 0; i < n; i++)
  {
    media = Condutor[i].pontosCNH;
  }
  printf("Media de pontos dos condutores: %.2f\n", media / n);
}

int main(void)
{
  setlocale(LC_ALL, "");

  int n, cod;
  scanf("%d", &n);
  CONDUTOR Condutor[n];
  lerCondutor(Condutor, n);
  scanf("%d", &cod);
  buscaDadosCondutor(Condutor, n, cod);
  mediaPontosCNH(Condutor, n);
}