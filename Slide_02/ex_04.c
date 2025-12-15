/*
	Escreva um programa que com base na altura e no peso de uma pessoa, retorne o IMC e,
após o cálculo do IMC, retorne a situação da pessoa como: Magreza, Normal, Obesidade I, 
II ou III. 
*/

#include <stdio.h>

int main() {
    float peso, altura, imc;

    // Extraindo os dados da pessoa
    printf("Digite seu peso (kg): ");
    scanf("%f", &peso);

    printf("Digite sua altura (m): ");
    scanf("%f", &altura);

    // Calculando o IMC da pessoa com base no peso / altura^2
    imc = peso / (altura * altura);
    printf("IMC: %.2f\n", imc);

    // Classificando a situação com base no IMC calculado
    if (imc < 18.5) {
        printf("Classificacao: MAGREZA\n");
    } else if (imc < 25.0) {
        printf("Classificacao: NORMAL\n");
    } else if (imc < 30.0) {
        printf("Classificacao: OBESIDADE I\n");
    } else if (imc < 40.0) {
        printf("Classificacao: OBESIDADE II\n");
    } else {
        printf("Classificacao: OBESIDADE III\n");
    }

    return 0;
}
