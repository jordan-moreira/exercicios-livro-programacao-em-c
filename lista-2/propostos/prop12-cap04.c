#include <stdio.h>

int main()
{
    float sal, n_sal, imposto;

    printf("Calculo de salario \n\n");
    printf("Digite o valor de seu salario bruto: ");
    scanf("%f", &sal);

    if (sal <= 350)
    {
        n_sal = (sal + 100);
        imposto = n_sal * 0.07;
        n_sal = n_sal - imposto;
        printf("Seu salario liquido sera de R$ %.2f.", n_sal);
    }
    else if (sal > 350 && sal < 600)
    {
        n_sal = (sal + 75);
        imposto = n_sal * 0.07;
        n_sal = n_sal - imposto;
        printf("Seu salario liquido sera de R$ %.2f.", n_sal);
    }
    else if (sal >= 600 && sal <= 900)
    {
        n_sal = (sal + 50);
        imposto = n_sal * 0.07;
        n_sal = n_sal - imposto;
        printf("Seu salario liquido sera de R$ %.2f.", n_sal);
    }
    else if (sal > 900)
    {
        n_sal = (sal + 35);
        imposto = n_sal * 0.07;
        n_sal = n_sal - imposto;
        printf("Seu salario liquido sera de R$ %.2f.", n_sal);
    }
    printf("\n \n");
}
