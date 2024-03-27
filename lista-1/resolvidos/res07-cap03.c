#include <stdio.h>

// esse codigo recebe um valor de salario e devolve esse valor com um acressimo de 50 e um decressimo de 10%

int main()
{

    // declaracao das variaveis
    int salarioBase, gratificacao;
    float salarioReceber, imposto;
    gratificacao = 50;

    // captura do salario base
    printf("digite o salario do funcionario: ");
    scanf("%d%*c", &salarioBase);

    // calculo do salario a receber e envio do resultado
    imposto = 0.1 * salarioBase;
    salarioReceber = salarioBase + gratificacao - imposto;

    printf("o valor do salario a receber e de %f", salarioReceber);
}