#include <stdio.h>

#define ALUNOS 8
#define DISCIPLINAS 5

void preencherIdades(int vetorIdades[])
{
    printf("Digite as idades dos alunos:\n");
    for (int i = 0; i < ALUNOS; i++)
    {
        printf("Aluno %d: ", i + 1);
        scanf("%d", &vetorIdades[i]);
    }
}

void preencherCodigosDisciplinas(int vetorCodigos[])
{
    printf("Digite os códigos das disciplinas:\n");
    for (int i = 0; i < DISCIPLINAS; i++)
    {
        printf("Disciplina %d: ", i + 1);
        scanf("%d", &vetorCodigos[i]);
    }
}

void preencherMatrizProvas(int matrizProvas[][DISCIPLINAS])
{
    printf("Digite a quantidade de provas feitas por cada aluno em cada disciplina:\n");
    for (int i = 0; i < ALUNOS; i++)
    {
        for (int j = 0; j < DISCIPLINAS; j++)
        {
            printf("Aluno %d, Disciplina %d: ", i + 1, j + 1);
            scanf("%d", &matrizProvas[i][j]);
        }
    }
}

void mostrarInformacoes(int vetorIdades[], int vetorCodigos[], int matrizProvas[][DISCIPLINAS])
{
    printf("\nInformações dos alunos:\n");
    for (int i = 0; i < ALUNOS; i++)
    {
        printf("Aluno %d:\n", i + 1);
        printf("Idade: %d\n", vetorIdades[i]);
        for (int j = 0; j < DISCIPLINAS; j++)
        {
            printf("Disciplina %d - Provas: %d\n", vetorCodigos[j], matrizProvas[i][j]);
        }
        printf("\n");
    }
}

int main()
{
    int vetorIdades[ALUNOS];
    int vetorCodigos[DISCIPLINAS];
    int matrizProvas[ALUNOS][DISCIPLINAS];

    preencherIdades(vetorIdades);
    preencherCodigosDisciplinas(vetorCodigos);
    preencherMatrizProvas(matrizProvas);
    mostrarInformacoes(vetorIdades, vetorCodigos, matrizProvas);

    return 0;
}
