#include <stdio.h>

//esse codigo recebe o valor do salario minimo o quantidade de horas trabalhadas a quantidade de horas extras trabalhadas e a quantidade de dependentes do funcionario retornando o valor de seu salario

int main() {
    float salarioMin,horasTrabalhadas,dependentes,horasExtras,valorHora,valorExtra,salarioBruto,salarioLiquido;
    
    printf("digite respectivamente o valor do salario minimo, a quantidade de horas trabalhadas, a quantidade de horas extras trabalhadas e a quantidade de depedentes separadas por espaco: ");
    scanf("%f %f %f %f%*c",&salarioMin,&horasTrabalhadas,&horasExtras,&dependentes);

    valorHora=salarioMin/5;
    valorExtra=valorHora*1.5*horasExtras;
    salarioBruto=valorHora*horasTrabalhadas+valorExtra*horasExtras+dependentes*32;

    if(salarioBruto>500){
        salarioLiquido=salarioBruto*0.8;

    }else if(salarioBruto>=200 && salarioBruto<=500){
        salarioLiquido=salarioBruto*0.9;

    }else{
        salarioLiquido=salarioBruto;
    }

    if(salarioLiquido<=350){
        salarioLiquido+=100;

    }else{
        salarioLiquido+=50;
    }
    
    printf("o salario a receber e de R$%.2f",salarioLiquido);
    
}

