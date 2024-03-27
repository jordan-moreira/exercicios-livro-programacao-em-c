#include <stdio.h>

int main()
{
    int opcao;
    float valor;

    printf("Rendimento mensal \n\n");
    printf("Digite o valor: ");
    scanf("%f", &valor);

    printf("TIPO      DESCRICAO \n"
           "1        Poupanca \n"
           "2        Fundos de renda fixa \n");

    printf("\n Digite a opcao desejada: ");
    scanf("%d", &opcao);

    switch (opcao)
    {
    case 1:
        printf("Poupanca - Rendimento de 3 porcento \n");
        printf("Seu rendimento sera de R$ %.2f.", valor = valor * 1.03);
        break;

    case 2:
        printf("Fundos de renda fixa - Rendimento de 4 porcento \n");
        printf("Seu rendimento sera de R$ %.2f.", valor = valor * 1.04);
        break;
    }
}