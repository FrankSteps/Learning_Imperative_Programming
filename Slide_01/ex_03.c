/*
3. Desenvolva um programa em C para ler uma temperatura em Celsius e
convertê-la para Fahrenheit e Kelvin. Efetue as conversões e exiba os três
valores de temperaturas com suas respectivas unidades. Considerar:
Fahrenheit = (Celsius × 9/5) + 32 e Kelvin = Celsius + 273.15.
*/

#include <stdio.h>

int main() {
    float celsius, fahrenheit, kelvin;

    printf("Digite a temperatura em Celsius: ");
    scanf("%f", &celsius);

    fahrenheit = (celsius * 9.0 / 5.0) + 32;
    kelvin = celsius + 273.15;

    printf("Celsius: %.2f °C\n", celsius);
    printf("Fahrenheit: %.2f °F\n", fahrenheit);
    printf("Kelvin: %.2f K\n", kelvin);

    return 0;
}

