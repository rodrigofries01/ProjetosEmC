#include <stdio.h>
#include <stdlib.h>

void mostraSucessor(int numero) {
    printf("\nO sucessor de %d eh %d", numero, numero + 1);
}

int retornaAntecessor(int numero) {
    return numero - 1;
}

int main() {
    int a;

    printf("Digite um valor:");

    scanf("%d", &a);

    mostraSucessor(a);

    retornaAntecessor(a);
    return 0;
}