#include <stdio.h>
#define TAM 6

int main()
{
    char nome[TAM][40];
    float n1[TAM], n2[TAM], media_aluno, soma_classe = 0, media_classe;
    float per_aprovado = 0, per_reprovado = 0, per_exame = 0;
    int i, cont_aprovado = 0, cont_reprovado = 0, cont_exame = 0;

    for (i = 0; i < TAM; i++)
    {
        printf("%dº Aluno \n", i + 1);
        printf("Nome: ");
        setbuf(stdin, NULL);
        gets(nome[i]);
        printf("Nota 1: ");
        scanf("%f", &n1[i]);
        printf("Nota 2: ");
        scanf("%f", &n2[i]);
        printf("\n");
    }

    printf("RELATÓRIO\n");
    for (i = 0; i < TAM; i++)
    {
        printf("%dº Aluno\n", i + 1);
        printf("\tNome: %s \n", nome[i]);
        printf("\tMédia: %.2f \n", media_aluno = (n1[i] + n2[i]) / 2);

        if (media_aluno >= 7)
        {
            printf("\tSituação: Aprovado. \n");
            cont_aprovado++;
        }
        else if (media_aluno >= 4 && media_aluno < 7)
        {
            printf("\tAluno em exame. \n");
            cont_reprovado++;
        }
        else
        {
            printf("\tAluno reprovado. \n");
            cont_exame++;
        }

        soma_classe += media_aluno;
    }

    per_aprovado = cont_aprovado * 100 / TAM;
    per_exame = cont_exame * 100 / TAM;
    per_reprovado = cont_reprovado * 100 / TAM;

    if (cont_aprovado > 0)
    {
        printf("\nPercentual de alunos aprovados %.2f. \n", per_aprovado);
    }
    else
    {
        printf("\nNenhum aluno aprovado. \n");
    }

    if (cont_exame > 0)
    {
        printf("Percentual de alunos em exame %.2f. \n", per_exame);
    }
    else
    {
        printf("Nenhum aluno em exame. \n");
    }

    if (cont_exame > 0)
    {
        printf("Percentual de alunos reprovados %.2f. \n", per_reprovado);
    }
    else
    {
        printf("Nenhum aluno reprovado. \n");
    }

    printf("A média da classe será de %.2f pontos. \n", media_classe = soma_classe / TAM);
}