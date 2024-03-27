#include <stdio.h>

//

int main()
{
    float horas, minutos, minutosTotais, minutosHoras, segundos;

    printf("digite as horas e minutos separados por espaco: ");
    scanf("%f %f%*c", &horas, &minutos);

    minutosHoras = horas * 60;
    minutosTotais = minutosHoras + minutos;
    segundos = minutos * 60;

    printf("%.0f horas e igual a %.0f minutos, mais %.0f e igual a %.0f minutos que e igual a %.0fsegundos", horas, minutosHoras, minutos, minutosTotais, segundos);
}