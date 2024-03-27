#include <stdio.h>

// esse codigo recebe a quantidade de horas trabalhadas,e o valor do salario minimo calculando quanto a pessoa recebera pelas horas trabalhadas

int main()
{
    // declaracao das variaveis
    int horasTrabalhadas, salarioMinimo, salarioReceber;

    // captura da quantidade de horas trabalhadas e do valor do salario minimo
    printf("digite a quantidade de horas trabalhadas: ");
    scanf("%d%*c", &horasTrabalhadas);

    printf("digite o valor do salario minimo: ");
    scanf("%d%*c", &salarioMinimo);

    // calculo do salario a receber e envio do resultado
    salarioReceber = (horasTrabalhadas * (salarioMinimo / 2)) * 0.97;

    printf("o salario a receber e de %d reais", salarioReceber);
}