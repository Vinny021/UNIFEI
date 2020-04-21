#include <stdio.h>

int main(){

	int horas;

	printf("Digite a hora(Ex:0, 1, 2, ..., 23): ");
	scanf("%d", &horas);

	if(5 <= horas && horas <= 11){
		printf("É manhã.\n");
	}
	else if(12 <= horas && horas <= 17){
		printf("É tarde.\n");
	}
	else if(18 <= horas || horas <= 4){
		printf("É noite.\n");
	}
}