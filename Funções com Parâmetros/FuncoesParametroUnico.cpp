#include <stdio.h>
#include <stdlib.h>

void mostraSucessor(int numero) {
    printf("O sucessor de %d eh %d \n", numero, numero + 1);
}

int mostraAntecessor(int numero) {
    return numero -1;
}

int main() {
    int a;

    printf("Digite um valor: ");

    scanf("%d", &a);

    mostraSucessor(a);

    printf("O antecessor de %d eh %d\n", a, mostraAntecessor(a));

    return 0;
}
