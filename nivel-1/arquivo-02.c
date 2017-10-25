/**

	Criar um programa em C, para uma casa de câmbio.
	O mesmo possibilta a conversão da moeda estrangeira (Libra Britânica, Euro, Dólar Americano e Rand sul Africano)
	para a moeda nacional Kuanza, sabendo que a taxa é de 1,17

	// taxa sera paga
	c = a x b

*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

float calcMoeda(float valorPassado, float peso);

int main () {

	char siglaSetada[1];
	float valorPassado;
	// taxa para % negativa

	printf("Casa de câmbio\n");
	printf("Escola uma entre as moedas e passe a sigla: \n");

	printf("Libra Britânica: G \n");
	printf("Euro: E \n");
	printf("Dólar Americano: U \n");
	printf("Rand Sul Africano: ZAR \n");

	printf("Digite a sigla da moeda: \n");
	scanf("%s", siglaSetada);

	printf("\nDigite o valor a converter: \n");
	scanf("%f", &valorPassado);

	printf("\nValor da moeda atualizado na data 24/10/2017\n");

	if (strncmp(siglaSetada, "G", 1) == 0) {

		calcMoeda(valorPassado, 217.395);

	} else if (strncmp(siglaSetada, "E", 1) == 0) {

		calcMoeda(valorPassado, 197.175);

	} else if (strncmp(siglaSetada, "U", 1) == 0) {

		calcMoeda(valorPassado, 165.097);


	} else if (strncmp(siglaSetada, "Z", 1) == 0) {

		calcMoeda(valorPassado, 12.0191);

	}

	return (0);

}

float calcMoeda(float valorPassado, float peso) {

	float taxa = 0.117;
	float resultado;
	float baseCalc = valorPassado * peso;

	resultado = baseCalc * taxa;

	printf("Valor taxado: %0.2fKz\n", resultado);
	printf("\nPressine uma letra e enter para terminar\n");

	int fim;
	scanf("%d", &fim);

	return (0);

}