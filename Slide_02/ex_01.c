/*
	Escrever programa para ler as três notas de um aluno, calcular a média deste (média
ponderada: primeira nota com peso 1, segunda nota com peso 2 e terceira nota com
peso 3) e determinar a situação do aluno:

* APROVADO         – se média igual ou superior a 7;
* EM RECUPERAÇÃO   – se não aprovado e com média igual ou superior a 5; 
* REPROVADO        – quando média inferior a 5.
*/

#include <stdio.h>

int main() {
    float n1, n2, n3;
    float media;

    // Extraindo os dados e salvando-os na memória 
    printf("Digite a primeira nota: ");
    scanf("%f", &n1);

    printf("Digite a segunda nota: ");
    scanf("%f", &n2);

    printf("Digite a terceira nota: ");
    scanf("%f", &n3);

    /*
    	média ponderada: pesos 1, 2 e 3
    	A média ponderada é calculada multiplicando cada elementos com seu respectivo, 
    	somando e, por fim, dividindo o resultado pela soma dos pesos.
    */
    media = (n1 * 1 + n2 * 2 + n3 * 3) / 6;
    printf("Média final: %.2f\n", media);

    // uso das condicionais 
    if (media >= 7.0) {
        printf("Situação: APROVADO\n");
    } else if (media >= 5.0) {
        printf("Situação: EM RECUPERACAO\n");
    } else {
        printf("Situação: REPROVADO\n");
    }

    // fim do programa
    return 0;
}
