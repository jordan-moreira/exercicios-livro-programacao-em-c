#include <stdio.h>
#include <math.h>

// esse codigo possui um menu contendo a opcao de duas operacoes diferentes onde o usuario seleciona qual operacao ele quer realizar e elas sao feitas

int main(){
    int operador;
    
    printf("menu de operacoes: \n 1.somar dois numeros. \n 2.raiz quadrada de um numero.\n");
    scanf("%d%*c",&operador);
    
    switch(operador){
        case 1:
            float numero1,numero2,resultado;
            
            printf("digite respectivamente os numeros a serem somados separados por espaco: ");
            scanf("%f %f%*c",&numero1,&numero2);
            
            resultado=numero1+numero2;
            
            printf(" a soma entre %.2f e %.2f e igual a %.2f",numero1,numero2,resultado);
            
            break;
        case 2:
            float radicando,raiz;
            
            printf("digite o numero a ser radiciado: ");
            scanf("%f%*c",&radicando);
            
            raiz=sqrt(radicando);
            
            printf("a raiz de %.2f e %.2f",radicando,raiz);
    }
   }
