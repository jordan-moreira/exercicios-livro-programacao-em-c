#include <stdio.h>

//esse codigo recebe 3 numeros quaisquer diferentes e um numero de controle se o numero de controle for 1 ele retorna os tres primerios numeros em ordem crescente se o numero de controle for 2 ele retorna os tres primeiros em ordem decrescente e se o numero de controle for 3 ele retorna o maior numero entre os outros

int main()
{
    int inteiro;
    float num1, num2, num3;

    printf("digite respectivamente tres numeros quaisquer: ");
    scanf("%f %f %f%*c", &num1, &num2, &num3);

    printf("digite o numero de controle(1,2 ou 3): ");
    scanf("%d%*c", &inteiro);

    switch (inteiro)
    {
    case 1:
        if (num1 < num2 && num2 < num3)
        {
            printf("a ordem crescente e: %.2f,%.2f,%.2f", num1, num2, num3);
        }
        else if (num1 < num3 && num3 < num2)
        {
            printf("a ordem crescente e: %.2f,%.2f,%.2f", num1, num3, num2);
        }
        else if (num2 < num1 && num1 < num3)
        {
            printf("a ordem crescente e: %.2f,%.2f,%.2f", num2, num1, num3);
        }
        else if (num2 < num3 && num3 < num1)
        {
            printf("a ordem crescente e: %.2f,%.2f,%.2f", num2, num3, num1);
        }
        else if (num3 < num2 && num2 < num1)
        {
            printf("a ordem crescente e: %.2f,%.2f,%.2f", num3, num2, num1);
        }
        else if (num3 < num1 && num1 < num2)
        {
            printf("a ordem crescente e: %.2f,%.2f,%.2f", num3, num1, num2);
        }
        break;

    case 2:
        if (num1 > num2 && num2 > num3)
        {
            printf("a ordem decrescente e: %.2f,%.2f,%.2f", num1, num2, num3);
        }
        else if (num1 > num3 && num3 > num2)
        {
            printf("a ordem decrescente e: %.2f,%.2f,%.2f", num1, num3, num2);
        }
        else if (num2 > num1 && num1 > num3)
        {
            printf("a ordem decrescente e: %.2f,%.2f,%.2f", num2, num1, num3);
        }
        else if (num2 > num3 && num3 > num1)
        {
            printf("a ordem decrescente e: %.2f,%.2f,%.2f", num2, num3, num1);
        }
        else if (num3 > num2 && num2 > num1)
        {
            printf("a ordem decrescente e: %.2f,%.2f,%.2f", num3, num2, num1);
        }
        else if (num3 > num1 && num1 > num2)
        {
            printf("a ordem crescente e: %.2f,%.2f,%.2f", num3, num1, num2);
        }
        break;

    case 3:
     if(num1>num2 && num1>num3){
        printf("a ordem desejada e %.2f,%.2f,%.2f",num2,num1,num3);
    }
    if(num2>num1 && num2>num3){
        printf("a ordem desejada e %.2f,%.2f,%.2f",num1,num2,num3);
    }
   if(num3>num2 && num3>num1){
        printf("a ordem desejada e %.2f,%.2f,%.2f",num1,num3,num2);
    }
     break;

    default:
    printf("numero de controle invalido");
        break;
    }
}