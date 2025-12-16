/*
7. Escrever programa para exibir a soma de 65 números dados
pelo usuário.
*/

#include <stdio.h>

int main() {
    int num;
    int soma = 0;                            // iniciando o valor da soma em 0


    // responsável por fazer a soma dos 65 números dados pelo usuário 
    for (int i = 1; i <= 65; i++) {
        scanf("%d", &num);                   // coleta o número            
        soma += num;                         // adiciona o valor do número coletado à soma
    }

    // mostrando o valor de soma para o usuário 
    printf("%d\n", soma);

    // fim do programa
    return 0;
}
