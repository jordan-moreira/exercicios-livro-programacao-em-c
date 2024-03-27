#include <stdio.h>

// esse codigo recebe o peso da racao comprada e a quantidade de racao consumida por cada gato retornando quanto de racao ira sobrar depois de cinco dias

int main()
{
    // declaracao das variaveis
    float pesoRacao, gato1, gato2, racaoRestante;

    // captura dos valores do peso do saco de racao e da quantidade consumida de cada gato
    printf("digite o peso em kg do saco de racao: ");
    scanf("%f%*c", &pesoRacao);

    printf("digite a quantida de racao consumida por um dos gatos durante um dia em kg: ");
    scanf("%f%*c", &gato1);

    printf("digite a quantida de racao consumida pelo outro gato durante um dia em kg: ");
    scanf("%f%*c", &gato2);

    // calculo da quantida de racao restante e envio do resultado
    racaoRestante = pesoRacao - 5 * (gato1 + gato2);

    printf("depois de cinco dias ira sobra %fkg de racao.", racaoRestante);
}