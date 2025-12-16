/*
5. Escrever programa para exibir os 25 primeiros números pares a
partir de 2, e a soma desses.
*/

#include <stdio.h>

int main() {
    int soma = 0;
    int num = 2;

    for (int i = 1; i <= 25; i++) {
        printf("%d\n", num);
        soma += num;
        num += 2;
    }

    printf("Soma = %d\n", soma);

    return 0;
}
