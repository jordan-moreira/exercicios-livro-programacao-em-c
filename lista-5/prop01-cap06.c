#include <stdio.h>

int main() {
    int vet[6], par[6], impar[6], PP = 0, PI = 0;
    int i, cont_par = 0, cont_impar = 0;

    for (i = 0; i < 6; i++) {
        printf("Digite o %dº número: ", i + 1);
        scanf("%d", &vet[i]);
    }

    for (i = 0; i < 6; i++) {
        if (vet[i] % 2 == 0) {
            par[PP] = vet[i];
            PP++;
            cont_par++;
        } else {
            impar[PI] = vet[i];
            PI++;
            cont_impar++;
        }
    }
    
    if (cont_par > 0) {
        printf("\nNúmeros pares: ");
        for (PP = 0; PP < cont_par; PP++) {
            printf("%d | ", par[PP]);
        }
        printf("\nForam digitados %d números pares. \n", cont_par);
    } else {
        printf("\nNenhum número par digitado. \n");
    }

    if (cont_impar > 0) {
        printf("\nNúmeros impares: ");
        for (PI = 0; PI < cont_impar; PI++) {
            printf("%d | ", impar[PI]);
        }
        printf("\nForam digitados %d números pares. \n", cont_impar);
    } else {
        printf("\nNenhum número impar digitado. \n");
    }
}