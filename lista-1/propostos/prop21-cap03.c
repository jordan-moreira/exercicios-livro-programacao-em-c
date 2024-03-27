#include <stdio.h>

// esse codigo recebe o valor das horas trabalhadas o valor das horas extras e o valor do salario minimo e retorna o salario a receber

int main()
{
  int horasTrabalhadas, horasExtras, salarioMinimo, salarioReceber;

  printf("digite a quantidade de horas trabalhadas: ");
  scanf("%d%*c", &horasTrabalhadas);

  printf("digite o valor do salario minimo: ");
  scanf("%d%*c", &salarioMinimo);

  printf("digite a quantidade de horas extras trabalhadas: ");
  scanf("%d%*c", &horasExtras);

  salarioReceber = horasTrabalhadas * (salarioMinimo / 8) + horasExtras * (salarioMinimo / 4);

  printf("o salario a receber e de %d reais", salarioReceber);
}