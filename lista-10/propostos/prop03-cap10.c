#include <stdio.h>

#define NUM_HABITANTES 50

struct Habitante
{
    char sexo;
    float altura;
    int idade;
    char corOlhos;
};

float calcularMediaIdadeOlhosCastanhosAlturaSuperior(struct Habitante habitantes[])
{
    int somaIdade = 0;
    int numPessoas = 0;

    for (int i = 0; i < NUM_HABITANTES; i++)
    {
        if (habitantes[i].corOlhos == 'C' && habitantes[i].altura > 1.60)
        {
            somaIdade += habitantes[i].idade;
            numPessoas++;
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
    struct Habitante habitantes[NUM_HABITANTES];

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

    float mediaIdadeOlhosCastanhosAlturaSuperior = calcularMediaIdadeOlhosCastanhosAlturaSuperior(habitantes);
    int maiorIdade = encontrarMaiorIdade(habitantes);
    int quantidadeMulheresIdadeAlturaOlhos = calcularQuantidadeMulheresIdadeAlturaOlhos(habitantes);
    float percentualHomens = calcularPercentualHomens(habitantes)
        printf("Media de idade das pessoas com olhos castanhos e altura superior a 1,60 m: %.2f anos\n", mediaIdadeOlhosCastanhosAlturaSuperior);
    printf("Maior idade entre os habitantes: %d anos\n", maiorIdade);
    printf("Quantidade de individuos do sexo feminino com idade entre 20 e 45 anos ou que tenham olhos verdes e altura inferior a 1,70 m: %d\n", quantidadeMulheresIdadeAlturaOlhos);
    printf("Percentual de homens: %.2f%%\n", percentualHomens);

    return 0;
}
