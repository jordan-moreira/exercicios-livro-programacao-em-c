#include <stdio.h>

//esse codigo recebe dois numeros e retorna qual deles e maior e se eles sao iguais

int main() {
    int numero1,numero2;
    
    printf("digite respectivamente o primeiro e o segundo numero: ");
    scanf("%d %d%*c",&numero1,&numero2);
    
    if(numero1>numero2){
        printf("o numero %d e maior que o numero %d",numero1,numero2);
    }
    if(numero2>numero1){
        printf("o numero %d e maior que o numero %d",numero2,numero1);
        
    }
    if(numero1==numero2){
        printf("os numeros digitados sao iguais");
    }
    
}