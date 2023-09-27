#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

bool estaNoite() {
    printf("Sim, esta\n");
    return true;
}

bool naoEstaNoite() {
    printf("Nao, nao esta");
    return false;
}

int main() {
    bool noite;

    printf("esta noite? \n");
    scanf("%d", &noite);

    if(noite == true) {
        return estaNoite();
    } else {
        return naoEstaNoite();
    }

}
