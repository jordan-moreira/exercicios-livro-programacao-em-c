#include <stdio.h>

int main()
{
    float media, nota1, nota2;
    printf("Calculo de média \n\n");

    printf("Digite a 1º nota: ");
    scanf("%f", &nota1);
    printf("Digite a 2º nota: ");
    scanf("%f", &nota2);
    printf("\n \n");

    media = nota1 + nota2 / 2;

    if (media >= 0 && media < 3)
    {
        printf("Você está reprovado \n");
        printf("Sua média foi de %.2f pontos.", media);
    }

    else if (media >= 3 && media < 7)
    {
        printf("Você está em exame \n");
        printf("Sua média foi de %.2f pontos.", media);
    }

    else if (media >= 7 && media <= 10)
    {
        printf("Você está aprovado! \n");
        printf("Sua média foi de %.2f pontos.", media);
    }

    else
    {
        printf("Notas inválidas. \n");
    }
}