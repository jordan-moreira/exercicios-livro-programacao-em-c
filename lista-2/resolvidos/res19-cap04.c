#include <stdio.h>

//esse codigo retorna uma letra de acordo com o peso e altura fornecida pelo usuario

int main() {

int peso;
float altura;

printf("digite respectivamente o seu peso e sua altura:");
scanf("%d %f%*c",&peso,&altura);

if(altura<1.2){
    if(peso<60){
        printf("A");

    }else if(peso>=60 && peso<=90){
        printf("D");

    }else{
        printf("G");
    }

}else if(altura>=1.2 && altura<=1.70){
    if(peso<60){
        printf("B");

    }else if(peso>=60 && peso<=90){
        printf("E");

    }else{
        printf("H");

    }

}else {
    if(peso<60){
        printf("C");

    }else if(peso>=60 && peso<=90){
        printf("F");

    }else{
        printf("I");
    }
}
}

