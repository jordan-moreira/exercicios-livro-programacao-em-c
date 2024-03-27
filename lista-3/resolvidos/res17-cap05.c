#include <stdio.h>

int main()
{

    float sal_carlos, sal_joao;
    int meses, i;

    printf("Digite o salário de Carlos: ");
    scanf("%f", &sal_carlos);

    sal_joao = sal_carlos / 3;

    printf("O salário de João será de R$ %.2f. \n\n", sal_joao);

    while (sal_joao < sal_carlos)
    {
        sal_joao = sal_joao * 1.05;
        sal_carlos = sal_carlos * 1.02;
        meses++;
    }

    printf("Levará %d meses para o salario de João igual ao salário de Carlos. \n", meses);
}
