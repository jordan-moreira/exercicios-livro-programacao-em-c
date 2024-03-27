#include <stdio.h>

int main()
{
    float sal;

    printf("Calculo de aumento de salario. \n\n");
    printf("Digite seu salario: ");
    scanf("%f", &sal);

    if (sal <= 300)
    {
        printf("Aumento de 15 porcento \n");
        printf("Seu novo salario sera de R$ %.2f.", sal = sal * 1.15);
    }
    else if (sal > 300 && sal < 600)
    {
        printf("Aumento de 10 porcento \n");
        printf("Seu novo salario sera de R$ %.2f.", sal = sal * 1.1);
    }
    else if (sal >= 600 && sal <= 900)
    {
        printf("Aumento de 5 porcento \n");
        printf("Seu novo salario sera de R$ %.2f.", sal = sal * 1.05);
    }
    else if (sal > 900)
    {
        printf("Voce nao tem direito ao aumento.");
    }

    printf("\n \n");
}