#include <stdio.h>

// esse codigo recebe o valor do salario minimo e do salario de um funcionario retornando a quantidade de salarios queo funcionario recebe

int main()
{
    float salarioMinimo, salarioFuncionario, quantidadeSalario;

    printf("digite respectivamente o valor do salario minimo e o valor do salario do funcionario separado por espaco:\n");
    scanf("%f %f%*c", &salarioMinimo, &salarioFuncionario);

    quantidadeSalario = salarioFuncionario / salarioMinimo;

    printf("o funcionario recebe %.2f salarios", quantidadeSalario);
}