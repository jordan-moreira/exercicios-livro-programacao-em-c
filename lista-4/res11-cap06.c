#include <stdio.h>

int main() {
    int maior_m, menor_m;
    int m, i, j, k;
    float maior_t, menor_t, temp[12];

    for (i = 0; i < 12; i++) {
        printf("Digite a temperatura média do mês %d: ", i + 1);
        scanf("%f", &temp[i]);
        maior_m = temp[i];
        menor_m = temp[i];
    }
}
