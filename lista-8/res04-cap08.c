#include <stdio.h>

void ConverterSegundos(int seg)
{

    int hr = (seg / 60) / 60;
    int min = (seg / 60) % 60;
    int segundos = seg % 60;

    printf("%d : %d : %d \n", hr, min, segundos);
}

int main()
{
    int segundos, horario[3];

    printf("Digite os segundos: ");
    scanf("%d", &segundos);
    ConverterSegundos(segundos);
}
