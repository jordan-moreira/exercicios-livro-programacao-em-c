#include <stdio.h>

int main() {
    int n[15], p[5], imp[5];
    int i, j, k;
    int p1 = 0;
    int p2 = 0;

    for (i = 0; i < 15; i++) {
        printf("Digite o %dº número: ", i + 1);
        scanf("%d", &n[i]);

        if (n[i] % 2 == 0) {
            p[p1] = n[i];
            p1++;
        } else {
            imp[p2] = n[i];
            p2++;
        }

        if (p1 == 5) { //Verificar se o vetor do núemeros pares está cheio
            printf("\nVetor dos números pares cheio! Esvaziar: ");
            for (j = 0; j < 5; j++) {
                printf("%d | ", p[j]);
                p1 = 0;
            }
            printf("\n\n");
        }
        if (p2 == 5) { //Verificar se o vetor do núemeros impares está cheio
            printf("\nVetor dos números impares cheio! Esvaziar: ");
            for (k = 0; k < 5; k++) {
                printf("%d | ", imp[k]);
                p2 = 0;
            }
            printf("\n\n");
        }
    }
}
