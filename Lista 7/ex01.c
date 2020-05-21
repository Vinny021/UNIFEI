#include <stdio.h>

int main(void) {
  int m[2][2], r[2][2], maior;


  //Preenche matriz m 
  for (int l = 0; l < 2; l++){
    for (int c = 0; c < 2; c ++){
      printf("Digite o valor da %d linha %d coluna: ", l+1, c+1);
      scanf("%d", &m[l][c]);;
    }
  }

  maior = m[0][0];

  //Identifica o maior valor
  for (int l = 0; l < 2; l++){
    for (int c = 0; c < 2; c++){
      if (m[l][c] > maior){
        maior = m[l][c];
      }
    }
  }

  for (int l = 0; l < 2; l++){
    for (int c = 0; c < 2; c++){
      r[l][c] = m[l][c] * maior;
    }
  }

  printf("Matriz R: \n");
  for (int l = 0; l < 2; l++){
    for (int c = 0; c < 2; c++){
      printf("%d ", r[l][c]);
    }
    printf("\n");
  }
}