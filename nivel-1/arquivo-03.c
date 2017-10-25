/*

	Criar um programa em C,para uma casa de câmbio.
	O mesmo possiblita a conversão da moeda estrangeira(Libra Britanica,Euro,Dólar Americano e Rand sul Africano) 
	para a moeda nacional Brazileira,sabendo que a taxa é de 1,17

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

		calcMoeda(valorPassado, 4.26794);

	} else if (strncmp(siglaSetada, "E", 1) == 0) {

		calcMoeda(valorPassado, 3.81207);

	} else if (strncmp(siglaSetada, "U", 1) == 0) {

		calcMoeda(valorPassado, 3.24121);


	} else if (strncmp(siglaSetada, "Z", 1) == 0) {

		calcMoeda(valorPassado, 0.23596);

	}

	return (0);

}

float calcMoeda(float valorPassado, float peso) {

	float taxa = 0.117;
	float resultado;
	float baseCalc = valorPassado / peso;

	resultado = baseCalc * taxa;

	printf("Valor taxado: R$ %0.2f\n", resultado);
	printf("\nPressine uma letra e enter para terminar\n");

	int fim;
	scanf("%d", &fim);

	return (0);

}