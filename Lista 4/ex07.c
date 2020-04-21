#include <stdio.h>

int main(){

	float peso, altura, imc;

	printf("Digite sua altura em metros: ");
	scanf("%g", &altura);
	printf("Digite seu peso em quilos: ");
	scanf("%g", &peso);

	imc = (peso) / (altura * altura);

	printf("Seu IMC é de %.4g\n", imc);
}
