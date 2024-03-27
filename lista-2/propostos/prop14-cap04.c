#include <stdio.h>

int main()
{
    float sal;

    printf("Aumento de salario \n\n");
    printf("Digite seu salario atual: ");
    scanf("%f", &sal);

    if (sal <= 300)
    {
        printf("Percentual de aumento de 50 porcento \n");
        printf("Seu novo salario sera de R$ %.2f", sal = sal * 1.5);
    }
    else if (sal > 300 && sal <= 500)
    {
        printf("Percentual de aumento de 40 porcento \n");
        printf("Seu novo salario sera de R$ %.2f", sal = sal * 1.4);
    }
    else if (sal > 500 && sal <= 700)
    {
        printf("Percentual de aumento de 30 porcento \n");
        printf("Seu novo salario sera de R$ %.2f", sal = sal * 1.3);
    }
    else if (sal > 700 && sal <= 800)
    {
        printf("Percentual de aumento de 20 porcento \n");
        printf("Seu novo salario sera de R$ %.2f", sal = sal * 1.2);
    }
    else if (sal > 800 && sal <= 1000)
    {
        printf("Percentual de aumento de 10 porcento \n");
        printf("Seu novo salario sera de R$ %.2f", sal = sal * 1.1);
    }
    else if (sal > 1000)
    {
        printf("Percentual de aumento de 5 porcento \n");
        printf("Seu novo salario sera de R$ %.2f", sal = sal * 1.05);
    }
}
