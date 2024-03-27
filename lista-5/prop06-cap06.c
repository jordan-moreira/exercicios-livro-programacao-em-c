#include <stdio.h>
#define TAM 10

int main()
{
    char nome[TAM][40];
    float per_com[TAM], vendas_individual[TAM], total_vendas = 0, salario[TAM];
    float maior_sal = 0, menor_sal = 99999999;
    int i, indice_maior = 0, indice_menor = 0;

    for (i = 0; i < TAM; i++)
    {
        printf("%dº Vendedor\n", i + 1);
        printf("Nome: ");
        setbuf(stdin, NULL);
        gets(nome[i]);
        printf("Total de vendas: ");
        scanf("%f", &vendas_individual[i]);
        printf("Percentual de comissão: ");
        scanf("%f", &per_com[i]);
        salario[i] = vendas_individual[i] * (per_com[i] / 100);
        total_vendas += vendas_individual[i];
        printf("\n");
    }

    printf("RELATÓRIo\n");
    for (i = 0; i < TAM; i++)
    {
        printf("\n%dº Funcionário\n", i + 1);
        printf("\tNome do funcionário: %s\n", nome[i]);
        printf("\tTotal a receber: R$ %.2f\n", salario[i]);

        if (salario[i] > maior_sal)
        {
            maior_sal = salario[i];
            indice_maior = i;
        }

        if (salario[i] < menor_sal)
        {
            menor_sal = salario[i];
            indice_menor = i;
        }
    }

    printf("\nTotal de vendas de todos os vendedores: R$ %.2f. \n", total_vendas);
    printf("%s recebe o maior valor, que é de R$ %.2f. \n", nome[indice_maior], maior_sal);
    printf("%s recebe o menor valor, que é de R$ %.2f. \n", nome[indice_menor], menor_sal);
}