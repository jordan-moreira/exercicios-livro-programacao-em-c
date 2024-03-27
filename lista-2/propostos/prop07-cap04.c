#include <stdio.h>

int main()
{
    float sal, sal_reajustado;
    printf("Aumento de salario \n\n");
    printf("Digite seu salario: ");
    scanf("%f", &sal);

    if (sal < 500)
    {
        printf("Voce recebera 30%% de aumento. \n");
        printf("Seu novo salario sera de R$ %.2f. \n", sal_reajustado = sal * 1.30);
        printf("\n \n");
    }

    else
    {
        printf("Voce nao possui direito ao aumento. \n");
    }
}
