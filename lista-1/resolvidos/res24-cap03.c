#include <stdio.h>
#include <math.h>

//esse codigo recebe uma hora qualquer no formato HH.mm e retorna esse valor convertido totalmente para minutos

int main()
{
    float horaComposta, horas, minutos;

    printf("digite a hora a ser convertida: ");
    scanf("%f%*c", &horaComposta);

    horas = trunc(horaComposta);
    minutos = (horaComposta - horas) * 100 + horas * 60;

    printf("%.2f horas e igual a %.0f minutos", horaComposta, minutos);
}