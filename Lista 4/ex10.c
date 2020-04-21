#include <stdio.h>

int main(){

	float velocidade, limite, percentual;

	printf("Digite o limite da via: ");
	scanf("%g", &limite);
	printf("Digite a velocidade do veículo: ");
	scanf("%g", &velocidade);

	percentual = velocidade / limite;

	if(percentual <= 1){
		printf("Não houve multa.\n");
	}
	else if(1 < percentual && percentual <= 1.2){
		printf("O valor da multa é R$ 85,13.\n");
	}
	else if(1.2 < percentual && percentual <= 1.5){
		printf("O valor da multa é R$ 127,69.\n");
	}
	else{
		printf("O valor da multa é R$ 574,62.\n");
	}
}