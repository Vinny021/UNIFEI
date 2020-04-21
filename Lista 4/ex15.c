#include <stdio.h>

int main(){

	int coluna_inicio, coluna_final, linha;

	printf("Digite um valor igual ou superior a 2: ");
	scanf("%d", &coluna_final);

	for(coluna_inicio = 1; coluna_inicio <= coluna_final; coluna_inicio++){
		for(linha = 1; linha <= coluna_inicio; linha++){
			printf("#");
		}
		printf("\n");
	}
}