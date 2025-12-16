/*
8. Escrever programa para ler 150 números (dados pelo usuário)
e exibir a soma dos múltiplos de Y lidos (entre os 150 números
supracitados), sendo Y dado pelo usuário.
*/

#include <stdio.h>

int main() {
    int num, Y;
    int soma = 0;

    scanf("%d", &Y); 

    for (int i = 1; i <= 150; i++) {
        scanf("%d", &num);

        if (num % Y == 0) {
            soma += num;
        }
    }

    printf("%d\n", soma);

    return 0;
}
