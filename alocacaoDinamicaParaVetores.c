#include <stdio.h>
#include <stdlib.h>

int* alocaVetor(int tamanho){
//	é criado um ponteiro auxiliar
	int *aux;
	
//	alocação dinamica de memoria
	aux = (int*) malloc(tamanho * sizeof(int));

//	retorna o ponteiro que aponta para a pirmeira posição da memoria do vetor alocado
	return aux;
}

int main()
{
//    definindo variaveis
    int *vetor, tamanho, cont;

//    lendo o tamanho do vetor pelo usuario
    printf("Digite um tamanho para o vetor: ");
    scanf("%d", &tamanho);

//	ponteiro recebe o endereço de memoria alocado no vetor 
	
	vetor = alocaVetor(tamanho);
	
//	vetor[0] = 0;
//	vetor[1] = 10;
//	vetor[2] = 20;
//	vetor[3] = 30;

//	coloca valor no vetor
	for(cont = 0; cont < tamanho; cont++){
		vetor[cont] = 90;
	}
	
//	imprime vetor na tela 
	for(cont = 0; cont < tamanho; cont++){
		printf("%d\n", vetor[cont]);
	}
	
//	libera a memoria após usar o vetor
	free(vetor);
		
    return 0;
}
