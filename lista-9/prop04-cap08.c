#include <stdio.h>
#include <math.h>

void CalculoVolumeEsfera(float r)
{
    float pi = 3.14, volume;
    volume = (4 * pi * pow(r, 3)) / 3;
    printf("Volume: %.2f. \n", volume);
}

int main()
{
    float raio;
    void CalculoVolumeEsfera(float r);

    printf("Digite o raio de uma esfera: ");
    scanf("%f", &raio);

    CalculoVolumeEsfera(raio);
}
