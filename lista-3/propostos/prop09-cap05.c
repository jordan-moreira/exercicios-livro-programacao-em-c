#include <stdio.h>

int main()
{
    int idade, soma_idade;
    int i, cont1, cont2;

    float peso, altura, media_idade, porcentagem;

    for (i = 1; i <= 10; i++)
    {
        printf("%dº PESSOA \n", i);
        printf("    Digite sua idade: ");
        scanf("%d", &idade);
        printf("    Digite sua altura: ");
        scanf("%f", &altura);
        printf("    Digite seu peso: ");
        scanf("%f", &peso);

        if (peso > 90 && altura < 1.5)
        {
            cont1++;
        }
        if ((idade >= 10 && idade <= 30) && (altura > 1.9))
        {
            cont2++;
        }

        soma_idade += idade;
        printf("----------------------------------------------------------  \n");
    }

    media_idade = soma_idade / 10;
    porcentagem = cont2 * 100 / 10;

    printf("    Pessoas com mais de 90Kg e altura menor que 1.5 metros: %d. \n", cont1);
    printf("    Media de idade das pessoas: %.2f. \n", media_idade);
    printf("    Porcentagem de pessoas com idade entre 10 e 30 anos e que medem mais de 1,90 m: %.2f.  \n", porcentagem);
}
