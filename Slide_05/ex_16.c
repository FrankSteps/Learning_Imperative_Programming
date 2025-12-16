/*
17. Escrever programa para ler N números, sendo N dado
pelo usuário. E desses identificar o menor, a média
(aritmética simples) e a soma.
*/

#include <stdio.h>

int main() {
	// variáveis
    int N;
    double num, menor;
    double soma = 0;

    // interação com o usuário
    scanf("%d", &N);
    scanf("%lf", &num);
    soma = num;
    menor = num;

    // leitura dos demais números
    for (int i = 2; i <= N; i++) {
        scanf("%lf", &num);
        soma += num;

        if (num < menor) {
            menor = num;
        }
    }

    // mostrando os valores para o usuário 
    printf("%.2lf\n", menor);
    printf("%.2lf\n", soma);
    printf("%.2lf\n", soma / N);

    // fim do programa
    return 0;
}
