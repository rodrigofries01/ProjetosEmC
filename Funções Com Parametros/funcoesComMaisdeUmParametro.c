#include <stdio.h>
#include <stdlib.h>

void mostraSoma(int valor1, int valor2){
    printf("\n A soma entre %d e %d eh %d", valor1, valor2, valor1 + valor2);
}

int main(){
    //definindo variaveis
    int a = 5;
    int b = 7;

    //funcao que mostra a soma
    mostraSoma(a,b);

    //retorno da funcao
    return 0;
}