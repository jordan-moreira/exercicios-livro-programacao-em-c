#include <stdio.h>
#define TAM 5

int main()
{
    char nome_produto[TAM][40];
    float precos[TAM], soma, media;
    int indice_prod_50e100[TAM];
    int cont = 0, cont2 = 0, cont3 = 0, p = 0, i;

    for (i = 0; i < TAM; i++)
    {
        printf("Nome do produto: ");
        setbuf(stdin, NULL);
        gets(nome_produto[i]);
        printf("Preço do %s: ", nome_produto[i]);
        scanf("%f", &precos[i]);
        printf("\n");

        if (precos[i] < 50)
        {
            cont++;
        }
        else if (precos[i] >= 50 && precos[i] <= 100)
        {
            indice_prod_50e100[cont2] = i;
            cont2++;
        }
        else if (precos[i] > 100)
        {
            soma += precos[i];
            cont3++;
        }
    }

    if (cont > 0)
    {
        printf("A quantidade de produtos com preço inferior a R$ 50.00 é de %d. \n", cont);
    }
    else
    {
        printf("\nNenhum produto com preço inferior a R$ 50.00. \n");
    }

    if (cont2 > 0)
    {
        printf("\nNome dos produtos com preço entre R$ 50.00 e R$ 100.00: \n");
        for (i = 0; i < cont2; i++)
        {
            printf("\t %dº. %s \n", i + 1, nome_produto[indice_prod_50e100[p]]);
            p++;
        }
    }
    else
    {
        printf("\nNenhum produto com preço entre R$ 50.00 e R$ 100.00. \n");
    }

    if (soma > 0)
    {
        printf("\nA média dos produtos com preço superior a R$ 100.00 é R$ %.2f \n", media = soma / cont3);
    }
    else
    {
        printf("\nNenhum produto com preço superior a R$ 100.00. \n");
    }
}
