/*
6. Escrever programa para efetuar a exibição dos 30 primeiros
números ímpares a partir de 51.
*/

#include <stdio.h>

int main() {
    int num = 51;

    for (int i = 1; i <= 30; i++) {
        printf("%d\n", num);
        num += 2;
    }

    return 0;
}
