#include <stdio.h>
#define TAM 10

int main()
{
    char nome[TAM][40];
    int i, c = 0, cod[TAM], indice_npreco[TAM];
    float preco[TAM], n_preco;

    for (i = 0; i < TAM; i++)
    {
        printf("%dº Produto\n", i + 1);
        printf("Nome do produto: ");
        setbuf(stdin, NULL);
        gets(nome[i]);
        printf("Codigo: ");
        scanf("%d", &cod[i]);
        printf("Preço: ");
        scanf("%f", &preco[i]);
        printf("\n");
    }

    printf("RELATÓRIO\n\n");
    for (i = 0; i < TAM; i++)
    {
        printf("%dº Produto\n", i + 1);
        printf("\tNome do produto: %s \n", nome[i]);
        printf("\tCodigo: %d \n", cod[i]);
        printf("\tPreço: R$ %.2f. \n", preco[i]);

        c = 0;
        if (cod[i] % 2 == 0 && preco[i] > 1000)
        {
            n_preco = preco[i] * 1.20;
            c++;
        }
        else if (cod[i] % 2 == 0 && preco[i] < 1000)
        {
            n_preco = preco[i] * 1.15;
            c++;
        }
        else
        {
            n_preco = preco[i] * 1.10;
            c++;
        }
        if (c > 0)
        {
            printf("\tNovo preco: R$ %.2f. \n", n_preco);
        }
    }
}
