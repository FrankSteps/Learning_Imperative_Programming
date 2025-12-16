/*
7. Escrever programa para exibir a soma de 65 números dados
pelo usuário.
*/

#include <stdio.h>

int main() {
    int num;
    int soma = 0;

    for (int i = 1; i <= 65; i++) {
        scanf("%d", &num);
        soma += num;
    }

    printf("%d\n", soma);

    return 0;
}
