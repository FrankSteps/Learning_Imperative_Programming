/*
4. Crie um programa em C que calcule o IMC (Índice de Massa Corporal) de
uma pessoa. Leia peso e altura, calcule o IMC usando a fórmula IMC = peso /
(altura × altura) e exiba o nome da pessoa, peso, altura e o valor do IMC
calculado.
*/

#include <stdio.h>

int main() {
    char nome[30];
    float peso, altura, imc;

    printf("Digite seu nome: ");
    scanf(“%s”,nome);

    printf("Digite seu peso (em kg): ");
    scanf("%f", &peso);

    printf("Digite sua altura (em metros): ");
    scanf("%f", &altura);

    imc = peso / (altura * altura);

    printf("Nome: %s\n", nome);
    printf("Peso: %.2f kg\n", peso);
    printf("Altura: %.2f m\n", altura);
    printf("IMC: %.2f\n", imc);

    return 0;
}
