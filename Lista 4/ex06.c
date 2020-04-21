#include <stdio.h>

int main(){

	float n1, n2, soma, sub, mult, div;

	printf("DIgite dois números reais: ");
	scanf("%g, %g", &n1, &n2);

	soma = n1 + n2;
	sub = n1 - n2;
	mult = n1 * n2;
	div = n1 / n2;

	printf("Soma: %g\n", soma);
	printf("Subtração: %g\n", sub);
	printf("Multiplicação: %g\n", mult);
	printf("Divisão: %g\n", div);
}