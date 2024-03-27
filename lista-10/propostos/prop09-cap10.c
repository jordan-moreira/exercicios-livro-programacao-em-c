#include <stdio.h>

#define NUM_HABITANTES 20

struct Habitante
{
    int idade;
    char sexo;
    float rendaFamiliar;
    int numFilhos;
};

float calcularMediaSalario(struct Habitante habitantes[])
{
    float somaSalarios = 0.0;

    for (int i = 0; i < NUM_HABITANTES; i++)
    {
        somaSalarios += habitantes[i].rendaFamiliar;
    }

    return somaSalarios / NUM_HABITANTES;
}

int encontrarMenorIdade(struct Habitante habitantes[])
{
    int menorIdade = habitantes[0].idade;

    for (int i = 1; i < NUM_HABITANTES; i++)
    {
        if (habitantes[i].idade < menorIdade)
        {
            menorIdade = habitantes[i].idade;
        }
    }

    return menorIdade;
}

int encontrarMaiorIdade(struct Habitante habitantes[])
{
    int maiorIdade = habitantes[0].idade;

    for (int i = 1; i < NUM_HABITANTES; i++)
    {
        if (habitantes[i].idade > maiorIdade)
        {
            maiorIdade = habitantes[i].idade;
        }
    }

    return maiorIdade;
}

int contarMulheresMaisDoisFilhosRendaInferior(struct Habitante habitantes[])
{
    int numMulheres = 0;

    for (int i = 0; i < NUM_HABITANTES; i++)
    {
        if (habitantes[i].sexo == 'F' || habitantes[i].sexo == 'f')
        {
            if (habitantes[i].numFilhos > 2 && habitantes[i].rendaFamiliar < 600.00)
            {
                numMulheres++;
            }
        }
    }

    return numMulheres;
}

int main()
{
    struct Habitante habitantes[NUM_HABITANTES];

    printf("Pesquisa entre habitantes:\n");
    for (int i = 0; i < NUM_HABITANTES; i++)
    {
        printf("Dados do habitante %d:\n", i + 1);
        printf("Idade: ");
        scanf("%d", &habitantes[i].idade);

        printf("Sexo (M/F): ");
        scanf(" %c", &habitantes[i].sexo);

        printf("Renda familiar: R$ ");
        scanf("%f", &habitantes[i].rendaFamiliar);

        printf("Numero de filhos: ");
        scanf("%d", &habitantes[i].numFilhos);

        printf("\n");
    }

    float mediaSalario = calcularMediaSalario(habitantes);
    int menorIdade = encontrarMenorIdade(habitantes);
    int maiorIdade = encontrarMaiorIdade(habitantes);
    int quantidadeMulheresMaisDoisFilhosRendaInferior = contarMulheresMaisDoisFilhosRendaInferior(habitantes);

    printf("Resultados da pesquisa entre habitantes:\n");
    printf("Media de salario: R$ %.2f\n", mediaSalario);
    printf("Menor idade: %d anos\n", menorIdade);
    printf("Maior idade: %d anos\n", maiorIdade);
    printf("Quantidade de mulheres com mais de dois filhos e renda familiar inferior a R$ 600,00: %d\n", quantidadeMulheresMaisDoisFilhosRendaInferior);

    return 0;
}
