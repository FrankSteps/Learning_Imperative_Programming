/*
11. Numa casa comercial são registrados (em relatório manuscrito) os
totais de vendas mensais do último ano. Elaborar programa para calcular
a média de vendas de qualquer sequência crescente de meses. (O
operador do programa digitará os dados do relatório conforme for
pedido.)
*/

#include <stdio.h>

int main() {
    double vendas[12];
    int inicio, fim;
    double soma = 0;
    int quantidade = 0;

    for (int i = 0; i < 12; i++) {
        scanf("%lf", &vendas[i]);
    }
    scanf("%d %d", &inicio, &fim);

    for (int i = inicio - 1; i <= fim - 1; i++) {
        soma += vendas[i];
        quantidade++;
    }

    printf("%.2lf\n", soma / quantidade);

    return 0;
}
