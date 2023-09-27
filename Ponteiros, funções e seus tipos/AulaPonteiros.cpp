#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string>

using namespace std;

int main()
{
    //definindo variaveis
    int a = 20;

    //imprimindo variaveis
    printf("O valor de a eh %d\n\n", a);

    //imprimindo o endereco de a
    printf("O endereco de a eh %d\n\n", &a);

    //VAIRAVEIS ARMAZENAM VALORES
    int b = 10;

    //PONTEIROS ARMAZENAM POSICOES DA MEMORIA(ENDERECO)
    int *ponteiro;

    //ponteiro recebendo o posicao na memoria da variavel b
    ponteiro = &b;

    //imprimindo o valor da variavel b
    printf("O valor de b eh %d\n\n", b);

    //imprimindo o endereco de b
    printf("O endereco de b eh %d\n\n", ponteiro);

    //mudando o valor do ponteiro
    //pode ser lido como, conteudo apontado por:
    *ponteiro = 40;

    //novo valor da variavel agora eh
    printf("O valor de b agora eh %d\n\n", b);

    return 0;
}
