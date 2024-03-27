#include <stdio.h>
#include <math.h>

//esse codigo e capaz de calcular as raizes de funcoes do segundo grau

int main() {

float a,b,c,delta;

printf("digite respectivamente os valores de a, b e c (ax2+bx+c onde a e diferente de zero)separados por espaco: ");
scanf("%f %f %f%*c",&a,&b,&c);

delta=pow(b,2)-4*a*c;

if(delta<0){
    printf("nao existe raiz real");

}else if(delta==0){
    float raiz=(-b)/(2*a);
    printf("existe apenas uma raiz que e:\n x=%.4f",raiz);

}else{
    float raiz1=(-b+sqrt(delta))/(2*a),
    raiz2=(-b-sqrt(delta))/(2*a);
    printf("existem duas raiz, que sao:\n x1=%.4f\nx2=%.4f",raiz1,raiz2);
}
}

