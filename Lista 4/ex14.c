#include <stdio.h>

int main(){

	int maior, menor, numero;

	printf("Digite um numero inteiro: ");
	scanf("%d", &numero);

	maior = numero;
	menor = numero;
	do{
		printf("Digite um numero inteiro: ");
		scanf("%d", &numero);

		if (numero >= 0){

			if (numero >= maior){
				maior = numero;
			}
			else if (numero <= menor){
				menor = numero;
			}

		}
		
	}while(numero >= 0);
	
	printf("Maior: %d\nMenor: %d\n", maior, menor);
} 