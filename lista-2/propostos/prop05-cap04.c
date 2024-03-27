#include <stdio.h>

int main()
{
    int opcao;
    float n1, n2, media, diferenca, produto, divisao;

    printf("Digite um numero: ");
    scanf("%f", &n1);
    printf("Digite um numero: ");
    scanf("%f", &n2);

    printf("Selecione uma opcao. \n");
    printf("   Nº       OPERACAO \n"
           "   1       Media entre os numeros digitados \n"
           "   2       Diferenca do maior pelo menor \n"
           "   3       Produto entre os numeros digitados \n"
           "   4       Divisao do primeiro pelo segundo \n");
    printf("\n \nDigite a opcao desejada: ");
    scanf("%d", &opcao);
    printf("\n");

    switch (opcao)
    {
    case 1:
    {
        printf("Media dos numeros \n");
        media = (n1 + n2) / 2;
        printf("A media entre %.2f e %.2f e %.2f", n1, n2, media);
        break;
    }
    case 2:
    {
        printf("Diferenca do maior pelo menor \n\n");
        if (n1 > n2)
        {
            diferenca = n1 - n2;
            printf("A diferenca entre %.2f e %.2f e %.2f", n1, n2, diferenca);
        }
        else if (n2 > n1)
        {
            diferenca = n2 - n1;
            printf("A diferenca entre %.2f e %.2f e %.2f", n2, n1, diferenca);
        }
        else
        {
            printf("A diferenca entre %.2f e %.2f e 0", n2, n1);
        }
    }
    break;
    case 3:
    {
        printf("Multiplicacao dos 2 numeros \n\n");
        printf("%.2f * %.2f = %.2f ", n1, n2, produto = n1 * n2);
    }
    break;
    case 4:
    {
        printf("Divisao \n\n");

        if (n2 != 0)
        {
            divisao = n1 / n2;
            printf("O valor de %.2f / %.2f e igual a %.2f", n1, n2, divisao);
        }
        else
        {
            printf("O segundo valor nao pode ser igual a 0.");
        }
    }
    break;

    default:
        printf("Comando invalido.");
    }
    printf("\n\n");
}