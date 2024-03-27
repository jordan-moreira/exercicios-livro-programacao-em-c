#include <stdio.h>

// esse codigo recebe o valor das dimencoes de um losango e retorna sua area

int main()
{
    float diagonalMaior, diagonalMenor, area;

    printf("digite os valores da diagonal maior e diagonal menor do losango respectivamente, separados por espaco:\n");
    scanf("%f %f%*c", &diagonalMaior, &diagonalMenor);

    area = diagonalMaior * diagonalMenor / 2;

    printf("a area do losango com essa dimensoes e de %.2f", area);
}