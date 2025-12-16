/*
13. Na disciplina “Programação Imperativa” há 150 alunos e 12
avaliações. Para obtenção de aprovação o aluno deve ter no
mínimo 7 notas maior ou igual a 6. Escrever programa para ler
notas de cada um dos 150 alunos e identificar se foi aprovado.
*/

#include <stdio.h>

int main() {
    double nota;
    int avaliAprovadas;

    // 150 alunos na matéria de Programação imperativa 
    for (int aluno = 1; aluno <= 150; aluno++) {
        avaliAprovadas = 0;

        // 12 avaliações para cada aluno 
        for (int i = 1; i <= 12; i++) {
            scanf("%lf", &nota);

            // verificando se a prova tem nota maior ou igual a 6
            if (nota >= 6.0) {
                avaliAprovadas++;
            }
        }

        // verificando a quantidade de provas a qual o mesmo foi aprovado
        if (avaliAprovadas >= 7) {
            printf("APROVADO\n");
        } else {
            printf("REPROVADO\n");
        }
    }

    // fim do programa
    return 0;
}
