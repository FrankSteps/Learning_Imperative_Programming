/*
4. Escrever programa para ler N números e identificar quantos
estão dentro do intervalo entre 10 e 20, e quantos estão fora
desse mesmo intervalo.
*/

#include <stdio.h>

int main() {
    int quantN, num;
    int dentro = 0, fora = 0;

    // interação com o usuário :: quantidade N de números
    printf("digite a quantidade de números: ");
    scanf("%d", &quantN);

    // responsável por adicionar os números e julgar como dentro ou fora do intervalo [10, 20]
    for (int i = 1; i <= quantN; i++) {
        printf("Digite o número %d: ", i);
        scanf("%d", &num);

        if (num >= 10 && num <= 20) {
            dentro++;
        } else {
            fora++;
        }
    }

    // mostrando o resultado para o usuário
    printf("Dentro do intervalo:  %d\n", dentro);
    printf("Fora do intervalo:    %d\n", fora);

    // fim do programa
    return 0;
}
