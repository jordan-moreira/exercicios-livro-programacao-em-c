#include <stdio.h>
#include <math.h>

int main()
{

    float angulo;
    int voltas, resto;

    printf("Digite o valor do angulo(em graus):");
    scanf("%f%*c", &angulo);
    if (angulo > 360 || angulo < -360)
    {
        voltas = angulo / 360;
        resto = angulo / 360;
    }
    else
    {
        voltas = 0;
    }
    if (angulo == 0 || angulo == 180 || angulo == 270 || angulo == 360 || angulo == -90 || angulo == -180 || angulo == -270 || angulo == -360)
    {
        printf("Esta sobre um dos eixos:\n");
    }

    if (angulo > 0 && angulo < 90 || angulo < -270 && angulo > -360)
    {
        printf("Primeiro Quadrante\n");
    }
    else if (angulo > 90 && angulo < 180 || angulo < -180 && angulo > -270)
    {
        printf("Segundo Quadrante\n");
    }
    else if (angulo > 180 && angulo < 270 || angulo < -90 && angulo > -180)
    {
        printf("Terceiro Quadrante\n");
    }
    else if (angulo > 270 && angulo < 360 || angulo < 0 && angulo > -90)
    {
        printf("Quarto Quadrante\n");
    }
    printf("Foram dadas %d voltas no sentido ", voltas);

    if (angulo < 0)
    {
        printf("horario");
    }
    else if (angulo > 0)
    {
        printf("anti-horario");
    }
    else
    {
        printf("Nao foram dadas voltas");
    }
}