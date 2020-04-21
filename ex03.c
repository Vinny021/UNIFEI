#include <stdio.h>

int main(){

	int escolha;
	
	do{
		printf("Bem vindo a porta dos desesperados!\n");
		printf("Você deseja abrir a porta n°1...\n");
		printf("A porta n°2...\n");
		printf("Ou a porta n°3 ?\n");

		printf("Digite o número da porta: ");
		scanf("%d", &escolha);
	
	}while((escolha != 1) && (escolha != 2) && (escolha != 3) );
}		
