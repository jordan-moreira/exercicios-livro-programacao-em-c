#include <stdio.h>

//esse codigo recebe duas datas e retorna qual delas e maior

int main() {
    int ano1,mes1,dia1;
    int ano2,mes2,dia2;
    
    printf("digite a primeira data completa no formato dia mes ano:");
    scanf("%d %d %d%*c",&dia1,&mes1,&ano1);
    
    printf("digite a segunda data completa no formato dia mes ano:");
    scanf("%d %d %d%*c",&dia2,&mes2,&ano2);
    if(ano1>ano2){
 printf("A maior data é: %d/%d/%d",dia1,mes1,ano1);

}else if(ano2>ano1){
 printf("A maior data é: %d/%d/%d",dia2,mes2,ano2);

}else if(mes1>mes2){

 printf("A maior data é: %d/%d/%d",dia1,mes1,ano1);

}else if(mes2>mes1){

 printf("A maior data é: %d/%d/%d",dia2,mes2,ano2);

}else if(dia1>dia2){

 printf("A maior data é: %d/%d/%d",dia1,mes1,ano1);

}else if(dia2>dia1){

 printf("A maior data é: %d/%d/%d",dia2,mes2,ano2);

}else {
    printf("As datas são iguais !");
    }
   }