#include <stdio.h>


int main() {
    int n[10];
    int d[5];
    int i, j, k;

    printf("Primeiro vetor \n");
    for (i = 0; i < 10; i++) {
        printf("Digite o %dº número: ", i + 1);
        scanf("%d", &n[i]);
    }

    printf("\nSegundo vetor \n");
    for (i = 0; i < 5; i++) {
        printf("Digite o %dº número: ", i + 1);
        scanf("%d", &d[i]);
    }
    printf("\nDivisores\n");
    
    //Veriicar divisores
    for (i = 0; i < 10; i++) {
        for (j = 0; j < 5; j++) {
            if (n[i] % d[j] == 0) {
                printf("\tO número %d é divisivel por %d na posição %d. \n", n[i], d[j], j);
            }
        }
    }

}


