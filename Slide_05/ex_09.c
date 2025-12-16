/*
9. Escrever programa para calcular: 

25
∑ 9n  
n = 0

Os termos do somatório devem ser exibidos, além do resultado final.
*/

#include <stdio.h>

int main() {
    int soma = 0;

    for (int n = 0; n <= 25; n++) {
        soma += 9 * n;
    }

    printf("Soma final: %d\n", soma);

    return 0;
}
