#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
 
 //Crie um algoritmo que infomrme se o valo é um numero primo ou nao 
 
//Função principal do programa
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
		printf("%d é um número primo\n", num");
	}else{
		printf("%d não é um número primo\n", num);
	}
}
