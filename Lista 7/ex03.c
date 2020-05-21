#include <stdio.h>


int main(void) {
  int matriz[4][7], menor, maior, linha_do_menor, coluna_do_maior; 

  //Preenche matriz
  for(int l = 0; l < 4; l++){
    for(int c = 0; c < 7; c++){
      printf("Digite o numero na linha %d e coluna %d: ", l + 1, c + 1);
      scanf("%d", &matriz[l][c]);
    }
  }

  menor = matriz[0][0];

  //Encontra a linha onde está o menor valor
  for(int l = 0; l < 4; l++){
    for(int c = 0; c < 7; c++){
      if(matriz[l][c] < menor){
        linha_do_menor = l;
      }
    }
  }

  maior = matriz[linha_do_menor][0];

  //Acha o maior valor naquela linha
  for(int c = 0; c < 7; c++){
    if(matriz[linha_do_menor][c] > maior){
      maior = matriz[linha_do_menor][c];
      coluna_do_maior = c;
    }
  }

  for(int l = 0; l < 4; l++){
    for(int c = 0; c < 7; c++){
      printf("%d ", matriz[l][c]);
    }
    printf("\n");
  }

  printf("%d é o valor MINMAX e se encontra na linha %d coluna %d", maior, linha_do_menor + 1, coluna_do_maior + 1);
}