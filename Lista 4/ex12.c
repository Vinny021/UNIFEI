#include <stdio.h>

int main(){

	int i;
	i = 1;

	while(i <= 20){
		printf("%d\n", i);
		i += 1;
	}

	while(i > 1){
		i -= 1;
		printf("%d\n", i);
	}

	while(i <= 20){
		printf("%d\n", i);
		i += 2;
	}
}