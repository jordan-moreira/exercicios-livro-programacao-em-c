#include <stdio.h>

//esse codigo exibe um menu na tela e recebe um numero digitado pelo usuario representando a opcao selecionada e faz as as operacoes necessarias

int main() {
    int opcao;
    float salario;

    printf("Menu de opcoes:\n 1-Imposto\n 2-Novo salario\n 3-Classificacao\n Digite a opcao desejada: ");
    scanf("%d%*c",&opcao);

    switch(opcao){
        case 1:

        float imposto;

        printf("\n Digite seu salario: ");
    scanf("%f%*c",&salario);

        if(salario<500){
            imposto=salario*0.05;
            printf("o salario de %.2f tera R$%.2f de imposto.",salario,imposto);

        }else if(salario>=500 && salario<= 850){
            imposto=salario*0.1;
            printf("o salario de %.2f tera R$%.2f de imposto.",salario,imposto);
            
        }else{
            imposto=salario*0.15;
            printf("o salario de %.2f tera R$%.2f de imposto.",salario,imposto);
        }
        break;
        case 2:

        float aumento;

        printf("\n Digite seu salario: ");
    scanf("%f%*c",&salario);
    
        if(salario>1500){
            aumento=25;
            printf("voce tera R$%.2f de aumento.",aumento);

        }else if(salario>=750 && salario<=1500){
            aumento=50;
            printf("voce tera R$%.2f de aumento.",aumento);
            
        }else if(salario>=450 && salario<750){
            aumento=75;
            printf("voce tera R$%.2f de aumento.",aumento);

        }else{
            printf("voce tera R$100.00 de aumento.");

        }
        break;
        case 3:

        printf("\n Digite seu salario: ");
    scanf("%f%*c",&salario);
    
        if(salario>700){
            printf("Bem remunerado.");

        }else{
            printf("Mal remunerado.");

        }
        break;
        default:

        printf("opcao invalida");
    }
}

