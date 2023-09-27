#include <stdio.h>
#include <stdlib.h>

float retornaValorQuebrado() {
    printf("Imprimindo valor quebrado");
    int numero = 5.6;
    return numero * 8;
}

int main() {

    float a = retornaValorQuebrado();

    printf("\n%.2f ", a);

    return 0;
}
