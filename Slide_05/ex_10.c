/*
10. Numa loja de departamentos há 35 departamentos. Do total de
vendas diárias de cada departamento a loja destina 3,5% a uma ONG se
esta (venda) ultrapassar R$5.500,00. Escrever programa para ler a venda
diária de cada departamento e exibir o montante destinado à citada
ONG.

nota: montante = soma de tudo 
*/

#include <stdio.h>

int main() {
    double venda;
    double totalONG = 0;                     // iniciando a soma em 0

    // pegando o valor do usuário 35 vezes - simbolizando o valor de venda diária de cada departamento 
    for (int i = 1; i <= 35; i++) {
        scanf("%lf", &venda);

        // se a venda for maior que 5500, a loja destinará 3.5% para uma ONG
        if (venda > 5500.0) {
            totalONG += venda * 0.035;
        }
    }

    // mostrando o resultado para o usuário
    printf("%.2lf\n", totalONG);

    // finalizando o programa
    return 0;
}
