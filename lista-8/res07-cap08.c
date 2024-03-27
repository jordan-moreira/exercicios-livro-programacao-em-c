#include <stdio.h>

float CalculoMedias(float nota1, float nota2, float nota3, char opcao)
{
    float media;

    switch (opcao)
    {

    case 'a':
        media = (nota1 + nota2 + nota3) / 3;
        break;

    case 'p':
        media = ((nota1 * 5) + (nota2 * 3) + (nota3 * 2)) / 10;
        break;

    default:
        printf("Opção inválida \n");
        break;
    }

    return media;
}

int main()
{
    float n1, n2, n3;
    char opc;

    printf("Digite a primeira nota: ");
    scanf("%f", &n1);

    printf("Digite a segunda nota: ");
    scanf("%f", &n2);

    printf("Digite a terceira nota: ");
    scanf("%f", &n3);

    printf("Digite a opçcão desejada: ");
    scanf(" %c", &opc);

    printf("\nMedia das notas: %.2f \n", CalculoMedias(n1, n2, n3, opc));
}
