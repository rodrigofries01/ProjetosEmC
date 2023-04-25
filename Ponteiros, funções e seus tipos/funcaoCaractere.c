#include <stdio.h>
#include <stdlib.h>

char retornaLetra(){
    return 'Z';
}

char retornaLetra2(){
    return 120;
}

//se ele não retornar nenhum valor
int main(void){
    //definindo variaveis
    char letra;

    //char recebendo o valor de uma funcao
    letra = retornaLetra();

    // imprimindo valor da funcao
    printf("%c", letra);
    
    return 0;
}