/*
12. Numa disciplina da Universidade DosSabidos cada um dos 75
estudantes é avaliado em 10 critérios. Durante o semestre letivo o
professor registra o desempenho de cada aluno em relação a cada
critério. Escrever Programa para calcular a pontuação final de cada
estudante a partir dos pontos obtidos em cada critério.
*/

#include <stdio.h>

int main() {
    double ponto, soma;

    for (int aluno = 1; aluno <= 75; aluno++) {
        soma = 0;

        for (int criterio = 1; criterio <= 10; criterio++) {
            scanf("%lf", &ponto);
            soma += ponto;
        }

        printf("%.2lf\n", soma);
    }

    return 0;
}
