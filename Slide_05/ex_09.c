/*
9. Escrever programa para calcular: 

25
∑ 9n  
n = 0

Os termos do somatório devem ser exibidos, além do resultado final.
*/

#include <stdio.h>

int main() {
    // iniciando a soma em 0
    int soma = 0;

    // somatório 
    for (int n = 0; n <= 25; n++) {
        soma += 9 * n;
    }

    // mostrando o resultado do somatório 
    printf("Soma final: %d\n", soma);

    // finalizando o programa
    return 0;
}
