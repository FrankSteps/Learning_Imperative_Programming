/*
14. Ler as demandas de água em litros de 60 moradores de uma
região em que não há abastecimento de água. Calcular total da
demanda e exibir o número de viagens do caminhão pipa para
atender os moradores, considerando a capacidade do caminhão
de X litros, sendo X dado.
*/

#include <stdio.h>

int main() {
    int demanda, capacidade;
    int total = 0;
    int viagens;

    // Lê a capacidade do caminhão-pipa
    scanf("%d", &capacidade);

    // Lê a demanda de água dos 60 moradores
    for (int i = 1; i <= 60; i++) {
        scanf("%d", &demanda);
        total += demanda;
    }

    // Cálculo do número de viagens - || arredondados para cima ||
    viagens = total / capacidade;
    if (total % capacidade != 0) {
        viagens++;
    }

    // Exibe os resultados
    printf("%d\n", total);
    printf("%d\n", viagens);

    return 0;
}
