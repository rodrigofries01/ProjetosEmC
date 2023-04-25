/*Crie um algoritmo que leia dois valores e depois crie um menu (Usando Switch Case)
de 4 opções:1-Somar, 2-Subtrair,3-Dividir,4-Multiplicar.
Depois que o usuário escolher uma opção, mostre o resultado da operação escolhida
com os dois valores lidos.*/

#include <stdio.h>
#include <stdlib.h>

// Função principal do programa
int main()
{
    int Num1, Num2, resultado;
    int opcao;

    printf("Digite o primeiro valor: \n");
    scanf("%d", &Num1);

    printf("Digite o segundo valor: \n");
    scanf("%d", &Num2);

    printf("\n==============================\n\n");

    printf("1-Somar\n");
    printf("2-Subtracao\n");
    printf("3-Multiplicacao\n");
    printf("4-Divisao\n");

    printf("\n==============================\n");

    printf("Digite a opcao dsejada: \n");
    scanf("%d", &opcao);

    printf("\n==============================\n");

    switch (opcao)
    {
    case 1:
        printf("1-Adicao\n");
        resultado = Num1 + Num2;
        break;
    case 2:
        printf("2-Subtracao\n");
        resultado = Num1 - Num2;
        break;
    case 3:
        printf("3-Multiplicacao\n");
        resultado = Num1 * Num2;
        break;
    case 4:
        printf("4-Divisao\n");
        resultado = Num1 / Num2;
        break;
    default:
        printf("operacao Invalida\n");
    }

    printf("\nVoce escolheu a opcao %d, e o resultado eh %d\n", opcao, resultado);

    system("pause");
}