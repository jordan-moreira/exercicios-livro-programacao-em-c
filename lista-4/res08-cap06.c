#include <stdio.h>

int main() {
    int x[5];
    int y[5];
    int u[10];
    int i, j, aux;

    //Primeiro vetor
    printf("Vetor X: \n");
    for (i = 0; i < 5; i++) {
        printf("\tDigite o %dº número: ", i + 1);
        scanf("%d", &x[i]);
        u[i] = x[i];
    }
    //Impressão do vetor X
    printf("\nNúmeros do vetor X: ");
    for (i = 0; i < 5; i++) {
        printf("%d | ", x[i]);
    }
    //Ordenação vetor X
    for (i = 0; i < 5; i++) {
        for (j = i + 1; j < 5; j++) {
            if (x[i] > x[j]) {
                aux = x[i];
                x[i] = x[j];
                x[j] = aux;
            }
        }
    }
    //Impressão do vetor X em ordem crescente
    printf("\nVetor X em ordem crescente: ");
    for (i = 0; i < 5; i++) {
        printf("%d | ", x[i]);
    }


    //Segundo vetor
    printf("\n\nVetor Y: \n");
    for (i = 0; i < 5; i++) {
        printf("\tDigite o %dº número: ", i + 1);
        scanf("%d", &y[i]);
        u[i + 5] = y[i];
    }

    //Impressão do vetor Y
    printf("\nNúmeros do vetor Y: ");
    for (i = 0; i < 5; i++) {
        printf("%d | ", y[i]);
    }
    //Ordenação vetor X
    for (i = 0; i < 5; i++) {
        for (j = i + 1; j < 5; j++) {
            if (y[i] > y[j]) {
                aux = y[i];
                y[i] = y[j];
                y[j] = aux;
            }
        }
    }
    printf("\nVetor y em ordem crescente: ");
    for (i = 0; i < 5; i++) {
        printf("%d | ", y[i]);
    }

    printf("\n\nUnião dos vetores X e Y: ");
    for (i = 0; i < 10; i++) {
        printf("%d | ", u[i]);
    }

    for (i = 0; i < 10; i++) {
        for (j = i + 1; j < 10; j++) {
            if (u[i] > u[j]) {
                aux = u[i];
                u[i] = u[j];
                u[j] = aux;
            }
        }
    }

    printf("\nUnião dos vetores em ordem crescente: ");
    for (j = 0; j < 10; j++) {
        printf("%d | ",u[j]);
    }
    
}
