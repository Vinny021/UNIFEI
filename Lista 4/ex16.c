#include <stdio.h>

int main(){

	int n1, n2, x;

	printf("Digite dois numeros inteiros: ");
	scanf("%d, %d", &n1, &n2);

	if (n1 <= n2){
		for(n1; n1 <=n2; n1++){
			for(x = 1; x <= 10; x++){
				printf("%d x %d = %d\n",n1, x, (n1 * x));
			}
		}
	}
	else if(n1 > n2){
		for(n2; n2 <=n1; n2++){
			for(x = 1; x <= 10; x++){
				printf("%d x %d = %d\n",n2, x, (n2 * x));
			}
		}
	}
}