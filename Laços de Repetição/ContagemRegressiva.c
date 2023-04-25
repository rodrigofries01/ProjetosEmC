#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
 
 //Crie um algoritmo que imprima os numeros de 10 até 0
 //de forma regressiva. usando(While, Do While ou For)
 
//Função principal do programa
void main(){
	
	setlocale(LC_ALL,"");
	
	// Definindo Variaveis 
	int cont = 10;
	
	//while
	
	printf("============While=============\n");
	
	while(cont >= 0){
		printf("%d\n", cont);
		cont--;
	}
	
	printf("============Do=While===========\n");
	
	//Do While
	cont = 10;
	
	do{
		printf("%d\n", cont);
		cont--;
	}while(cont >= 0);
	
	printf("===============For==============\n");
	
	for(cont = 10; cont >= 0; cont--){
		printf("%d\n", cont);
	}
	
	printf("===============Fim=================\n");

//pausa o programa após a execução
system("pause");
}
