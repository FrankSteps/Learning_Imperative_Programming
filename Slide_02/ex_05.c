/*
	Os colegas do filho de Sr. Zé estão sentindo dificuldade para alugar um ônibus para 
levá-los ao “Museu da Gente Sergipana”. Então Sr. Zé resolveu disponibilizar sua Kombi,
mas a depender do número de inscritos, serão necessárias muitas viagens, e alguns 
passageiros deverão ir de coletivo.

	Considerando que a Kombi tem capacidade para transportar 11 pessoas (fora o motorista),
escrever um programa em C, para, dado o número de inscritos no passeio ao Museu, exibir 
o número de viagens que devem ser necessárias e o n úmero de passagens de coletivo. 

Exemplos: 
se 22 pessoas – 2 viagens de kombi e 0 passagem em coletivo; 
se 37 pessoas – 3 viagens e 4 passagens em coletivo. 

Vale esclarecer que se o número de passageiros for inferior a 11, Sr. Zé os levará de 
Kombi.
*/

#include <stdio.h>

int main() {
    int inscritos, viagens, coletivo;

    printf("Digite o número de inscritos: ");
    scanf("%d", &inscritos);

    if (inscritos <= 11) {
        viagens = 1;
        coletivo = 0;
    } else {
        viagens = inscritos / 11;
        coletivo = inscritos % 11;

        // se sobrar pessoas, precisa de mais uma viagem
        if (coletivo > 0) {
            viagens++;
        }
    }

    // Exibindo os resultados 
    printf("Viagens de Kombi: %d\n", viagens);
    printf("Passagens de coletivo: %d\n", coletivo);

    return 0;
}
