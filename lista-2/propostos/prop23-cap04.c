#include <stdio.h>

int main()
{
    int codigo, quantidade;
    float nota, desconto, final;

    printf("Calculo de nota fiscal \n\n");
    printf("Digite o codigo do produto: ");
    scanf("%d", &codigo);
    printf("Digite a quantidade comprada: ");
    scanf("%d", &quantidade);
    printf("\n");

    if (codigo >= 1 && codigo <= 10)
    {
        printf("Valor do produdo: R$ 10.00. \n");
        printf("Valor total da nota: R$ %.2f \n", nota = quantidade * 10);
    }
    else if (codigo >= 11 && codigo <= 20)
    {
        printf("Valor do produdo: R$ 15.00. \n");
        printf("Valor total da nota: R$ %.2f \n", nota = quantidade * 15);
    }
    else if (codigo >= 21 && codigo <= 30)
    {
        printf("Valor do produdo: R$ 20.00. \n");
        printf("Valor total da nota: R$ %.2f \n", nota = quantidade * 20);
    }
    else if (codigo >= 31 && codigo <= 40)
    {
        printf("Valor do produdo: R$ 30.00. \n");
        printf("Valor total da nota: R$ %.2f \n", nota = quantidade * 30);
    }
    else
    {
        printf("Codigo invalido \n");
    }

    if (nota < 250)
    {
        printf("Voce recebera 5 porcento de desconto. \n");
        printf("Seu desconto sera de R$ %.2f. \n", desconto = nota * 0.05);
        printf(" O preco final sera de R$ %.2f \n.", final = nota - desconto);
    }
    else if (nota >= 250 && nota <= 500)
    {
        printf("Voce recebera 10 porcento de desconto. \n");
        printf("Seu desconto sera de R$ %.2f. \n", desconto = nota * 0.10);
        printf(" O preco final sera de R$ %.2f \n.", final = nota - desconto);
    }
    else if (nota > 500)
    {
        printf("Voce recebera 15 porcento de desconto. \n");
        printf("Seu desconto sera de R$ %.2f. \n", desconto = nota * 0.15);
        printf(" O preco final sera de R$ %.2f \n.", final = nota - desconto);
    }
}
