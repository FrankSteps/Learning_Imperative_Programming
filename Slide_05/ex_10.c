/*
10. Numa loja de departamentos há 35 departamentos. Do total de
vendas diárias de cada departamento a loja destina 3,5% a uma ONG se
esta (venda) ultrapassar R$5.500,00. Escrever programa para ler a venda
diária de cada departamento e exibir o montante destinado à citada
ONG.
*/

#include <stdio.h>

int main() {
    double venda, totalONG = 0;

    for (int i = 1; i <= 35; i++) {
        scanf("%lf", &venda);

        if (venda > 5500.0) {
            totalONG += venda * 0.035;
        }
    }

    printf("%.2lf\n", totalONG);
    return 0;
}
