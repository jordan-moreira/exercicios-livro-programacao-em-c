#include <stdio.h>

int main()
{
    float preco, aumento, imposto;
    int categoria;
    char refrigeracao;

    printf("Classificacao de produtos \n \n");
    printf("Digite a categoria do produto,sendo: \n"
           "1. Limpeza \n"
           "2. Alimentacao \n"
           "3. Vestuario \n");
    printf("Digite a categoria desejada: ");
    scanf("%d", &categoria);
    printf("Digite o preco do produto: ");
    scanf("%f", &preco);
    printf("O produto precisa de refrigeracao \n"
           "S - Sim \n"
           "N - Nao \n");
    printf("Digite a opcao desejada: ");
    scanf(" %c", &refrigeracao);
    printf("\n\n");

    switch (refrigeracao)
    {
    case 'S':
    case 's':
        if (preco <= 25)
        {
            if (categoria == 1)
            {
                printf("Esse e produto necessita de rerigeracao \n");
                printf("O porduto sofrera um aumento de 5 porcento. \n");
                printf("O novo preco sera de R$ %.2f.", preco = preco * 1.05);
            }
            else if (categoria == 2)
            {
                printf("Esse e produto necessita de rerigeracao \n");
                printf("O porduto sofrera um aumento de 8 porcento. \n");
                printf("O novo preco sera de R$ %.2f.", preco = preco * 1.08);

                printf("Voce pagara 5 porcento de impostos. \n");
                printf("Pagara R$ %.2f.", imposto = preco * 0.05);
                printf("O novo valor do prdouto R$ %.2f.", preco = preco + imposto);
            }
        }
        if (categoria == 3)
        {
            printf("Esse e produto necessita de rerigeracao \n");
            printf("O porduto sofrera um aumento de 10 porcento. \n");
            printf("O novo preco sera de R$ %.2f.", preco = preco * 1.10);
        }

        if (categoria != 2)
        {
            printf("Voce pagara 8 porcento de impostos. \n");
            printf("Pagara R$ %.2f.", imposto = preco * 0.08);
            printf("O novo valor do prdouto R$ %.2f.", preco = preco + imposto);
        }

        if (preco > 25)
        {
            if (categoria == 1)
                printf("Esse e produto necessita de rerigeracao \n");
            printf("O porduto sofrera um aumento de 12 porcento. \n");
            printf("O novo preco sera de R$ %.2f.", preco = preco * 1.12);
        }
        else if (categoria == 2)
        {
            printf("Esse e produto necessita de rerigeracao \n");
            printf("O porduto sofrera um aumento de 15 porcento. \n");
            printf("O novo preco sera de R$ %.2f.", preco = preco * 1.15);
        }

        if (categoria == 3)
        {
            printf("Esse e produto necessita de rerigeracao \n");
            printf("O porduto sofrera um aumento de 18 porcento. \n");
            printf("O novo preco sera de R$ %.2f.", preco = preco * 1.18);
        }

        if (categoria != 2)
        {
            printf("Voce pagara 8 porcento de impostos. \n");
            printf("Pagara R$ %.2f.", imposto = preco * 0.08);
            printf("O novo valor do produto R$ %.2f.", preco = preco + imposto);
        }
        break;

    case 'N':
    case 'n':
        if (preco <= 25)
        {
            if (categoria == 1)
            {
                printf("Esse e produto necessita de rerigeracao \n");
                printf("O porduto sofrera um aumento de 5 porcento. \n");
                printf("O novo preco sera de R$ %.2f.", preco = preco * 1.05);
            }
            else if (categoria == 2)
            {
                printf("Esse e produto necessita de rerigeracao \n");
                printf("O porduto sofrera um aumento de 8 porcento. \n");
                printf("O novo preco sera de R$ %.2f.", preco = preco * 1.08);
            }

            if (categoria == 3)
            {
                printf("Esse e produto necessita de rerigeracao \n");
                printf("O porduto sofrera um aumento de 10 porcento. \n");
                printf("O novo preco sera de R$ %.2f.", preco = preco * 1.10);
            }
        }
        if (preco > 25)
        {
            if (categoria == 1)
            {
                printf("Esse e produto necessita de rerigeracao \n");
                printf("O porduto sofrera um aumento de 12 porcento. \n");
                printf("O novo preco sera de R$ %.2f.", preco = preco * 1.12);
            }
            else if (categoria == 2)
            {
                printf("Esse e produto necessita de rerigeracao \n");
                printf("O porduto sofrera um aumento de 15 porcento. \n");
                printf("O novo preco sera de R$ %.2f.", preco = preco * 1.15);
            }

            if (categoria == 3)
            {
                printf("Esse e produto necessita de rerigeracao \n");
                printf("O porduto sofrera um aumento de 18 porcento. \n");
                printf("O novo preco sera de R$ %.2f.", preco = preco * 1.18);
            }
            if (categoria != 2)
            {
                printf("Voce pagara 8 porcento de impostos. \n");
                printf("Pagara R$ %.2f.", imposto = preco * 0.08);
                printf("O novo valor do produto R$ %.2f.", preco = preco + imposto);
            }
        }

        break;
    }
}