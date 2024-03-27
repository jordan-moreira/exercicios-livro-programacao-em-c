#include <stdio.h>

#define TURMAS 3
#define ALUNOS 8
#define DISCIPLINAS 4

void imprimirMatriz(float matriz[TURMAS][ALUNOS][DISCIPLINAS])
{
    int i, j, k;
    for (i = 0; i < TURMAS; i++)
    {
        printf("Turma %d:\n", i + 1);
        for (j = 0; j < ALUNOS; j++)
        {
            printf("Aluno %d: ", j + 1);
            for (k = 0; k < DISCIPLINAS; k++)
            {
                printf("%.2f\t", matriz[i][j][k]);
            }
            printf("\n");
        }
        printf("\n");
    }
    printf("\n");
}

int main()
{
    float medias[TURMAS][ALUNOS][DISCIPLINAS];
    float media_geral_aluno[ALUNOS] = {0};
    float media_turma[TURMAS] = {0};
    float media_geral = 0;
    int i, j, k;

    // Leitura das médias das disciplinas de cada aluno em cada turma
    for (i = 0; i < TURMAS; i++)
    {
        printf("Turma %d:\n", i + 1);
        for (j = 0; j < ALUNOS; j++)
        {
            printf("Aluno %d:\n", j + 1);
            for (k = 0; k < DISCIPLINAS; k++)
            {
                printf("Disciplina %d: ", k + 1);
                scanf("%f", &medias[i][j][k]);
                media_geral_aluno[j] += medias[i][j][k]; // Cálculo da média geral de cada aluno
                media_turma[i] += medias[i][j][k];       // Cálculo da média de cada turma
                media_geral += medias[i][j][k];          // Cálculo da média geral
            }
            media_geral_aluno[j] /= DISCIPLINAS; // Cálculo da média geral de cada aluno
            media_turma[i] /= ALUNOS;            // Cálculo da média de cada turma
            printf("\n");
        }
    }

    // Impressão da matriz de médias
    printf("Matriz de medias:\n");
    imprimirMatriz(medias);

    // Impressão da média geral de cada aluno
    printf("Media geral de cada aluno:\n");
    for (i = 0; i < ALUNOS; i++)
    {
        printf("Aluno %d: %.2f\n", i + 1, media_geral_aluno[i]);
    }
    printf("\n");

    // Impressão da média de cada turma
    printf("Media de cada turma:\n");
    for (i = 0; i < TURMAS; i++)
    {
        printf("Turma %d: %.2f\n", i + 1, media_turma[i]);
    }
    printf("\n");

    return 0;
}
