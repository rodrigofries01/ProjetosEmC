#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
 
 //Crie um algoritmo que infomrme se o valo � um numero primo ou nao 
 
//Fun��o principal do programa
void main(){
	
	setlocale(LC_ALL,"");
	
	int i, Num, resultado = 0;
	
	printf("Digite um Valor: ");
	scanf("%d", &Num);
	
	for(i=0; i <= Num / 2; i++){
		if(Num % 2 == 0){
			resultado++;
			break;
		}
	}
	
	if(resultado == 0){
		printf("%d � um n�mero primo\n", num");
	}else{
		printf("%d n�o � um n�mero primo\n", num);
	}
}
