/*
Escrever programa em C, com aplicação do for,
para exibir um dado número elevado à potência
de 1 a 10; intermediado pelo calculo. Ver
exemplo de saída. Para calcular a potência usar
pow(b,e), da biblioteca math, onde b é base
e e é expoente.

A saída deve ser, se dado 9:
9^1 = 9 = 9
9^2 = 9 * 9 = 81
*/

// biliotecas usadas neste projeto 
#include <stdio.h>
#include <math.h>

// função principal 
int main() {
    int n;
    double resultado;

    // interação com o usuário 
    printf("Digite um numero: ");
    scanf("%d", &n);

    // parte responsável por calcular e exibir as potências do número digitado
    for (int i = 1; i <= 10; i++) {
    	resultado = pow(n, i);
    	printf("%.0lf\n", resultado);
	}

    // fim do programa
    return 0;
}
