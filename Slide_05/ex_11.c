/*
11. Numa casa comercial são registrados (em relatório manuscrito) os
totais de vendas mensais do último ano. Elaborar programa para calcular
a média de vendas de qualquer sequência crescente de meses. (O
operador do programa digitará os dados do relatório conforme for
pedido.)
*/

#include <stdio.h>

int main() {
    // criando as variáveis que serão usados no programa
    double vendas[12];
    double soma = 0;
    int inicio, fim;
    int quantidade = 0;

    // responsável por pegar o valor dos 12 meses -> e coloca em um vetor 
    for (int i = 0; i < 12; i++) {
        scanf("%lf", &vendas[i]);
    }

    // início e fim da sequência 
    scanf("%d %d", &inicio, &fim); 

    // faz a soma dos valores colocados no vetor no intervalo definido acima pelo usuário
    for (int i = inicio - 1; i <= fim - 1; i++) {
        soma += vendas[i];
        quantidade++;
    }

    // mostrando o valor para o usuário 
    printf("%.2lf\n", soma / quantidade);

    // fim do programa
    return 0;
}
