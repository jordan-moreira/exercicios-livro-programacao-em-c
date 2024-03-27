#include <stdio.h>
#include <math.h>

// esse codigo recebe o valor do raio de um circulo e devolve a sua area

int main()
{

    // declaracao das variaveis
    float valorRaio, area, valorPi;
    valorPi = 3.1415;

    // captura do valor do raio
    printf("digite o valor do raio: ");
    scanf("%lf%*c", &valorRaio);

    // calculo da area do circulo e envio o resultado
    area = pow(valorRaio, 2) * valorPi;
    printf("a area do circulo de raio %lf e %f", valorRaio, area);
}