/*
	Faça um programa para verificar se determinado número inteiro lido N é divisível
por A ou B, mas não simultaneamente pelos dois valores dados. São A e B, bem como 
N, dados pelo usuário. Atendendo a condição estabelecida, emitir mensagem 

“ATENDE CONDIÇÃO”; 

caso contrário, exibir: 
“NÃO ATENDE CONDIÇÃO”.
*/

#include <stdio.h>

int main() {
    int N, A, B;

    // Extração dos dados 
    printf("Digite o valor de N: ");
    scanf("%d", &N);

    printf("Digite o valor de A: ");
    scanf("%d", &A);

    printf("Digite o valor de B: ");
    scanf("%d", &B);

    // Verificando
    if ((N % A == 0 && N % B != 0) || (N % A != 0 && N % B == 0)) {
        printf("ATENDE CONDIÇÃO\n");
    } else {
        printf("NãO ATENDE CONDIÇÃO\n");
    }

    return 0;
}
