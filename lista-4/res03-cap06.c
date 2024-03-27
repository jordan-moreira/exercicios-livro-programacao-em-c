#include <stdio.h>

int main() {
    int v1[10];
    int v2[10];
    int v3[20];
    int i, j, k;

    printf("Segundo vetor \n");
    for (i = 0; i < 10; i++) {
        printf("\t Digite um valor para a posição %d: ", i);
        scanf("%d", &v1[i]);
        v3[i] = v1[i];
    }
    printf("Segundo vetor \n");
    for (i = 0; i < 10; i++) {
        printf("\t Digite um valor para a posição %d: ", i);
        scanf("%d", &v1[i]);
        v3[i + 10] = v1[i];
    }

    printf("\n Intersecção dos Vetor 1 e do Vetor 2: \n");
    for (i = 0; i < 20; i++) {
        printf("%d | ", v3[i]);
    }
}
