#include <stdio.h>
#include <stdlib.h>

    //funcao retornaDez
int retornaDez() {
    return 10;
}

int main() {

    //definindo variaveis
    int a;

    //passando valor da funcao para a variavel
    a = retornaDez();

    printf("%d", a);
}
