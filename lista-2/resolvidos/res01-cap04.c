#include <stdio.h>

// esse codigo recebe os valores de nota de trabalho nota de avaliacao e nota de exame calcula a media ponderada e mostra o conceito baseado na media

int main() {
    float notaTrabalho,notaAvaliacao,notaExame,media;
    
    printf("digite respectivamente os valores das notas do trabalho de laboratorio,da avaliacao semestral e do exame final separados por espaco: ");
    scanf("%f %f %f%*c",&notaTrabalho,&notaAvaliacao,&notaExame);
    
    media=(notaTrabalho*2+notaAvaliacao*3+notaExame*5)/10;
    
    if(media<=10 && media>=8){
        printf("seu conceito e A");
        
    }else if(media<8&& media>=7){
        printf("seu conceito e B");
        
    }else if(media<7&& media>=6){
        printf("seu conceito e C");
        
    }else if(media<6&& media>=5){
        printf("seu conceito e B");
        
    }else if(media<5&& media>=0){
        printf("seu conceito e B");
    }else {
        printf("nota invalida")
    }
    
  }