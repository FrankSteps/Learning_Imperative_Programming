/*
18. (Adaptado do 3o Exercício Resolvido – Cap. 5 – Fund. Da
Prog. De Computadores) Faça um programa para ler N
números inteiros e positivos e de cada um desses apresente o
fatorial. O cálculo do fatorial deve ser efetuado por meio de
função elaborada pelo programador.
*/

#include <stdio.h>

// função responsável por calcular o fatorial
int fatorial(int n) {
    int fat = 1;
    for (int i = 1; i <= n; i++) {
        fat *= i;
    }
    return fat;
}


int main() {
    int N, num;

    scanf("%d", &N);

    for (int i = 1; i <= N; i++) {
        scanf("%d", &num);

        if (num < 0) {
            printf("ERRO\n");
        } else {
            printf("%lld\n", fatorial(num));
        }
    }

    return 0;
}
