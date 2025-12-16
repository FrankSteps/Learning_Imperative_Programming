/*
4. Escrever programa para ler N números e identificar quantos
estão dentro do intervalo entre 10 e 20, e quantos estão fora
desse mesmo intervalo.
*/

#include <stdio.h>

int main() {
    int N, num;
    int dentro = 0, fora = 0;

    printf("digite a quantidade de números: ");
    scanf("%d", &N);

    for (int i = 1; i <= N; i++) {
        printf("Digite o número %d: ", i);
        scanf("%d", &num);

        if (num >= 10 && num <= 20) {
            dentro++;
        } else {
            fora++;
        }
    }

    printf("Dentro do intervalo:  %d\n", dentro);
    printf("Fora do intervalo:    %d\n", fora);

    return 0;
}
