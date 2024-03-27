#include <stdio.h>

int main() {
    int t = 9;
    int i, j;
    int n[t];
    int cont = 0;

    for (i = 0; i < t; i++) {
        printf("Digite um número na posição %dº: ", i);
        scanf("%d", &n[i]);
    }
    printf("\n");

    for (i = 0; i < t; i++) {
        cont = 0;
        for (j = 1; j < n[i]; j++) {
            if (n[i] % j == 0) {
                cont++;
            }
        }

        if (cont <= 2 && n[i] != 4) {
            printf("\tO número %d é primo e esta na posição %d. \n", n[i], i);
        } else  {
            printf("\tO número %d não é primo e esta na posição %d. \n", n[i], i);
        }
    }

}