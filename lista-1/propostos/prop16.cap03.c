#include <stdio.h>
#include <math.h>

// esse codigo recebe o valor de dois catetos de um triangulo reto e retorna o valor da hipotenusa do mesmo

int main()
{
    int cateto1, cateto2, hipotenusa;

    printf("digite respectivamente os valores dos dois catetos separados por espaco: ");
    scanf("%d %d*c", &cateto1, &cateto2);

    hipotenusa = sqrt(pow(cateto1, 2) + pow(cateto2, 2));

    printf("a hipotenusa do triangulo de catetos %d e %d e de %d", cateto1, cateto2, hipotenusa);
}