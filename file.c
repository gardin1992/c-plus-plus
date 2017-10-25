#include <stdio.h>
#include <stdlib.h>

int main() {

	float valorBase = 0.02;
	float valorGarrafa = 100;
	float impostoGarrafa = 1.445;
	int qtdGarrafas;

	printf("Garrafas\n");
	scanf("%d", &qtdGarrafas);

	printf("Numeros garrafas: %i\n", qtdGarrafas);

	float valorPagar = (qtdGarrafas * valorGarrafa);
	printf("Resultado: ");

	int x;
	printf("presseione enter para fechar o programa");
	scanf("%d", &x);

	return (0);

}
