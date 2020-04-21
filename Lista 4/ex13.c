#include <stdio.h>

int main(){

	int n1, n2, i;

	printf("Digite dois números inteiros: ");
	scanf("%d, %d", &n1, &n2);

	if (n1 <= n2){
		i = n1 + 1;
		for(i; i < n2; i++){
			printf("%d\n", i);
		}
	} 
	else if(n1 > n2){
		i = n2 + 1;
		for(i; i < n1; i++){
			printf("%d\n", i);
		}
	}
}