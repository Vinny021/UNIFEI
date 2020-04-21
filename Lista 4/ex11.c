#include <stdio.h>

int main(){

	int dia_nasc, mes_nasc, ano_nasc, dia_hoje, mes_hoje, ano_hoje, idade;

	printf("Digite o dia, mês e ano em que você nasceu: ");
	scanf("%d, %d,%d", &dia_nasc, &mes_nasc, &ano_nasc);
	printf("Digite o dia, mês e ano atual: ");
	scanf("%d, %d, %d", &dia_hoje, &mes_hoje, &ano_hoje);

	idade = (ano_hoje - ano_nasc);

	if((mes_hoje - mes_nasc) > 0){
		printf("Você tem %d anos\n", idade);
	}
	else if((mes_hoje - mes_nasc) < 0){
		idade -= 1;
		printf("Você tem %d anos\n", idade);
	}
	else if((mes_hoje - mes_nasc) == 0){
		if((dia_hoje - dia_nasc) >= 0){
			printf("Você tem %d anos\n", idade);
		}
		else{
			idade -= 1;
			printf("Você tem %d anos\n", idade);
		}
	}
}