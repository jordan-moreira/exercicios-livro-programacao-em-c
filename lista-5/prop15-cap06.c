#include <stdio.h>
#define TAM 8

int main()
{
    char nome[TAM][40];
    int quant_DVD[TAM], DVD_gratis = 0, i;

    for (i = 0; i < TAM; i++)
    {
        printf("Nome: ");
        setbuf(stdin, NULL);
        gets(nome[i]);
        printf("Quantidade de DVD locados: ");
        scanf("%d", &quant_DVD[i]);
        printf("\n");
    }

    printf("RELATÓRIO\n");
    for (i = 0; i < TAM; i++)
    {
        printf("Nome do cliente: %s \n", nome[i]);

        if (quant_DVD[i] >= 10)
        {
            DVD_gratis = quant_DVD[i] / 10;
            printf("O cliente %s tem direito a %d DVD's gratis. \n\n", nome[i], DVD_gratis);
        }
        else
        {
            printf("O cliente %s não tem direito a nenhum DVD gratis. \n\n", nome[i]);
        }
    }
}
