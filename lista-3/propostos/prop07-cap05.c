#include <stdio.h>

int main()
{

    int idade;
    int i, contMaior50, contEntre10e20, contPeso40;
    float altura, peso, somaAltura, mediaAltura, porcentagem;

    contEntre10e20 = 0;
    contMaior50 = 0;
    contPeso40 = 0;

    for (i = 1; i <= 5; i++)
    {
        printf("PESSOA %d \n", i);
        printf("    Digite sua idade: ");
        scanf("%d", &idade);
        printf("    Digite sua altura: ");
        scanf("%f", &altura);
        printf("    Digite seu peso: ");
        scanf("%f", &peso);
        printf("-----------------------------------------------------------\n");

        if (idade > 50)
        {
            contMaior50++;
        }

        if (idade >= 10 && idade <= 20)
        {
            somaAltura = somaAltura + altura;
            contEntre10e20++;
        }

        if (peso < 40)
        {
            contPeso40++;
        }
    }
    mediaAltura = somaAltura / contEntre10e20;

    printf("    Total de pessoas com mais de 50 anos: %d; \n", contMaior50);
    printf("    Media de altura das pessoas entre 10 e 20 anos: %.2f; \n", mediaAltura);
    printf("    Percentual das pessoas com menos de 40 KG: %.1f%%; \n", porcentagem = contPeso40 * 100 / 5);
}
