#include <stdio.h>
#include <stdbool.h>

#define NUM_PESSOAS 20
#define NUM_HABITANTES 50

struct Pessoa
{
    float salario;
    int idade;
    int numFilhos;
};

struct Habitante
{
    char sexo;
    float altura;
    int idade;
    char corOlhos;
};

void realizarPesquisaPrefeitura(struct Pessoa pessoas[])
{
    printf("Pesquisa da prefeitura:\n");
    for (int i = 0; i < NUM_PESSOAS; i++)
    {
        printf("Dados da pessoa %d:\n", i + 1);
        printf("Salario: ");
        scanf("%f", &pessoas[i].salario);

        printf("Idade: ");
        scanf("%d", &pessoas[i].idade);

        printf("Numero de filhos: ");
        scanf("%d", &pessoas[i].numFilhos);

        printf("\n");
    }
}

void realizarPesquisaCaracteristicas(struct Habitante habitantes[])
{
    printf("Pesquisa de caracteristicas dos habitantes:\n");
    for (int i = 0; i < NUM_HABITANTES; i++)
    {
        printf("Dados do habitante %d:\n", i + 1);
        printf("Sexo (M/F): ");
        scanf(" %c", &habitantes[i].sexo);

        printf("Altura: ");
        scanf("%f", &habitantes[i].altura);

        printf("Idade: ");
        scanf("%d", &habitantes[i].idade);

        printf("Cor dos olhos (A/V/C): ");
        scanf(" %c", &habitantes[i].corOlhos);

        printf("\n");
    }
}

float calcularMediaSalario(struct Pessoa pessoas[])
{
    float somaSalarios = 0.0;

    for (int i = 0; i < NUM_PESSOAS; i++)
    {
        somaSalarios += pessoas[i].salario;
    }

    return somaSalarios / NUM_PESSOAS;
}

float calcularMediaNumFilhos(struct Pessoa pessoas[])
{
    float somaNumFilhos = 0.0;

    for (int i = 0; i < NUM_PESSOAS; i++)
    {
        somaNumFilhos += pessoas[i].numFilhos;
    }

    return somaNumFilhos / NUM_PESSOAS;
}

float encontrarMaiorSalario(struct Pessoa pessoas[])
{
    float maiorSalario = pessoas[0].salario;

    for (int i = 1; i < NUM_PESSOAS; i++)
    {
        if (pessoas[i].salario > maiorSalario)
        {
            maiorSalario = pessoas[i].salario;
        }
    }

    return maiorSalario;
}

float calcularPercentualMulheresSalarioSuperiorMil(struct Pessoa pessoas[])
{
    int numMulheres = 0;
    int numMulheresSalarioSuperiorMil = 0;

    for (int i = 0; i < NUM_PESSOAS; i++)
    {
        if (pessoas[i].salario > 1000)
        {
            if (pessoas[i].sexo == 'F' || pessoas[i].sexo == 'f')
            {
                numMulheres++;
            }
        }

        return (float)numMulheresSalarioSuperiorMil / numMulheres * 100.0;
    }

    float calcularMediaIdadeOlhosCastanhosAlturaSuperior(struct Habitante habitantes[])
    {
        int somaIdade = 0;
        int numPessoas = 0;

        for (int i = 0; i < NUM_HABITANTES; i++)
        {
            if (habitantes[i].corOlhos == 'C' || habitantes[i].corOlhos == 'c')
            {
                if (habitantes[i].altura > 1.60)
                {
                    somaIdade += habitantes[i].idade;
                    numPessoas++;
                }
            }
        }

        return (float)somaIdade / numPessoas;
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

    int calcularQuantidadeMulheresIdadeAlturaOlhos(struct Habitante habitantes[])
    {
        int quantidadeMulheres = 0;

        for (int i = 0; i < NUM_HABITANTES; i++)
        {
            if ((habitantes[i].sexo == 'F' || habitantes[i].sexo == 'f') &&
                ((habitantes[i].idade >= 20 && habitantes[i].idade <= 45) ||
                 (habitantes[i].corOlhos == 'V' || habitantes[i].corOlhos == 'v') && habitantes[i].altura < 1.70))
            {
                quantidadeMulheres++;
            }
        }

        return quantidadeMulheres;
    }

    float calcularPercentualHomens(struct Habitante habitantes[])
    {
        int numHomens = 0;

        for (int i = 0; i < NUM_HABITANTES; i++)
        {
            if (habitantes[i].sexo == 'M' || habitantes[i].sexo == 'm')
            {
                numHomens++;
            }
        }

        return (float)numHomens / NUM_HABITANTES * 100.0;
    }

    int main()
    {
        struct Pessoa pessoas[NUM_PESSOAS];
        struct Habitante habitantes[NUM_HABITANTES];

        realizarPesquisaPrefeitura(pessoas);
        realizarPesquisaCaracteristicas(habitantes);

        float mediaSalario = calcularMediaSalario(pessoas);
        float mediaNumFilhos = calcularMediaNumFilhos(pessoas);
        float maiorSalario = encontrarMaiorSalario(pessoas);
        float percentualMulheresSalarioSuperiorMil = calcularPercentualMulheresSalarioSuperiorMil(pessoas);
        float mediaIdadeOlhosCastanhosAlturaSuperior = calcularMediaIdadeOlhosCastanhosAlturaSuperior(habitantes);
        int maiorIdade = encontrarMaiorIdade(habitantes);
        int quantidadeMulheresIdadeAlturaOlhos = calcularQuantidadeMulheresIdadeAlturaOlhos(habitantes);
        float percentualHomens = calcularPercentualHomens(habitantes);

        printf("Resultados da pesquisa da prefeitura:\n");
        printf("Media de salario da populacao: R$ %.2f\n", mediaSalario);
        printf("Media do numero de filhos: %.2f\n", mediaNumFilhos);
        printf("Maior salario: R$ %.2f\n", maiorSalario);
        printf("Percentual de mulheres com salario superior a R$ 1.000,00: %.2f%%\n", percentualMulheresSalarioSuperiorMil);

        printf("\n");

        printf("Resultados da pesquisa de caracteristicas dos habitantes:\n");
        printf("Media de idade das pessoas com olhos castanhos e altura superior a 1,60 m: %.2f anos\n", mediaIdadeOlhosCastanhosAlturaSuperior);
        printf("Maior idade entre os habitantes: %d anos\n", maiorIdade);
        printf("Quantidade de individuos do sexo feminino com idade entre 20 e 45 anos ou que tenham olhos verdes e altura inferior a 1,70 m: %d\n", quantidadeMulheresIdadeAlturaOlhos);
        printf("Percentual de homens: %.2f%%\n", percentualHomens);

        return 0;
    }
