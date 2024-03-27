#include <stdio.h>

// esse codigo recebe o peso do usuario em Kg e o converte para gramas

int main()
{
    int pesoKg, pesog;

    printf("digite seu peso em Kg: ");
    scanf("%d%*c", &pesoKg);

    pesog = pesoKg * 1000;

    printf("seu peso em gramas e igual a %dg", pesog);
}