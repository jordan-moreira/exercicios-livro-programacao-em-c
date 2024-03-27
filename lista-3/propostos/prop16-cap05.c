#include <stdio.h>

int main() {
    int idade, soma, i;
    float media;

    i = 0;
    soma = 0;

    do {
        printf("Digite sua idade: ");
        scanf("%d", &idade);

        soma += idade;

        if (idade != 0) {
            i++;
        }
    } while (idade != 0);

    if (i > 0) {
        media = soma / i;
        printf("\n A media das idades digitadas é: %.1f. \n", media);
    } else {
        printf("Nenhuma idade digitada. \n");
    }
}
