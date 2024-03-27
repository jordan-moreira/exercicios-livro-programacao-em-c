#include <stdio.h>
#define TAM 7

int main()
{
    char nome[TAM][40];
    float media[TAM], maior_media = 0;
    int i, indice_maior;

    for (i = 0; i < TAM; i++)
    {
        printf("%dº Aluno\n", i + 1);
        printf("Nome: ");
        setbuf(stdin, NULL);
        gets(nome[i]);
        printf("Media final: ");
        scanf("%f", &media[i]);
        printf("\n");

        if (media[i] > maior_media)
        {
            maior_media = media[i];
            indice_maior = i;
        }
    }

    printf("A maior média foi de %.2f pontos, do(a) aluno(a) %s\n", maior_media, nome[indice_maior]);

    printf("\nAlunos abaixo da média: \n");
    for (i = 0; i < TAM; i++)
    {
        if (media[i] < 7)
        {
            printf("\t%s está abaixo da média.Para ele ser aprovado precisa tirar mais de 5 no exame final.\n", nome[i]);
        }
    }
}