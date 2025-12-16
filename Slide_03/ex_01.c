/*
	Um funcionário recebe um pedido com uma medida referente a um sistema métrico e precisa converter para outro
sistema métrico. Ele precisa de um programa em C que permita ler o quantitativo em uma medida e escolher o tipo 
de conversão necessária. São disponibilizadas as conversões: 

(1) Quilômetros para Milhas (K), considerando que 1 km = 0.621371 milhas;
(2) Milhas para Quilômetros (M), o inverso da conversão anterior;
(3) Quilogramas para Libras (Q), sendo que 1 kg = 2.20462 libras;
(4) Metros para Pés 
(P): sendo 1 metro = 3.28084 pés.
*/

#include <stdio.h>

int main() {
    double valor, resultado;
    char opcao;

    // primeiro o valor 
    printf("Digite o valor: ");
    scanf("%lf", &valor);

    // depois o tipo da conversão
    printf("Escolha a conversao:\n");
    printf("(K) Quilometros para Milhas\n");
    printf("(M) Milhas para Quilometros\n");
    printf("(Q) Quilogramas para Libras\n");
    printf("(P) Metros para Pes\n");

    printf("Opcao: ");
    scanf("%c", &opcao); 

    // switch com um case para cada tipo de opção 
    switch (opcao) {
        case 'K':
            resultado = valor * 0.621371;
            printf("Resultado: %.2f milhas\n", resultado);
            break;

        case 'M':
            resultado = valor / 0.621371;
            printf("Resultado: %.2f km\n", resultado);
            break;

        case 'Q':
            resultado = valor * 2.20462;
            printf("Resultado: %.2f libras\n", resultado);
            break;

        case 'P':
            resultado = valor * 3.28084;
            printf("Resultado: %.2f pes\n", resultado);
            break;

        default:
            printf("Opcao invalida!\n");
    }

    // fim do programa
    return 0;
}
