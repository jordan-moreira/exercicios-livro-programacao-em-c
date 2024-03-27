#include <stdio.h>

int main() {
    int opniao, i, contO, contR, contB, somaO, idade;

    i = 0;
    contO = 0;
    contB = 0;
    contR = 0;

    printf("Análise de cinema \n");

    for (i = 1; i <= 15; i++) {
        printf("%dº Pessoa \n", i);
        printf("Digite sua idade: ");
        scanf("%d", &idade);
        printf("   O que achou do filme(1. Regular | 2. Bom | 3. Otimo): ");
        scanf("%d", &opniao);

        switch (opniao) {
            case 1: // REGULAR
                contR++;
                break;

            case 2: // BOM
                contB++;
                break;

            case 3: // OTIMO
                contO++;
                somaO += idade;
                break;
        }

    }

}
