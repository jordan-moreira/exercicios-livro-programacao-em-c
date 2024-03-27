#include <stdio.h>

// esse codigo recebe o numero de lados de um poligono convexo e retorna a quantidade de diagonais que ele possui

int main()
{
  int numeroLados, numeroDiagonais;

  printf("digite o numero de lados do poligono convexo: ");
  scanf("%d%*c", &numeroLados);

  numeroDiagonais = (numeroLados * (numeroLados - 3)) / 2;

  printf("o poligono com %d lados possui %d diagonais", numeroLados, numeroDiagonais);
}