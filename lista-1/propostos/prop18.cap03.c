#include <stdio.h>

// esse codigo recebe uma temperatura em celcius e retorna essa temperatura convertida para fahrenheit

int main()
{
  int temperaturaC, temperaturaF;

  printf("digite a temperatura em celcius: ");
  scanf("%d%*c", &temperaturaC);

  temperaturaF = temperaturaC * 1.8 + 32;

  printf("%d graus celcius e igual ha %d graus fahrenheit", temperaturaC, temperaturaF);
}