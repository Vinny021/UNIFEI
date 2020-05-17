#include <stdio.h>

int main() {
  
  int vetor[8], numero, maior, i, j, k;

  j = 0;

  do{
    printf("Digite um numero: ");
    scanf("%d", &numero);

    i = 0;
  
   while(i < j && vetor[i] < numero){
      i ++;
    }
    
    k = j;

    while(k >= i + 1){
      vetor[k] = vetor[k - 1];
      k --;
    }

    vetor[i] = numero;
    j ++;

  }while(j < 8);

  for (i = 0; i < 8; i++){
    printf("%d, ", vetor[i]);
  }
}