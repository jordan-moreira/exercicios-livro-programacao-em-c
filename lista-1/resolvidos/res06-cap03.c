#include <stdio.h>

// esse codigo recebe um valor de salario e devolve esse valor com um acressimo de 5% e um decressimo de 7%

int main()
{

    // declaracao das variaveis
    int salarioBase;
    float salarioReceber, gratificacao, imposto;

    // captura do valor do salario base
    printf("digite o salario do funcionario: ");
    scanf("%d%*c", &salarioBase);

    // calculo da gratificacao, impostos e novo salario e envio do resultado
    gratificacao = salarioBase * 0.05;
    imposto = salarioBase * 0.07;
    salarioReceber = salarioBase + gratificacao - imposto;

    printf("o salario a receber e de %f", salarioReceber);
}