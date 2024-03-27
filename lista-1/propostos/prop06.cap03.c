#include <stdio.h>

// esse codigo recebe o valor do salario fixo do usuario e o valor dee suas vendas retornando o seu salario atual composto pelo salario fixo e 4% de suas vendas

int main()
{
    float salarioFixo, vendas, comissao, salarioFinal;

    printf("digite o valor de seu salario fixo:");
    scanf("%f%*c", &salarioFixo);

    printf("digite o valor de suas vendas:");
    scanf("%f%*c", &vendas);

    comissao = vendas * 0.04;
    salarioFinal = salarioFixo + comissao;

    printf("o seu salario final e de R$%.2f, sendo R$%.2f de comissao e R$%.2f do seu salario fixo", salarioFinal, comissao, salarioFixo);
}