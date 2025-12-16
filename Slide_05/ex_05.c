/*
5. Escrever programa para exibir os 25 primeiros números pares a
partir de 2, e a soma desses.
*/

#include <stdio.h>

int main() {
    int soma = 0;                       // iniciando a soma em 0
    int num = 2;                        // iniciando em 2

    // responsável por calcular e exibir os primeiros números pares a partir do 2
    for (int i = 1; i <= 25; i++) {
        printf("%d\n", num);            
        soma += num;                    // acumulando a soma de todos os num 
        num += 2;                       // add somente os números pares
    }

    // mostrando a soma de todos os números calculados até então para o usuário 
    printf("Soma = %d\n", soma);

    // fim do programa
    return 0;
}
