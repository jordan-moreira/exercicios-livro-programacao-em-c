#include <stdio.h>

#define ALUNOS 15
#define PROVAS 5

void calcularMedia(float notas[ALUNOS][PROVAS], float medias[ALUNOS]) {
    for (int i = 0; i < ALUNOS; i++) {
        float soma = 0;
        for (int j = 0; j < PROVAS; j++) {
            soma += notas[i][j];
        }
        medias[i] = soma / PROVAS;
    }
}

void verificarSituacao(float medias[ALUNOS]) {
    for (int i = 0; i < ALUNOS; i++) {
        printf("Aluno %d: ", i + 1);
        if (medias[i] >= 7) {
            printf("Aprovado\n");
        } else if (medias[i] < 4) {
            printf("Reprovado\n");
        } else {
            printf("Exame\n");
        }
    }
}

float calcularMediaClasse(float medias[ALUNOS]) {
    float soma = 0;
    for (int i = 0; i < ALUNOS; i++) {
        soma += medias[i];
    }
    return soma / ALUNOS;
}

int main() {
    float notas[ALUNOS][PROVAS];
    float medias[ALUNOS];
    char nomes[ALUNOS][50];

    // Leitura das notas dos alunos
    printf("Digite as notas dos alunos:\n");
    for (int i = 0; i < ALUNOS; i++) {
        printf("Aluno %d:\n", i + 1);
        for (int j = 0; j < PROVAS; j++) {
            printf("Prova %d: ", j + 1);
            scanf("%f", &notas[i][j]);
        }
    }

    // Leitura dos nomes dos alunos
    printf("Digite os nomes dos alunos:\n");
    for (int i = 0; i < ALUNOS; i++) {
        printf("Aluno %d: ", i + 1);
        scanf("%s", nomes[i]);
    }

    // Cálculo das médias dos alunos
    calcularMedia(notas, medias);

    // Impressão das médias e situação de cada aluno
    printf("\n");
    for (int i = 0; i < ALUNOS; i++) {
        printf("Aluno: %s\tMédia: %.2f\tSituação: ", nomes[i], medias[i]);
        if (medias[i] >= 7) {
            printf("Aprovado\n");
        } else if (medias[i] < 4) {
            printf("Reprovado\n");
        } else {
            printf("Exame\n");
        }
    }

    // Cálculo da média da classe
    float mediaClasse = calcularMediaClasse(medias);

    // Impressão da média da classe
    printf("\nMédia da classe: %.2f\n", mediaClasse);

    return 0;
}
