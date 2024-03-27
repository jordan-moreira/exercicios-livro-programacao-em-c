#include <stdio.h>


int main() {
    int x[10], y[5], pares[10], impares[10];
    int contP = 0, contI = 0, somaY = 0;
    int i, r;

    int p1 = 0;
    int p2 = 0;

    for (i = 0; i < 10; i++) {
        printf("Digite o %d número: ", i + 1);
        scanf("%d", &x[i]);
        

        if (x[i] % 2 == 0) {
            pares[p1] = x[i];
            p1++;
            contP++;
        } else {
            impares[p2] = x[i];
            contI++;
            p2++;
        }
    }

    printf("\nSegundo vetor\n");
    for (i = 0; i < 5; i++) {
        printf("Digite o %dº valor: ", i+1);
        scanf("%d", &y[i]);
        somaY += y[i];
    }

    printf("\n\t1º Vetor resultantes: ");
    for (i = 0; i < contP; i++) {
        printf("%d | ", r = pares[i] + somaY);
    }

    printf("\n\t2º Vetor resultantes: ");
    for (i = 0; i < contI; i++) {
        printf("%d | ", r = impares[i] + somaY);
    }
    printf("\n");

}
