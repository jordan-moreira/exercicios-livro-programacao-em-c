#include <stdio.h>

int main()
{

    int idade;
    int i, cont1, cont2, cont3, cont4, cont5;

    float porcentagem1, porcentagem2;

    cont1 = 0;
    cont2 = 0;
    cont3 = 0;
    cont4 = 0;
    cont5 = 0;

    for (i = 1; i <= 8; i++)
    {
        printf("Digite a %dº idade: ", i);
        scanf("%d", &idade);

        // Comparação das idades digitadas
        if (idade <= 15)
        {
            cont1++;
        }
        else if (idade > 16 && idade <= 30)
        {
            cont2++;
        }
        else if (idade > 31 && idade <= 45)
        {
            cont3++;
        }
        else if (idade > 46 && idade <= 60)
        {
            cont4++;
        }
        else if (idade > 60)
        {
            cont5++;
        }
    }

    porcentagem1 = cont1 * 100 / 8;
    porcentagem2 = cont5 * 100 / 8;

    printf("TOTAL \n");
    printf("    1º Faixa etária: %d \n", cont1);
    printf("    2º Faixa etária: %d \n", cont2);
    printf("    3º Faixa etária: %d \n", cont3);
    printf("    4º Faixa etária: %d \n", cont4);
    printf("    5º Faixa etária: %d \n", cont5);
    printf("    Porcentagem de pessoas na 1º Faixa etária: %.2f \n", porcentagem1);
    printf("    Porcentagem de pessoas na 5º Faixa etária: %.2f \n", porcentagem2);
}
