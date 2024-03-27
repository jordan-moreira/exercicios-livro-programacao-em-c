#include <stdio.h>
#include <time.h>

//esse codigo coleta a data atual do sistema e a mostra para o usuario no formato  DD/MM/AAAA HH:MM.SS

int main() {
    time_t dataAtual;
    
    struct tm *data_hora;
    int ano,mes,dia,hora,minutos,segundos;
    
    dataAtual=time(NULL);
    data_hora=localtime(&dataAtual);
    ano=data_hora ->tm_year +1900;
    mes=data_hora ->tm_mon +1;
    dia=data_hora ->tm_mday;
    hora=data_hora ->tm_hour;
    minutos=data_hora ->tm_min;
    segundos=data_hora ->tm_sec;
    
        printf("a data atual e %d/",dia);
    switch(mes){
        case 1:
            printf("janeiro");
            break;
            
        case 2:
            printf("fevereiro");
            break;
        case 3:
            printf("março");
            break;
        case 4:
            printf("abril");
            break;
        case 5:
            printf("maio");
            break;
        case 6:
            printf("junho");
            break;
        case 7:
            printf("julho");
            break;
        case 8:
            printf("agosto");
            break;
        case 9:
            printf("setembro");
            break;
        case 10:
            printf("outubro");
            break;
        case 11:
            printf("novembro");
            break;
        case 12:
            printf("dezembro");
            break;

    }
    
    
    printf("/%d \n %d:%d.%d",ano,hora,minutos,segundos);
}