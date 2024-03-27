#include <stdio.h>

int main()
{
    float hora, hr_extra, hr_falta, hr_f;

    printf("Codigo de gratificacao  \n\n");
    printf("Digite o numero de horas extras: ");
    scanf("%f", &hr_extra);
    printf("Digite o numero de horas faltas: ");
    scanf("%f", &hr_falta);
    printf("\n \n");

    hr_f = (hr_falta / 3) * 2;
    hora = hr_extra - hr_f;
    hora = hora * 60 * (-1);

    if (hora >= 2400)
    {
        printf(" Voce possui %.2f horas de trabalho \n", hora);
        printf(" Voce recebera R$ 500,00 ");
    }

    else if (hora > 1800 && hora < 2400)
    {
        printf(" Voce possui %.2f horas de trabalho \n", hora);
        printf(" Voce recebera R$ 400,00 ");
    }

    else if (hora >= 1200 && hora < 1800)
    {
        printf(" Voce possui %.2f horas de trabalho \n", hora);
        printf(" Voce recebera R$ 300,00 ");
    }
    else if (hora >= 600 && hora < 1200)
    {
        printf(" Voce possui %.2f horas de trabalho \n", hora);
        printf(" Voce recebera R$ 300,00 ");
    }

    else if (hora < 600)
    {
        printf(" Voce possui %.2f horas de trabalho \n", hora);
        printf(" Voce recebera R$ 100,00 ");
    }
}