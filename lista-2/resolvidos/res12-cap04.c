#include <stdio.h>

//esse programa recebe um numero inteiro(codigo) e o valor do salario de um funcionario e retorna o seu cargo e o aumento que ele tera de acorda com o codigo recebido

int main() {
    float salarioAtual,aumento,novoSalario;
    int codigo;

    printf("digite respectivamente o codigo do seu cargo e seu salario atual:");
    scanf("%d %f%*c",&codigo,&salarioAtual);
    
    switch(codigo){
        case 1:
        aumento=salarioAtual*0.50;
        novoSalario=salarioAtual*1.50;

        printf("seu cargo e de Escrituario e voce tera um aumento de %.2f sendo o seu novo salario de %.2f",aumento,novoSalario);
        break;

        case 2:
        aumento=salarioAtual*0.35;
        novoSalario=salarioAtual*1.35;

        printf("seu cargo e de Secretario e voce tera um aumento de %.2f sendo o seu novo salario de %.2f",aumento,novoSalario);
        break;

        case 3:
        aumento=salarioAtual*0.20;
        novoSalario=salarioAtual*1.20;

        printf("seu cargo e de Caixa e voce tera um aumento de %.2f sendo o seu novo salario de %.2f",aumento,novoSalario);
        break;

        case 4:
        aumento=salarioAtual*0.10;
        novoSalario=salarioAtual*1.10;

        printf("seu cargo e de Gerente e voce tera um aumento de %.2f sendo o seu novo salario de %.2f",aumento,novoSalario);
        break;

        case 5:
        printf("seu cargo e de Diretor e voce nao tera aumento.");
        break;

        default:
        printf("codigo invalido");
    }
}