#include <stdio.h>
#include <math.h>

int main()
{
    int opcao;
    float n1, n2, raiz_quad1, raiz_quad2, raiz_cub1, raiz_cub2, potencia;

    printf("Digite um numero: ");
    scanf("%f", &n1);
    printf("Digite um numero: ");
    scanf("%f", &n2);

    printf("Opções \n\n");
    printf("1) O primeiro numero elevado ao segundo numero; \n"
           "2) Raiz quadrada de cada um dos numeros. \n"
           "3) Raiz cubica de cada um dos numeros. \n\n");

    printf("Digite a opcao desejada: ");
    scanf("%d%*c", &opcao);

    switch (opcao)
    {
    case 1:
    {
        printf("Potencia do 1º numero elevado ao 2º. \n\n");
        potencia = pow(n1, n2);
        printf("O resultado é %.2f", potencia);
        break;
    }

    case 2:
    {
        printf("Raiz quadrada dos numeros digitados \n\n");
        raiz_quad1 = sqrt(n1);
        raiz_quad2 = sqrt(n2);
    }

    case 3:
    {
        printf("Raiz cubica dos numeros digitados \n\n");
        raiz_cub1 = cbrt(n1); // CBRT é usado para calcular raizes cubicas.
        raiz_cub2 = cbrt(n2);
        printf("A raiz cubica de %.2f é %.2f \n", n1, raiz_cub1);
        printf("A raiz cubica de %.2f é %.2f \n", n2, raiz_cub2);
    }
    }
    printf("\n\n");
}