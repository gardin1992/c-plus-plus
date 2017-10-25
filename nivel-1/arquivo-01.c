#include <stdio.h>
#include <stdlib.h>

int main () {

	float valorBase = 0.02;
	float valorGarrafa = 100; // cotação em kz
	float impostoGarrafa = 1.4455; // valor do imposto para refrigerante de garrafa no Brasil 
	int qtdGarrafas;
	
	printf("Numero de garrafas desejada: %i\n", qtdGarrafas);
	// pega a entrada do usuário para as garrafas, tem q ser int
	scanf("%d", &qtdGarrafas);
	
	// mostra o numero de garrafas
	printf("Garrafas selecionadas %i\n", qtdGarrafas);

	// valor das garrafas em kz
	float valorPagar = (qtdGarrafas * valorGarrafa);
	printf("Preço a pagar em kz %f\n", valorPagar);
	printf("Valor a pagar em reais: %f\n", (valorPagar * valorBase));

	return (0);	

}
