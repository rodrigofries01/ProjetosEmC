#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
 
bool retornaBooleano(){
    return true;
}
 
int main(){
 
    //Definindo variáveis
    bool variavelBooleana;
 
    //Variável recebendo booleano
    variavelBooleana = retornaBooleano();
 
    //Se for verdadeiro executa o primeiro bloco
    if(variavelBooleana){
        printf("Eh verdadeiro!");
    }//Senão, executa o segundo bloco
    else{
        printf("Eh falso!");
    }
 
    //Retorno da Função
    return 0;
}