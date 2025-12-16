/*
15. Escrever programa em C para exibir termos de uma PA
(progressão aritmética). Ler valor inicial, razão desta e
quantidade de termos desejados.
*/

#include <stdio.h>

int main() {
    int a1, r, n, termo;

    scanf("%d", &a1);  // valor inicial
    scanf("%d", &r);   // razão
    scanf("%d", &n);   // quantidade de termos

    termo = a1;

    for (int i = 1; i <= n; i++) {
        printf("%d\n", termo);
        termo += r;
    }

    return 0;
}
