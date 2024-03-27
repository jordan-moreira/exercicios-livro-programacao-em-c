#include <stdio.h>

float PesoIdeal(float alt, char sexo)
{
    float pIdeal;

    switch (sexo)
    {
    case 'M':
    case 'm':
        pIdeal = 72.7 * alt - 58;
        break;

    case 'F':
    case 'f':
        pIdeal = 62.1 * alt - 44.7;
        break;
    }
    return pIdeal;
}
int main()
{
    float altura;
    char sexo;

    printf("Digite sua altura: ");
    scanf("%f", &altura);
    printf("Digite seu sexo (M para masculino e F para feminino): ");
    scanf(" %c", &sexo);

    printf("Seu peso ideal é de %.2f kg. \n", PesoIdeal(altura, sexo));
}
