#include <stdio.h>

// esse codigo recebe o valor da base do triangula e da altura devolvendo a sua area

int main()
{

    // declaracao das variaveis
    int valorBase, valorAltura;
    float area;

    // captura dos valores da base e altura do triangulo
    printf("digite o valor da base do triangulo: ");
    scanf("%d%*c", &valorBase);

    printf("agora digite o valor da altura do triangulo: ");
    scanf("%d%*c", &valorAltura);

    // calculo da area e envio do resultado
    area = (valorBase * valorAltura) / 2;

    printf("a area do triangulo com base %d e altura %d e %f ", valorBase, valorAltura, area);
}