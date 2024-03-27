#include <stdio.h>

// esse codigo recebe o valor de dois angulos de um triangulo qualquer e retorna o valor do terceiro

int main()
{
  int primeiroAngulo, segundoAngulo, terceiroAngulo;

  printf("digite respectivamente os valores de dois angulos do triangulo separados por espaco: ");
  scanf("%d %d%*c", &primeiroAngulo, &segundoAngulo);

  terceiroAngulo = 180 - (primeiroAngulo + segundoAngulo);

  printf("o valor do terceiro angulo desse triangulo e de %d graus", terceiroAngulo);
}