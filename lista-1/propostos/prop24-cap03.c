#include <stdio.h>

// esse codigo recebe o valor de reais que o usuario vai levar em uma viagem e retorna o valor em dolares, marcos alemaes e em libras esterlinas

int main()
{
  float dinheiroDisponivel, valorDolar, valorMarco, valorLibra;

  printf("digite quantos reais voce vai levar pra sua viagem: ");
  scanf("%f%*c", &dinheiroDisponivel);

  valorDolar = dinheiroDisponivel * 1.8;
  valorMarco = dinheiroDisponivel * 2;
  valorLibra = dinheiroDisponivel * 3.57;

  printf("%.2f reais e equivalente a %.2f dolares, %.2f marcos alemaes e %.2f libras esterlinas", dinheiroDisponivel, valorDolar, valorMarco, valorLibra);
}