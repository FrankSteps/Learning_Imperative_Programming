/*
O gestor da frota da empresa “BusTour” recebe 3 dados das viagens: (1) pode ser distância (km), litros consumidos, ou
valor gasto e (2) pode ser litros consumidos, preço docombustível, ou distância e (3) tipo de cálculo, através de menu
com 4 opções: 

(C) custo da viagem - litros consumidos × preço por litro; 
(M) consumo médio - distância percorrida ÷ litros consumidos 
(A) autonomia estimada (quantos km ainda podem ser percorridos) litros no tanque × consumo médio do veículo 
(Q) custo por quilômetro - custo total da viagem ÷ distância percorrida. 

Criar programa em C para atender esta demanda, usando switch-case e módulos. Manter o total de litros do tanque numa 
constante.
*/

#include <stdio.h>

//definindo a constante 
#define TANQUE_TOTAL 50.0

// funções auxiliares 
double custoViagem(double litros, double preco) {
    return litros * preco;
}

double consumoMedio(double distancia, double litros) {
    return distancia / litros;
}

double autonomia(double consumoMedio) {
    return TANQUE_TOTAL * consumoMedio;
}

double custoPorKm(double custo, double distancia) {
    return custo / distancia;
}


// função principal 
int main() {
    char opcao;
    double distancia, litros, preco, custo, consumo;

    // Interação com o usuário 
    printf("Escolha o tipo de calculo:\n");
    printf("(C) Custo da viagem\n");
    printf("(M) Consumo medio\n");
    printf("(A) Autonomia estimada\n");
    printf("(Q) Custo por quilometro\n");
    printf("Opcao: ");

    // switch com um case para cada tipo de opção 
    scanf(" %c", &opcao);
    switch (opcao) {
        case 'C':
            printf("Litros consumidos: ");
            scanf("%lf", &litros);

            printf("Preco do combustivel: ");
            scanf("%lf", &preco);

            custo = custoViagem(litros, preco);
            printf("Custo da viagem: R$ %.2f\n", custo);
            break;

        case 'M':
            printf("Distancia percorrida (km): ");
            scanf("%lf", &distancia);

            printf("Litros consumidos: ");
            scanf("%lf", &litros);

            consumo = consumoMedio(distancia, litros);
            printf("Consumo medio: %.2f km/l\n", consumo);
            break;

        case 'A':
            printf("Distancia percorrida (km): ");
            scanf("%lf", &distancia);

            printf("Litros consumidos: ");
            scanf("%lf", &litros);

            consumo = consumoMedio(distancia, litros);
            printf("Autonomia estimada: %.2f km\n", autonomia(consumo));
            break;

        case 'Q':
            printf("Distancia percorrida (km): ");
            scanf("%lf", &distancia);

            printf("Litros consumidos: ");
            scanf("%lf", &litros);

            printf("Preco do combustivel: ");
            scanf("%lf", &preco);

            custo = custoViagem(litros, preco);
            printf("Custo por km: R$ %.2f\n", custoPorKm(custo, distancia));
            break;

        default:
            printf("Opcao invalida!\n");
    }

    // fim do programa 
    return 0;
}
