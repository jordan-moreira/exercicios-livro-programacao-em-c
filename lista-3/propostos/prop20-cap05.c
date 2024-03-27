#include <stdio.h>

int main() {
    int opcao, p1, p2, p3;
    float media_aritimetica, media_pondera, n1, n2, n3;

    
    do {
        printf("MENU DE OPÇÕES \n");
        printf("    1. Média aritmética \n");
        printf("    2. Média ponderada \n");
        printf("    3. Sair \n");
        printf("Digite a opção desejada: ");
        scanf("%d", &opcao);
        printf("\n");
        
        
        if (opcao == 1) {
            printf("MÉDIA ARITMÉTICA \n");
            printf("    Digite a primeira nota: ");
            scanf("%f", &n1);
            printf("    Digite a segunda nota: ");
            scanf("%f", &n2);
            media_aritimetica = (n1 + n2) / 2;
            printf("    Media: %.2f. \n", media_aritimetica);
        }
        else if (opcao == 2) {
            printf("MÉDIA PONDERADA \n");
            printf("    Digite a primeira nota: ");
            scanf("%f", &n1);
            printf("    Digite o peso: ");
            scanf("%d", &p1);
            printf("    Digite a segunda nota: ");
            scanf("%f", &n2);
            printf("    Digite o peso: ");
            scanf("%d", &p2);
            printf("    Digite a terceira nota: ");
            scanf("%f", &n3);
            printf("    Digite o peso: ");
            scanf("%d", &p3);
            media_pondera = (n1 + n2 + n3) / (p1 + p2 + p3);
            printf("    Media ponderada: %.2f. \n", media_pondera);
        }
        
        else if (opcao == 3) {
            break;
        }
        
        printf("---------------------------------------------------------- \n");
    } while (opcao != 3);



}
