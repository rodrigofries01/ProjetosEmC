#include <stdio.h>
#include <stdlib.h>

void mostraSoma(int valor1, int valor2){
    printf("\n A soma entre %d + %d = %d", valor1, valor2, valor1 + valor2);
}

int retornaSub(int valor1, int valor2){
	return valor1 - valor2;
}

int main(){
    //definindo variaveis
    int a;
    int b;
    
    printf("Digite o primeiro valor: ");
    scanf("%d", &a);
    
    printf("Digite o segundo valor: ");
    scanf("%d", &b);

    //funcao que mostra a soma
    mostraSoma(a,b);
    
    //exibe o resultado retornado pela função
    printf("\n A subtracao entre %d - %d = %d", a, b, retornaSub(a,b));

    //retorno da funcao
    return 0;
}
