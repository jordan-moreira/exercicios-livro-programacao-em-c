#include <stdio.h>

int main() {
    int n[10];
    int i, cont = 0;

    for (i = 0; i < 10; i++) {
        printf("Digite o %dº número: ", i + 1);
        scanf("%d", &n[i]);
    }
    printf("\n");
    
    for (i = 0; i < 10; i++) {
        if (n[i] > 50) {
            printf("Número %d na posição %d é maior que 50.\n", n[i], i + 1);
            cont++;
        }
    }

    if (cont == 0) {
        printf("\nNenhum número digitado é maior que 50. \n");
    }
}
