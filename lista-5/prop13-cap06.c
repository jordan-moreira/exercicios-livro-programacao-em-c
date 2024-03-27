#include <stdio.h>
#define TAM 8

int main()
{
    char nome[TAM][30];
    int i;
    float nota[TAM], soma = 0, media;

    for (i = 0; i < TAM; i++)
    {
        printf("Digite o nome do %dº aluno: ", i + 1);
        setbuf(stdin, NULL);
        gets(nome[i]);
        printf("Digite a nota de %s: ", nome[i]);
        scanf("%f", &nota[i]);
        soma += nota[i];
        printf("\n");
    }

    printf("RELAÓRIOS DE NOTAS\n");
    for (i = 0; i < TAM; i++)
    {
        printf("%s: %.2f \n", nome[i], nota[i]);
    }

    printf("\nMédia da classe: %.2f", media = soma / TAM);
}
