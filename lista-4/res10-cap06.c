#include <stdio.h>

int main() {
    char gab[8], res[8];

    float p;

    int num;
    int pontos = 0, aprovados = 0;
    int i, j, k;

    printf("Digite o gabarito \n");
    for (i = 0; i < 8; i++) {
        printf("\tDigite a resposta da questão %d: ", i + 1);
        scanf(" %c", &gab[i]);
    }

    printf("\n\nCORREÇÃO DAS PROVAS \n");
    for (i = 0; i < 10; i++) {
        printf("Aluno %d \n", i);
        printf("\tDigite seu número: ");
        scanf("%d", &num);
        pontos = 0; /*A variavél pontos deve ser zerada a cada novo laço*/

        for (j = 0; j < 8; j++) {
            printf("\tDigite a resposta da questão %d: ", j + 1);
            scanf(" %c", &res[j]);
            if (res[j] == gab[j]) {
                pontos++;
            }
        }

        printf("\nNota do aluno de número %d: %d pontos. \n", num, pontos);
        if (pontos >= 6) { //Calculo da porcentagem de aprovados
            aprovados++;
        }
        printf("------------------------------------------------\n");
    }
    printf("Total de alunos que tirou mais de 6: %d \n", aprovados);
    printf("Porcentagem de alunos aprovados %.2f \n", p = aprovados * 100 / 10);

}
