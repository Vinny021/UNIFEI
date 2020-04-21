#include <stdio.h>
#include <math.h>

int main(){

	int x, i, p;
	i = 0;

	printf("Digite o número desejado: ");
	scanf("%d", &x);

	for(i; i <= 10; i++){

		p = pow(x, i);
		printf("%d\n", p);
	}
}
