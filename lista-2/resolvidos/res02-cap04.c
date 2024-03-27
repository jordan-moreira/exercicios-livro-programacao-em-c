
#include <stdio.h>

//esse codigo recebe o valor de tres notas calcula a media aritimetica entre elas e se caso for menor que 6 ele mostra quantos pontos sao necessarios para a aprovacao

int main() {
    float nota1,nota2,nota3,media;
    
    printf("digite respectivamente os valores das notas 1 ,2 e 3 separadas por espaco: ");
scanf("%f %f %f%*c",&nota1,&nota2,&nota3);

media=(nota1+nota2+nota3)/3;

if(media<=10 && media>=7){
    printf("aprovado");
    
}else if(media<7 && media>=3){
    printf("exame \n voce precisa tirar %.2f para ser aprovado",6-media);
    
}else if(media<3 && media >=0){
    printf("reprovado");
}
}