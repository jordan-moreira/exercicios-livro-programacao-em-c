#include <stdio.h>

int main()
{
    float sal;

    printf("Calculo de salario \n\n");
    printf("Digite seu salario: ");
    scanf("%f", &sal);

    if (sal <= 300)
    {
        printf("Voce tera 35%% de aumento. \n");
        printf("Seu novo salario sera de R$ %.2f.", sal = sal * 1.35);
    }

    else
    {
        printf("Voce tera 15 porcento de aumento. \n");
        printf("Seu novo salario sera de R$ %.2f.", sal = sal * 1.15);
    }
}
