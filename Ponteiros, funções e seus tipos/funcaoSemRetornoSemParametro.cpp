#include <stdio.h>
#include <stdlib.h>

    //funcao de desenha borda
    void desenhaBorda(){
        printf("|----------|Versao dentro da funcao\n\n");
    }

int main(){

    printf("|----------|Versao dentro da main\n\n");

    printf("------- Ola\n\n");

    desenhaBorda();//chamando funcao

    printf("------- Ola de novo\n\n");

    desenhaBorda();
}
