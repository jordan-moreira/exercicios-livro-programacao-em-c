#include <stdio.h>

// esse codigo recebe os valores de: base maior, base menor, e altura de um trapezio retornando sua sua area

int main()
{
    float baseMaior, baseMenos, altura, area;

    printf("digite o tamanho da base maior, da base menor e da altura do trapezio nessa ordem e separados por espaco: ");
    scanf("%f %f %f%*c", &baseMaior, &baseMenos, &altura);

    area = (baseMaior + baseMenos) * altura / 2;

    printf("a area desse trapezio e igual a %.2f", area);
}