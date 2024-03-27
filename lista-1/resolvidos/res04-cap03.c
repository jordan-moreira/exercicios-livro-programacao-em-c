#include <stdio.h>

// esse codigo recebe um valor de salario e devolve esse valor com um acressimo de 25%

int main()
{

    // declaracao de variaveis
    int salarioBase;
    float novoSalario;

    // captura do valor do salario base
    printf("digite o salario do funcionario: ");
    scanf("%d%*c", &salarioBase);

    // calculo do novo salario e envio do resultado
    novoSalario = salarioBase * 1.25;

    printf("o novo salario com o aumento e: %f", novoSalario);
}