#include <stdio.h>
#include <math.h>

// o codigo recebe o valor de um angulo formado por uma escada apoiada na parede e a distancia entre a ponta da escada e o chao, retornando o tamanho necessario da escada

int main()
{
    float anguloEscada, distanciaParede, tamanhoEscada;

    printf("digite o angulo formado pela escada em graus: ");
    scanf("%f%*c", &anguloEscada);

    printf("digite a distancia em que a escada esta da parede em metros: ");
    scanf("%f%*c", &distanciaParede);

    tamanhoEscada = round(distanciaParede / cos(anguloEscada * 3.14 / 180));

    printf("o tamanho da escada deve ser de %.0f metros", tamanhoEscada);
}