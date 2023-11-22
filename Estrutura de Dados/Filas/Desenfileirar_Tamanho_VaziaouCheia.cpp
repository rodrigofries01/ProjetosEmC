#include <iostream>
#include <stdlib.h>
#include <string>
#define TAM 10

using namespace std;

void imprime_vetor(int vetor[TAM], int tamanho)
{
    cout << "\n";
    for (int cont = 0; cont < TAM; cont++)
    {
        cout << vetor[cont] << " - ";
    }
}

void fila_construtor(int *frente, int *tras)
{
    *frente = 0;
    *tras = -1;
}

bool fila_vazia(int frente, int tras)
{
    if (frente > tras)
    {
        return true;
    }
    else
    {
        return false;
    }
}

bool fila_cheia(int tras)
{
    if (tras == TAM - 1)
    {
        return true;
    }
    else
    {
        return false;
    }
}

void fila_enfileirar(int fila[TAM], int valor, int *tras)
{
    if (fila_cheia(*tras))
    {
        cout << " Fila Cheia!";
    }
    else
    {
        *tras = *tras + 1;
        fila[*tras] = valor;
    }
}

void fila_desinfileirar(int fila[TAM], int *frente, int tras)
{
    if (fila_vazia(*frente, tras))
    {
        cout << "impossivel desinfileirar uma lista vazia";
    }
    else
    {
        cout << " O valor " << fila[*frente] << " Foi Removido | ";
        fila[*frente] = 0;
        *frente = *frente + 1;
    }
}

int fila_tamanho(int tras, int frente)
{
    return (tras - frente) + 1;
}

int main()
{
    int fila[TAM] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    int frente, tras;

    fila_construtor(&frente, &tras);

    fila_enfileirar(fila, 1, &tras);
    fila_enfileirar(fila, 2, &tras);
    fila_enfileirar(fila, 3, &tras);
    fila_enfileirar(fila, 4, &tras);
    fila_enfileirar(fila, 5, &tras);
    fila_enfileirar(fila, 6, &tras);
    fila_enfileirar(fila, 7, &tras);
    fila_enfileirar(fila, 8, &tras);
    fila_enfileirar(fila, 9, &tras);
    fila_enfileirar(fila, 10, &tras);
    fila_enfileirar(fila, 11, &tras);

    fila_desinfileirar(fila, &frente, tras);
    fila_desinfileirar(fila, &frente, tras);
    fila_desinfileirar(fila, &frente, tras);

    imprime_vetor(fila, fila_tamanho(tras, frente));

    return 0;
}