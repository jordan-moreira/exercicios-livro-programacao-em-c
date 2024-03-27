#include <stdio.h>

int main() {

    int i, contSIM, contNAO, contMS, contHN, contHOMEM;
    float porcentagem;

    char opcao, sexo;

    contHN = 0;
    contMS = 0;
    contSIM = 0;
    contNAO = 0;

    for (i = 1; i <= 2; i++) {
        printf("%dº Pessoa \n", i);
        printf("Digite seu sexo (M. Masculino | F. Feminino): ");
        scanf(" %c", &sexo);
        printf("Você gostou do produto(S. Sim | N. Não): ");
        scanf(" %c", &opcao);
        printf("\n");

        //Contabilizar as opções SIM e NAO
        if (opcao == 'S') {
            contSIM++;
        } else if (opcao == 'N') {
            contNAO++;
        }

        //Contador de homens
        if (sexo == 'M') {
            contHOMEM++;
            if (opcao == 'N') {
                contHN++;
            }
        }
        
        //Contador de mulheres
        if (sexo == 'F' && opcao == 'S') {
            contMS++;
        }
    }

    porcentagem = contHN * 100 / contHOMEM;

    printf("DADOS FINAIS \n");
    printf("    Total de pessoas que responderam sim: %d \n", contSIM);
    printf("    Total de pessoas que responderam não: %d \n", contNAO);
    printf("    Total de mulheres que responderam sim: %d \n", contMS);
    printf("    Porcentagem de homens que responderam não: %.1f \n", porcentagem);

}
