#include <stdio.h>

int main(void) {

  int matriz[8][8], simetrica;

  //Preenche matriz
  for (int l = 0; l < 8; l++){
    for(int c = 0; c < 8; c++){
      printf("Digite o valor da linha %d coluna %d: ", l + 1, c + 1);
      scanf("%d", &matriz[l][c]);
    }
  }

  simetrica = 0;

  for(int l = 0; l < 8; l++){
    for(int c = 0; c < 8; c++){
      if (matriz[l][c] == matriz[c][l]){
        simetrica += 1;
      }
    }
  }

  if (simetrica == 64){
    printf("A matriz digitada é simétrica");
  }else{
    printf("A matriz não é simetrica");
  }
}