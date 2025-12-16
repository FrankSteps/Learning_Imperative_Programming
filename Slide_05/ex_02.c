/*
Escrever programa em C, com aplicação do for,
para exibir de 1 a 10 elevado a um dado número;
intermediado pelo calculo. Ver exemplo de
saída. Para calcular a potência usar pow(b,e),
da biblioteca math, onde b é base e e é
expoente.

A saída deve ser, se dado 3:
1^3 = 1*1*1 = 1
2^3 = 2*2*2 = 8
*/

// bibliotecas usadas no projeto
#include <stdio.h>
#include <math.h>

int main() {
    int expoente;

    // interação com o usuário
    printf("Digite o expoente: ");
    scanf("%d", &expoente);

    // parte responsável por calcular a potência dos números
    for (int i = 1; i <= 10; i++) {
        printf("%.0lf\n", pow(i, expoente));
    }

    // fim do programa
    return 0;
}
