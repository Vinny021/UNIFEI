#include <stdio.h>

int main(){

	float minutos, segundos;

	printf("Digite quantos minutos você quer transformar em segundos: ");
	scanf("%g", &minutos);

	segundos = minutos * 60;

	printf("%g min. é igual a %g segundos\n", minutos, segundos);
}
