/*
5. Desenvolva um programa em C que calcule o salário líquido de um
funcionário. Leia o prenome do funcionário, o salário bruto, o percentual
de desconto do INSS e o percentual de desconto do Imposto de Renda.
Calcule os valores dos descontos, o salário líquido e exiba um
demonstrativo completo com todas essas informações formatadas.
Fórmulas:

● Desconto INSS = Salário Bruto × (percentual INSS / 100)
● Desconto IR = Salário Bruto × (percentual IR / 100)
● Salário Líquido = Salário Bruto - Desconto INSS - Desconto IR
*/

#include <stdio.h>

int main() {
    char nome[30];
    float salarioBruto, percINSS, percIR;
    float descontoINSS, descontoIR, salarioLiquido;

    printf("Digite o prenome do funcionario: ");
    scanf("%s", nome);

    printf("Digite o salario bruto: ");
    scanf("%f", &salarioBruto);

    printf("Digite o percentual de desconto do INSS: ");
    scanf("%f", &percINSS);

    printf("Digite o percentual de desconto do Imposto de Renda: ");
    scanf("%f", &percIR);

    descontoINSS = salarioBruto * (percINSS / 100);
    descontoIR   = salarioBruto * (percIR / 100);

    salarioLiquido = salarioBruto - descontoINSS - descontoIR;

    printf("Funcionario: %s\n", nome);
    printf("Salario bruto: R$ %.2f\n", salarioBruto);
    printf("Desconto INSS (%.2f%%): R$ %.2f\n", percINSS, descontoINSS);
    printf("Desconto IR (%.2f%%): R$ %.2f\n", percIR, descontoIR);
    printf("Salario liquido: R$ %.2f\n", salarioLiquido);

    return 0;
}
