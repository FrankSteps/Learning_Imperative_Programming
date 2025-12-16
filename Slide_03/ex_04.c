/*
Quatro estudantes compartilham apartamento e precisam calcular como dividir as despesas mensais de forma justa.
Eles consideram 3 possibilidades: 

(1) Divisão Igual Simples,                               (D) dados: valor total da conta; 
(2) Divisão Proporcional ao Consumo,					 (P) dados: valor total da conta, percentual de consumo de cada estudante; 
(3) Rateio com Pesos Diferentes, 						 (R) dados: pesos de consumo de cada estudante.

Criar programa em C para atender esta demanda, usando switch-case e módulos e validar (emitir mensagem de ERRO)
em: tentativa de divisão por 0, consumo negativo, soma dos pesos negativa ou 0.
*/

#include <stdio.h>

// constante com o número de estudantes
#define N 4   


// Módulos para tratamento de erros e deixando o programa mais legível e mais fácil de manter -> Programação funcional <3

// função responsável por dividir o total pelo número de estudantes
void divisao(double total) {
    if (total <= 0) {
        printf("ERRO: valor total invalido.\n");
        return;
    }

    printf("Valor por estudante: R$ %.2f\n", total / N);
}


// função responsável por dividir o valor total para cada aluno de forma Proporcional  
void divisaoProporcional(double total, double consumo[]) {
    double soma = 0;

    // pecorrendo os elementos dentro de um vetor para fazer a soma do consumo 
    for (int i = 0; i < N; i++) {
        if (consumo[i] < 0) {
            printf("ERRO: consumo negativo.\n");
            return;
        }
        soma += consumo[i];
    }

    // evitando divisão por 0
    if (soma == 0) {
        printf("ERRO: divisao por zero.\n");
        return;
    }

    // mostrando esse valor 
    for (int i = 0; i < N; i++) {
        printf("Estudante %d paga: R$ %.2f\n", i + 1, (consumo[i] / soma) * total);
    }
}


// função responsável por dividir o valor total de acordo com pesos diferentes atribuídos a cada estudante.
void rateioPesos(double total, double pesos[]) {
    double somaPesos = 0;

    // pecorrendo os elementos dentro de um vetor e somando os pesos 
    for (int i = 0; i < N; i++) {
        if (pesos[i] < 0) {
            printf("ERRO: peso negativo.\n");
            return;
        }
        somaPesos += pesos[i];
    }

    if (somaPesos <= 0) {
        printf("ERRO: soma dos pesos invalida.\n");
        return;
    }

    for (int i = 0; i < N; i++) {
        printf("Estudante %d paga: R$ %.2f\n", i + 1, (pesos[i] / somaPesos) * total);
    }
}

// função principal 
int main() {
    char opcao;
    double total;
    double consumo[N], pesos[N];

    // Interação com o usuário 
    printf("Escolha o tipo de divisao:\n");
    printf("(D) Divisao igual simples\n");
    printf("(P) Divisao proporcional ao consumo\n");
    printf("(R) Rateio com pesos diferentes\n");
    printf("Opcao: ");
    scanf(" %c", &opcao);

    printf("Valor total da conta: ");
    scanf("%lf", &total);

    // Alertando que o valor total precisa ser um valor maior ou igual a 0 
    if (total <= 0) {
        printf("ERRO: valor total invalido.\n");
        return 0;
    }

    // Switch com cases para cada escolha que chamará uma a função correspondente com a escolha.
    switch (opcao) {
        case 'D':
            divisao(total);
            break;

        case 'P':
            for (int i = 0; i < N; i++) {
                printf("Consumo do estudante %d: ", i + 1);
                scanf("%lf", &consumo[i]);
            }
            divisaoProporcional(total, consumo);
            break;

        case 'R':
            for (int i = 0; i < N; i++) {
                printf("Peso do estudante %d: ", i + 1);
                scanf("%lf", &pesos[i]);
            }
            rateioPesos(total, pesos);
            break;

        default:
            printf("ERRO: opcao invalida.\n");
    }

    // fim do programa
    return 0;
}
