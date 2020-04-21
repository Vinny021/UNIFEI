#include <stdio.h>

int main(){ 

	int linha, coluna; 
	linha = 1;

	for(linha; linha <= 7; linha ++){
		if(linha == 1 || linha == 7){
			printf("#######################\n");
		}
		else if(linha > 1 && linha < 7 && linha != 4){
			printf("#                     #\n");
		}
		else if(linha == 4){
			printf("#    SEJA BEM-VINDO   #\n");
		}
	}
}