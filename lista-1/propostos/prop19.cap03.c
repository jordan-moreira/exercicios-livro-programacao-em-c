#include <stdio.h>

// esse codigo recebe os valores de comprimento e largura de um espaco e retorna a potencia necessaria para ilumina-lo

int main()
{
  int comprimento, largura, area, potencia;

  printf("digite respectivamente a largura e o comprimento do espaco a ser iluminado: ");
  scanf("%d %d*c", &largura, &comprimento);

  area = comprimento * largura;
  potencia = area * 18;

  printf("para iluminar um espaco de %dm2 sera necessario uma potencia de %dw", area, potencia);
}