#include <stdio.h>
#include <stdlib.h>

void mostraSoma(int primeiroValor, int segundoValor) {
    int soma;
    soma = primeiroValor + segundoValor;
    printf("A soma entre %d + %d = %d", primeiroValor, segundoValor, soma);
}

int main() {
    int a, b;

    printf("Digite o primeiro valor: ");
    scanf("%d", &a);

    printf("Digite o segundo valor: ");
    scanf("%d", &b);

    mostraSoma(a,b);

    return 0;
}
