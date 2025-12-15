/*
	Faça um programa para ler um número inteiro, positivo de três dígitos, e gerar outro
número formado pelos dígitos invertidos do número lido. 
(Ex: Numero Lido = 123; Numero Gerado = 321) 

Em seguida informar:

NÚMERO GERADO MAIOR QUE NÚMERO LIDO;  
NÚMERO LIDO MAIOR QUE NÚMERO GERADO;  
NÚMERO GERADO IGUAL AO NÚMERO LIDO.
*/

#include <stdio.h>

int main() {
    int num, invertido;
    int centena, dezena, unidade;

    printf("Digite o número: ");
    scanf("%d", &num);

    // separando os dígitos
    centena = num / 100;
    dezena  = (num / 10) % 10;
    unidade = num % 10;

    // formando o número invertido
    invertido = unidade * 100 + dezena * 10 + centena;

    printf("Número lido: %d\n", num);
    printf("Número gerado: %d\n", invertido);

    // comparação
    if (invertido > num) {
        printf("NÚMERO GERADO MAIOR QUE NÚMERO LIDO\n");
    } else if (invertido < num) {
        printf("NÚMERO LIDO MAIOR QUE NÚMERO GERADO\n");
    } else {
        printf("NÚMERO GERADO IGUAL AO NÚMERO LIDO\n");
    }

    return 0;
}
