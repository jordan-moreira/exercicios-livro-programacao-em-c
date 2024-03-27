#include <stdio.h>

// o codigo recebe o valor do salario minimo e a quantidade de Kw consumidos retornando o valor de cada Kw, o valor total e com um desconto de 15%

int main()
{

  // declaracao das variaveis
  float salarioMinimo, kwConsumidos, desconto, valorKw, valorTotal;

  // captura dos valores do salario minimo e da quantidade de Kw
  printf("digite o valor do salario minimo: ");
  scanf("%f%*c", &salarioMinimo);

  printf("digite a quantidade de Kw consumidos: ");
  scanf("%f%*c", &kwConsumidos);

  // calculos necessario e envio para o usuario
  valorKw = salarioMinimo / 5;
  valorTotal = valorKw * kwConsumidos;
  desconto = valorTotal * 0.85;

  printf("o valor de cada Kw e de %f sendo assim o valor total e de %f, com o desconto de 15 porcento o valor e de %f", valorKw, valorTotal, desconto);
}