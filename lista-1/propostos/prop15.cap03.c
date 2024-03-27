#include <stdio.h>

// esse codigo recebe os valores do salario recebido e de duas contas a serem pagas com um acrecimo de 2% em cada uma e retorna o valor do salario restante descontando as duas contas com o acrecimo

int main()
{
    int salario, conta1, conta2;
    float salarioRestante;

    printf("digite o seu salario: ");
    scanf("%d%*c", &salario);

    printf("digite respectivamente os valores das contas que vc precisa pagar separadas por espaco: ");
    scanf("%d %d%*c", &conta1, &conta2);

    salarioRestante = salario - conta1 * 1.02 + conta2 * 1.02;

    printf("seu salario restante e de R$%.2f", salarioRestante);
}