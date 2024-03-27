#include <stdio.h>
#define DIM 2

typedef struct
{
    char sexo;
    char cor_cabelo;
    char cor_olhos;
    int idade;
} Dados;

Dados Habitantes[DIM];

void LeituraDados()
{
    int i;
    for (i = 0; i < DIM; i++)
    {
        printf("%d° Habitante \n", i + 1);

        printf("\tSexo (M. Masculino ou F. Feminino): ");
        scanf(" %c", &Habitantes[i].sexo);

        printf("\tCor dos olhos (A. Azul, ou C. Castanho): ");
        scanf(" %c", &Habitantes[i].cor_olhos);

        printf("\tCor do cabelo (L. Louro, C. Castanho ou P.Preto): ");
        scanf(" %c", &Habitantes[i].cor_cabelo);

        printf("\tIdade: ");
        scanf("%d", &Habitantes[i].idade);

        printf("\n");
    }
}

float Media_Idade_Olhos_Castanhos(Dados hab[])
{
    int i, cont = 0;
    float soma = 0, media;

    for (i = 0; i < DIM; i++)
    {
        if (hab[i].cor_olhos == 'C' && hab[i].cor_cabelo == 'P')
        {
            soma += hab[i].idade;
            cont++;
        }
    }

    media = soma / cont;
    return media;
}

int Maior_Idade(Dados hab[])
{
    int i, maior = hab[0].idade;

    for (i = 1; i < DIM; i++)
    {
        if (hab[i].idade > maior)
        {
            maior = hab[i].idade;
        }
    }
    return maior;
}

int Mulheres_OlhosAzuis_e_Loiras(Dados hab[])
{
    int i, cont = 0;

    for (i = 0; i < DIM; i++)
    {
        if ((hab[i].idade >= 18 && hab[i].idade <= 35) && (hab[i].sexo == 'F'))
        {
            cont++;
        }
    }

    return cont;
}

int main()
{
    LeituraDados();
    printf("--------------------------------------------------------------\n");
    printf("RELATÓRIO \n");
    printf("A media de idade das pessoas com olhos castanhos é de %.1f anos. \n", Media_Idade_Olhos_Castanhos(Habitantes));
    printf("A maior idade entre os habitantes é %d anos. \n", Maior_Idade(Habitantes));

    if (Mulheres_OlhosAzuis_e_Loiras(Habitantes) > 0)
    {
        printf("Existe %d mulheres entre 18 e 35 anos com olhos azuis e loiras. \n", Mulheres_OlhosAzuis_e_Loiras(Habitantes));
    }
    else
    {
        printf("Não existe nenhuma mulher entre 18 e 35 anos com olhos azuis e loiras. \n");
    }
}