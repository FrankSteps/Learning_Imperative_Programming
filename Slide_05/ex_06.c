/*
6. Escrever programa para efetuar a exibição dos 30 primeiros
números ímpares a partir de 51.
*/

#include <stdio.h>

int main() {
    int num = 51;                          // iniciando em 51 

    // responsável por efetuar a exibição dos primeiros 30 números ímpares
    for (int i = 1; i <= 30; i++) {
        printf("%d\n", num);               // mostrando ao usuário o valor ímpar 
        num += 2;                          // ir sempre adicionando de 2 em dois.
    }

    // fim do programa
    return 0;
}
