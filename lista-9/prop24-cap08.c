#include <stdio.h>

// Função para obter o nome do mês com base no número
char *obterNomeMes(int mes)
{
    switch (mes)
    {
    case 1:
        return "janeiro";
    case 2:
        return "fevereiro";
    case 3:
        return "marco";
    case 4:
        return "abril";
    case 5:
        return "maio";
    case 6:
        return "junho";
    case 7:
        return "julho";
    case 8:
        return "agosto";
    case 9:
        return "setembro";
    case 10:
        return "outubro";
    case 11:
        return "novembro";
    case 12:
        return "dezembro";
    default:
        return "mes invalido";
    }
}

// Programa principal
int main()
{
    float temperaturas[12];
    float maiorTemperatura, menorTemperatura;
    int mesMaior, mesMenor;

    // Leitura das temperaturas de cada mês
    printf("Digite a temperatura media de cada mes do ano:\n");
    for (int i = 0; i < 12; i++)
    {
        printf("Mes %d: ", i + 1);
        scanf("%f", &temperaturas[i]);
    }

    // Inicialização das variáveis de controle
    maiorTemperatura = temperaturas[0];
    menorTemperatura = temperaturas[0];
    mesMaior = 1;
    mesMenor = 1;

    // Verificação da maior e menor temperatura
    for (int i = 1; i < 12; i++)
    {
        if (temperaturas[i] > maiorTemperatura)
        {
            maiorTemperatura = temperaturas[i];
            mesMaior = i + 1;
        }
        if (temperaturas[i] < menorTemperatura)
        {
            menorTemperatura = temperaturas[i];
            mesMenor = i + 1;
        }
    }

    // Mostrando os resultados
    printf("Maior temperatura: %.2fC em %s\n", maiorTemperatura, obterNomeMes(mesMaior));
    printf("Menor temperatura: %.2fC em %s\n", menorTemperatura, obterNomeMes(mesMenor));

    return 0;
}
