/*
	Numa loja web os valores dos fretes são calculados em conformidade com os totais
das compras. Se valor da compra é até R$300,00 (inclusive), o frete corresponde a
35% desta; para valores maiores, o frete é de 20% do valor desta. 

Escrever programa para ler valor da compra e exibir valor final, com frete.
*/

#include <stdio.h>

int main() {
    float valorCompra, frete, valorFinal;

    printf("Digite o valor da compra: ");
    scanf("%f", &valorCompra);

    // Condicionais para a aplicação do frete 
    if (valorCompra <= 300.0) {
        frete = valorCompra * 0.35;
    } else {
        frete = valorCompra * 0.20;
    }

    valorFinal = valorCompra + frete;

    // Exibindo os valores obtidos
    printf("Valor da compra........R$ %.2f\n", valorCompra);
    printf("Frete..................R$ %.2f\n", frete);
    printf("Valor final com frete..R$ %.2f\n", valorFinal);

    return 0;
}
