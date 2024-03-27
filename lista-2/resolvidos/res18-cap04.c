#include <stdio.h>

//esse codigo e capaz de testar se tres medida sao capazes de formar um triangulo

int main() {

 int x,y,z;

 printf("digite respectivamente os valores de x, y e z para conferir se esses valores podem ser lados de um triangulo:");
 scanf("%d %d %d%*c",&x,&y,&z);

 if(x<y+z && y<x+z && z<x+y){
    if(x==y && y==z){
        printf("esse triangulo e equilatero");

    }else if(x==y || y==z || z==x){
        printf("esse triangulo e isoceles");

    }else{
        printf("esse triangulo e escaleno");

    }

 }else {
    printf("essas medidas nao formam um triangulo");

 }
}

