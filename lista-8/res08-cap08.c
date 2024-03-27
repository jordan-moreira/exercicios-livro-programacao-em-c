#include <stdio.h>

int DuracaoPartida(int horaI, int minI, int horaT, int minT)
{
    int HRinicio_min, HRTermino_min, duracao = 0;

    if (horaI - horaT == 12 || horaT - horaI == 12)
    {
        duracao = 12 * 60;
    }

    else if (HRinicio_min > HRTermino_min)
    {
        HRinicio_min = (horaI + 24) * 60 + minI;
        HRTermino_min = horaT * 60 + minT;

        duracao = (HRinicio_min - HRTermino_min);
    }

    else if (HRTermino_min > HRinicio_min)
    {
        HRinicio_min = horaI * 60 + minI;
        HRTermino_min = (horaT + 24) * 60 + minT;

        duracao = (HRTermino_min - HRinicio_min);
    }

    return duracao;
}
int main(int argc, char **argv)
{
    int hr_inicio, min_inicio, hr_termino, min_termino;

    printf("Inicio \n");
    printf("\tHora: ");
    scanf("%d", &hr_inicio);
    printf("\tMin: ");
    scanf("%d", &min_inicio);

    printf("\nTermino \n");
    printf("\tHora: ");
    scanf("%d", &hr_termino);
    printf("\tMin: ");
    scanf("%d", &min_termino);

    printf("\nA partida teve duração de %d minutos. \n", DuracaoPartida(hr_inicio, min_inicio, hr_termino, min_termino));
}
