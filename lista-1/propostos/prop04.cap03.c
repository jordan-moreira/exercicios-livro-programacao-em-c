#include <stdio.h>

// esse codigo recebe 2 notas e retorna a media ponderada entre elas sendo a primeria tendo peso 2 e a segunda peso 3

int main()
{
    int nota1, nota2;
    float mediaPonderada;

    printf("digite a primeira nota: ");
    scanf("%d%*c", &nota1);

    printf("digite a segunda nota: ");
    scanf("%d%*c", &nota2);

    mediaPonderada = (nota1 * 2 + nota2 * 3) / 5;

    printf("a media pondera entre as notas fornecidas com peso 2 para a primeira e peso 3 para a segunda e de %.2f", mediaPonderada);
}