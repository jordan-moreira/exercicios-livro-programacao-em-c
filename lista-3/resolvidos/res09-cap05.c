#include <stdio.h>

int main()
{
    float n1, n2, media, media_turma;
    int i;
    int cont_aprovado, cont_exame, cont_rep;

    printf("Calculo de media de alunos \n\n");

    for (i = 1; i <= 6; i++)
    {
        printf("Aluno %d \n", i);

        printf("Digite a primeira nota: ");
        scanf("%f", &n1);
        printf("Digite a segunda nota: ");
        scanf("%f", &n2);

        media = n1 + n2 / 2;
        media_turma = media_turma + media;

        if (media < 3)
        {
            printf("Voce foi reprovado \n\n");
            cont_rep++;
        }
        else if (media >= 3 && media <= 7)
        {
            printf("Voce está em examen.\n\n");
            cont_exame++;
        }
        else if (media > 7)
        {
            printf("Voce foi aprovado.\n\n");
            cont_aprovado++;
        }
    }
    media_turma = media_turma / 6;

    printf("Total de alunos reprovados: %d \n", cont_rep);
    printf("Total de alunos em exame: %d \n", cont_exame);
    printf("Total de alunos aprovados: %d \n", cont_aprovado);
    printf("A media da turma e de %.2f pontos. \n", media_turma);
}