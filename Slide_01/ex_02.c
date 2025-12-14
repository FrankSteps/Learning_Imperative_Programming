/*
2. Desenvolva um programa em C que calcule a área de um retângulo. Leia as
medidas da base e da altura em metros, calcule a área e exiba o resultado com
uma mensagem adequada.
*/

#include <stdio.h>

int main() {
    float base, altura, area;

    printf("Base do retangulo (em metros): ");
    scanf("%f", &base);

    printf("Altura do retangulo (em metros): ");
    scanf("%f", &altura);

    area = base * altura;

    printf("A area do retangulo é %.2f metros quadrados.\n", area);

    return 0;
}
