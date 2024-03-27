#include <stdio.h>

int main() {
    int n[8], pos[8], neg[8];
    int k, j, i, contP = 0, contN = 0;
    j = 0;
    k = 0;

    for (i = 0; i < 8; i++) {
        printf("Digite o %dº número: ", i + 1);
        scanf("%d", &n[i]);
        if (n[i] > 0) {
            pos[k] = n[i];
            contP++;
            k++;
        } else if (n[i] < 0) {
            neg[j] = n[i];
            contN++;
            j++;
        }
    }

    if (contP > 0) {
        printf("\n\tTodos os números positivos digitados: ");
        for (i = 0; i < contP; i++) {
            printf("%d ", pos[i]);
        }
    } else {
        printf("\n\tNenhum número positivo digitado.");
    }

    if (contN > 0) {
        printf("\n\tTodos os números negativos digitados: ");
        for (i = 0; i < contN; i++) {
            printf("%d ", neg[i]);
        }
    } else {
        printf("\n\tNenhum número positivo digitado.");
    }
}
