/*
8. Escrever programa para ler 150 números (dados pelo usuário)
e exibir a soma dos múltiplos de Y lidos (entre os 150 números
supracitados), sendo Y dado pelo usuário.
*/

#include <stdio.h>

int main() {
    int num, Y;
    int soma = 0;                            // colocando a variável soma como 0 inicialmente 

    scanf("%d", &Y);                         // coletando o valor de Y que será colocado como múltiplo posteriormente 

    for (int i = 1; i <= 150; i++) {
        scanf("%d", &num);                   // coletando os 150 primeiros números fornecidos pelo usuário  

        // faz a soma dos números múltiplos de Y como pedido no enunciado 
        if (num % Y == 0) {
            soma += num;
        }
    }

    // mostrando o resultado para o usuário 
    printf("%d\n", soma);

    // finalizando o programa
    return 0;
}
