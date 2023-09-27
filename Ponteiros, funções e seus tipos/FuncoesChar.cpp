#include <stdio.h>
#include <stdlib.h>

char retornaLetra() {
    printf("Retorna uma letra \n");
    return 'w';
}

int main() {
    char letra;

    letra = retornaLetra();

    printf("%c", letra);
}
