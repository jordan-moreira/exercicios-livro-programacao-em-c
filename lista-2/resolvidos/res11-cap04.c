#include <stdio.h>

//esse codigo recebe a hora de inicio e termino de um jogo no formato HH:MM e retorna a duracao do jogo no mesmo formato

int main() {

    int horaInicio, minutosInicio, horaTermino, minutosTermino, duracaoHoras, duracaoMinutos;

    printf("digite respectivamente a hora e os minutos em que o jogo comecou no formato HH MM :");
    scanf("%d %d%*c", &horaInicio, &minutosInicio);

    printf("digite respectivamente a hora e os minutos em que o jogo terminou no formato HH MM :");
    scanf("%d %d%*c", &horaTermino, &minutosTermino);

    if (horaTermino >= horaInicio) {

        if (horaTermino == horaInicio && minutosInicio < minutosTermino) {

            duracaoMinutos = minutosTermino - minutosInicio;
            printf("a duracao do jogo foi de 0:%d", duracaoMinutos);

        } else {
            duracaoMinutos = (horaTermino - horaInicio)*60 + (minutosTermino - minutosInicio);
            duracaoHoras = (duracaoMinutos - duracaoMinutos % 60) / 60;
            duracaoMinutos %= 60;

            printf("a duracao do jogo foi de %d:%d", duracaoHoras, duracaoMinutos);
        }

    } else {
        duracaoMinutos = ((horaTermino - horaInicio) + 24)*60 + (minutosTermino - minutosInicio);
        duracaoHoras = (duracaoMinutos - duracaoMinutos % 60) / 60;
        duracaoMinutos %= 60;

        printf("a duracao do jogo foi de %d:%d", duracaoHoras, duracaoMinutos);
    }

}
