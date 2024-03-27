#include <stdio.h>

int main()
{
    float saldo, credito;
    printf("Calculo de credito \n\n");
    printf("Digite o valor do seu saldo: ");
    scanf("%f", &saldo);

    if (saldo > 400)
    {
        printf("Voce recebera 30 porcento de credito. \n");
        printf("Voce recebera R$ %.2f de credito.", saldo = saldo * 0.3);
    }
    else if (saldo > 300 && saldo <= 400)
    {
        printf("Voce recebera 25 porcento de credito. \n");
        printf("Voce recebera R$ %.2f de credito.", saldo = saldo * 0.25);
    }
    else if (saldo > 200 && saldo <= 300)
    {
        printf("Voce recebera 20 porcento de credito. \n");
        printf("Voce recebera R$ %.2f de credito.", saldo = saldo * 0.20);
    }
    else if (saldo < 200)
    {
        printf("Voce recebera 10 porcento de credito. \n");
        printf("Voce recebera R$ %.2f de credito.", saldo = saldo * 0.1);
    }

    printf("\n\n");
}
