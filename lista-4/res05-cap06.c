#include <stdio.h>
#define T 3

int main() {
    int vet1[T], vet2[T], uniao_repetidos[T * 2], cont;
    int i, j, p = 0;

    printf("Vetor 1 \n");
    for (i = 0; i < T; i++) {
        printf("\tV[%d] = ", i);
        scanf("%d", &vet1[i]);

        if (i == T - 1) {
            printf("\n\n");
        }
    }

    printf("Vetor 2 \n");
    for (i = 0; i < T; i++) {
        printf("\tV2[%d] = ", i);
        scanf("%d", &vet2[i]);

        if (i == T - 1) {
            printf("\n\n");
        }
    }

    //União de X e Y sem repetições
    for (i = 0; i < T; i++) {
        cont = 0;

        for (j = 0; j < T; j++) {
            if (vet1[i] == vet2[j]) {
                cont++;
            }
        }

        if (cont > 0) {
            uniao_repetidos[p] = vet1[i];
            p++;
        }
    }
    if (p > 0) {
        printf("União X & Y (Sem repetições): ");
        for (i = 0; i < p; i++) {
            printf("%d ", uniao_repetidos[i]);
        }
    } else {
        printf("Todos os valroes diferentes.");
    }

    int diferenca[T * 2];
    p = 0;

    for (i = 0; i < T; i++) {
        cont = 0;
        for (j = 0; j < T; j++) {
            if (vet1[i] != vet2[j]) {
                cont++;
            }
        }

        if (cont > 0) {
            diferenca[p] = vet1[i];
            printf("dife: %d \n",diferenca[p]);
            p++;
        }
    }

    printf("\n\nDiferença X & Y (Sem repetições): ");
    for (i = 0; i < p; i++) {
        printf("%d ", diferenca[i]);
    }

}
