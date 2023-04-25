#include <stdio.h>
#include <stdlib.h>

void limpaTela(){
    system("CLS");
}

int main(){
    
    int a;

    printf("Digite uma valor para a:");

    scanf("%d", &a);

    limpaTela();

    printf("O valor digitado foi %d, fim do programa!", a);

    return 0;
}