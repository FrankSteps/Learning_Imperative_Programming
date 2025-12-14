/*
1. Crie um programa em C para ler as duas primeiras notas de um aluno e
exibir a nota que o aluno precisa obter na 3a prova para ficar com média 5.
*/

#include <stdio.h>

int main(){
	float n1, n2, n3; 

	printf("Primeira nota: ");
	scanf("%f", &n1);

	printf("Segunda nota: ");
	scanf("%f", &n1);

	n3 = 15 - (n1 + n2);
	
	printf("Para obter media 5, o aluno precisa tirar %.2f na terceira prova.\n", n3);

	return 0;
}