#include <stdio.h>

// esse codigo recebe o valor do salario base e o tempo de servico de um funcionario retornando o valor de imposto cobrado sobre o salario base, o valor da gratificacao a receber, o valor do salario liquido e em qual categoria esse salario se encaixa

int main()
{
    int tempoServico, gratificacao;
    float salarioBase, imposto, salarioLiquido;

    printf("digite respectivamente o salario base e o tempo de servico do funcionario separados por espaco:\n");
    scanf("%f %d%*c", &salarioBase, &tempoServico);

    if (salarioBase < 200)
    {
        imposto = 0;
    }
    else if (salarioBase >= 200 && salarioBase <= 450)
    {
        imposto = salarioBase * 0.03;
    }
    else if (salarioBase > 450 && salarioBase < 700)
    {
        imposto = salarioBase * 0.08;
    }
    else
    {
        imposto = salarioBase * 0.12;
    }
    printf("o imposto a ser cobrado e de R$%.2f\n", imposto);

    if (salarioBase <= 500)
    {
        if (tempoServico <= 3)
        {
            gratificacao = 23;
        }
        else if (tempoServico > 3 && tempoServico < 6)
        {
            gratificacao = 35;
        }
        else
        {
            gratificacao = 33;
        }
    }
    else
    {
        if (tempoServico <= 3)
        {
            gratificacao = 20;
        }
        else
        {
            gratificacao = 30;
        }
    }
    printf("a gratificacao sera de R$%d.00\n", gratificacao);

    salarioLiquido = salarioBase - imposto + gratificacao;
    printf("o salario liquido e de R$%.2f\n", salarioLiquido);

    if (salarioLiquido <= 350)
    {
        printf("categoria A\n");
    }
    else if (salarioLiquido > 350 && salarioLiquido < 600)
    {
        printf("categoria B\n");
    }
    else
    {
        printf("categoria C\n");
    }
}
