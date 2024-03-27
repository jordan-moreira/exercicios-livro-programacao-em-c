#include <stdio.h>

int ConverterParaSegundos(int H, int M, int S)
{
    int HR_seg, MIN_seg, total = 0;

    HR_seg = H * 3600;
    MIN_seg = M * 60;
    total = HR_seg + MIN_seg + S;

    return total;
}

int main()
{
    int hora, minutos, segundos;

    printf("Horas: ");
    scanf("%d", &hora);

    printf("Minutos: ");
    scanf("%d", &minutos);

    printf("Horas: ");
    scanf("%d", &segundos);

    printf("Conversao para segundos: %d \n", ConverterParaSegundos(hora, minutos, segundos));
}
