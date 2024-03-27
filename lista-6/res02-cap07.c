#include <stdio.h>
#define LIN 10
#define COL 3

int main()
{
    float notas[LIN][COL], menor = 100;
    int i, j, indice_menor, cont_prova1 = 0, cont_prova2 = 0, cont_prova3 = 0;

    for (i = 0; i < LIN; i++)
    {
        printf("%dºAluno \n", i + 1);
        for (j = 0; j < COL; j++)
        {
            printf("\tNota %d: ", j + 1);
            scanf("%f", &notas[i][j]);
        }
    }

    printf("Menores notas de cada aluno: \n");
    for (i = 0; i < LIN; i++)
    {
        menor = 100;
        for (j = 0; j < COL; j++)
        {
            if (notas[i][j] < menor)
            {
                menor = notas[i][j];
                indice_menor = j;
            }
        }
        printf("\nAluno %d: \n", i + 1);
        printf("Nota: %.2f \n", menor);
        printf("Prova: %d \n", indice_menor + 1);

        if (indice_menor == 0)
        {
            cont_prova1++;
        }
        else if (indice_menor == 1)
        {
            cont_prova2++;
        }
        else
        {
            cont_prova3++;
        }
    }

    printf("\nQuantidade de alunos que tiraram a menor nota em cada uma das provas: \n");
    printf("\tProva 1: %d \n", cont_prova1);
    printf("\tProva 2: %d \n", cont_prova2);
    printf("\tProva 3: %d \n", cont_prova3);
}