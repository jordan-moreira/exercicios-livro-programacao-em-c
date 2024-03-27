#include <stdio.h>

// esse codigo recebe o valor do peso do usuario e retorna o seu peso se ele engordar 15% e se ele emagrecer 20% sobre o peso digitado

int main()
{
    float pesoReal, pesoEngordado, pesoEmagrecido;

    printf("digite seu peso atual: ");
    scanf("%f%*c", &pesoReal);

    pesoEngordado = pesoReal * 1.15;
    pesoEmagrecido = pesoReal * 0.8;

    printf("se voce engordar 15%% do seu peso atual voce tera %.2fKg e se voce emagrecer 20%% tera %.2fKg", pesoEngordado, pesoEmagrecido);
}