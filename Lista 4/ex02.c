#include <stdio.h>
#include <math.h>

int main(){

	int x, n, i;
	i = 0;

	printf("Digite até qual potência deseja: ");
	scanf("%d", &n);

	for (i; i <= n; i++){

		x = pow(3, i);
		printf("%d\n", x);
	}
}
