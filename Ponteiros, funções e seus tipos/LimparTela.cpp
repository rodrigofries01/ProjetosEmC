#include <stdio.h>
#include <stdlib.h>

void limparTela() {
    system("CLS");
}

int main() {
    int a;

    printf("Digite um valor: ");

    scanf("%d", &a);

    limparTela();

    printf("Tudo limpo\nMas o valor que foi digitado foi: %d\n", a);
}
