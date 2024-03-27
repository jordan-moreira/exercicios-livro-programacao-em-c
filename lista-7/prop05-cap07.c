#include <stdio.h>

#define MESES 12
#define SEMANAS 4

void calcularTotaisPorMes(float vendas[MESES][SEMANAS], float totaisMes[MESES]) {
    for (int i = 0; i < MESES; i++) {
        float total = 0;
        for (int j = 0; j < SEMANAS; j++) {
            total += vendas[i][j];
        }
        totaisMes[i] = total;
    }
}

void calcularTotaisPorSemana(float vendas[MESES][SEMANAS], float totaisSemana[SEMANAS]) {
    for (int j = 0; j < SEMANAS; j++) {
        float total = 0;
        for (int i = 0; i < MESES; i++) {
            total += vendas[i][j];
        }
        totaisSemana[j] = total;
    }
}

float calcularTotalAnual(float vendas[MESES][SEMANAS]) {
    float total = 0;
    for (int i = 0; i < MESES; i++) {
        for (int j = 0; j < SEMANAS; j++) {
            total += vendas[i][j];
        }
    }
    return total;
}

void imprimirTotaisPorMes(float totaisMes[MESES]) {
    const char* meses[] = {"Janeiro", "Fevereiro", "Março", "Abril", "Maio", "Junho",
                            "Julho", "Agosto", "Setembro", "Outubro", "Novembro", "Dezembro"};
    printf("Total vendido em cada mês:\n");
    for (int i = 0; i < MESES; i++) {
        printf("%s: R$ %.2f\n", meses[i], totaisMes[i]);
    }
}

void imprimirTotaisPorSemana(float totaisSemana[SEMANAS]) {
    printf("Total vendido em cada semana:\n");
    for (int j = 0; j < SEMANAS; j++) {
        printf("Semana %d: R$ %.2f\n", j + 1, totaisSemana[j]);
    }
}

void imprimirTotalAnual(float totalAnual) {
    printf("Total vendido pela loja no ano: R$ %.2f\n", totalAnual);
}

int main() {
    float vendas[MESES][SEMANAS];
    float totaisMes[MESES];
    float totaisSemana[SEMANAS];
    float totalAnual;

    // Preenchimento da matriz de vendas
    printf("Digite os valores de vendas:\n");
    for (int i = 0; i < MESES; i++) {
        printf("Mês %d:\n", i + 1);
        for (int j = 0; j < SEMANAS; j++) {
            printf("Semana %d: R$ ", j + 1);
            scanf("%f", &vendas[i][j]);
        }
    }

    // Cálculo dos totais por mês, por semana e total anual
    calcularTotaisPorMes(vendas, totaisMes);
    calcularTotaisPorSemana(vendas, totaisSemana);
    totalAnual = calcularTotalAnual(vendas);

    // Impressão dos totais por mês, por semana e total anual
    imprimirTotaisPorMes(totaisMes);
    imprimirTotaisPorSemana(totaisSemana);
    imprimirTotalAnual(totalAnual);

    return 0;
}
