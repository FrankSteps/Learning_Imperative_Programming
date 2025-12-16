/*
13. Na disciplina “Programação Imperativa” há 150 alunos e 12
avaliações. Para obtenção de aprovação o aluno deve ter no
mínimo 7 notas maior ou igual a 6. Escrever programa para ler
notas de cada um dos 150 alunos e identificar se foi aprovado.
*/

#include <stdio.h>

int main() {
    double nota;
    int aprovadas;

    for (int aluno = 1; aluno <= 150; aluno++) {
        aprovadas = 0;

        for (int i = 1; i <= 12; i++) {
            scanf("%lf", &nota);

            if (nota >= 6.0) {
                aprovados++;
            }
        }

        if (aprovados >= 7) {
            printf("APROVADO\n");
        } else {
            printf("REPROVADO\n");
        }
    }

    return 0;
}
