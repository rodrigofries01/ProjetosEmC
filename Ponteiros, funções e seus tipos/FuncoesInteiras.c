#include <stdio.h>
#include <stdlib.h>
 
//Definindo que a função existe
int retornaDez();
float retornaQuebrado();
 
int main(){
 
    //Definindo Variáveis
    int a;
 
    //Passando o retorno de uma função para uma variável
    a = retornaDez();
 
    //Imprimindo valor de a
    printf("\n%d", a);
 
    //Definndo um float
    float b;
 
    //Passando o retorno de uma função para uma variável
    b = retornaQuebrado();
 
    //Imprimindo valor de a
    printf("\n%f", b);
 
    return 0;
}
 
//Função que retorna 10
int retornaDezEImprimeMensagem(){
    printf("\nOi galera! \n");
    int numero = 10;
    return numero;
}
 
//Retorna um número quebrado
float retornaQuebrado(){
    return 5.5;
}