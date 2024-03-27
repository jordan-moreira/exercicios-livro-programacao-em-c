#include <stdio.h>
#define TAM 15

typedef struct
{
    int idade;
    char sexo;
    float salario;
    int QuantFilhos;
} Dados;

void LerDados(Dados Habitantes[])
{
    int i;

    for (i = 0; i < TAM; i++)
    {
        printf("%dº Pessoa \n", i + 1);
        printf("\tIdade: ");
        scanf("%d", &Habitantes[i].idade);

        printf("\tSexo: ");
        scanf(" %c", &Habitantes[i].sexo);

        printf("\tSalario: ");
        scanf("%f", &Habitantes[i].salario);

        printf("\tQuantidade de filhos: ");
        scanf("%d", &Habitantes[i].QuantFilhos);

        printf("\n");
    }
}

float CalcularMediaSalario(Dados Habitantes[])
{
    int i;
    float soma = 0, media;

    for (i = 0; i < TAM; i++)
    {
        soma += Habitantes[i].salario;
    }

    media = soma / TAM;
    return media;
}

int MenorIdade(Dados Habitantes[])
{
    int i;
    int MenorIdade = Habitantes[0].idade, MaiorIdade = Habitantes[0].idade;

    for (i = 1; i < TAM; i++)
    {
        if (Habitantes[i].idade < MenorIdade)
        {
            MenorIdade = Habitantes[i].idade;
        }
    }
    return MenorIdade;
}

int MaiorIdade(Dados Habitantes[])
{
    int i;
    int MaiorIdade = Habitantes[0].idade;

    for (i = 1; i < TAM; i++)
    {
        if (Habitantes[i].idade > MaiorIdade)
        {
            MaiorIdade = Habitantes[i].idade;
        }
    }
    return MaiorIdade;
}

int Mulheres_Com_3_Filhos(Dados Habitantes[])
{

    int c = 0, i;

    for (i = 0; i < TAM; i++)
    {
        if (Habitantes[i].sexo == 'f' || Habitantes[i].sexo == 'F')
        {
            if (Habitantes[i].QuantFilhos == 3)
            {
                if (Habitantes[i].salario <= 500)
                {
                    c++;
                }
            }
        }
    }

    return c;
}

int main()
{

    Dados Habitantes[TAM];
    LerDados(Habitantes);

    printf("\nRELATORIO \n");
    printf("\t A media de salario dos moradores é de R$ %.2f. \n", CalcularMediaSalario(Habitantes));
    printf("\t A menor idade entre os habitantes é de %d anos. \n", MenorIdade(Habitantes));
    printf("\t A menor idade entre os habitantes é de %d anos. \n", MaiorIdade(Habitantes));
    printf("\t Existe %d mulheres com 3 filhos com salário de até R$ 500,00. \n", Mulheres_Com_3_Filhos(Habitantes));
}