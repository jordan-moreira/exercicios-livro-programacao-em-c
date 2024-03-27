#include <stdio.h>
#include <math.h>

// esse codigo recebe o valor do raio de uma esfera e retorna seu comprimento seu volume e sua area

int main()
{
    float raio, comprimento, area, volume;

    printf("digite o raio da esfera: ");
    scanf("%f%*c", &raio);

    comprimento = 2 * 3.14 * raio;
    area = 3.14 * pow(raio, 3);
    volume = 4 / 3 * 3.14 * pow(raio, 3);

    printf("a esfera de raio %.2f possui:\n comprimento de: %.2f \n area de : %.2f \n volume: %.2f", raio, comprimento, area, volume);
}