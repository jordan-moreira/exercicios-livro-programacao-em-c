#include <stdio.h>
#define TAM 4

int main() {
    char a[TAM], b[TAM], aux;
    int i, p = TAM - 1;



    printf("Vetor A\n");
    for (i = 0; i < TAM; i++) {
        printf("\tDigite o %dº caracter: ", i + 1);
        scanf(" %c", &a[i]);
    }

    printf("\nVetor B\n");
    for (i = 0; i < TAM; i++) {
        printf("\tDigite o %dº caracter: ", i + 1);
        scanf(" %c", &b[i]);
    }


    for (i = 0; i < TAM; i++) {
        aux = a[i];
        a[i] = b[p];
        b[p] = aux;
        p--;
    }

    printf("\nVetor A após a troca: ");
    for (i = 0; i < TAM; i++) {
        printf("%c | ", a[i]);
    }

    printf("\nVetor B após a troca: ");
    for (i = 0; i < TAM; i++) {
        printf("%c | ", b[i]);
    }
    printf("\n");
}
