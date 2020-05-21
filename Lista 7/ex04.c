#include <stdio.h>

int main(void) {
  int matriz[5][7], menor_da_linha, maior_da_coluna, coluna_do_menor, linha_do_menor, linha_do_maior, verificador;

  verificador = 0;

  for(int l = 0; l < 5; l++){
    for(int c = 0; c < 7; c++){
      printf("Digite o valor da linha %d e coluna %d: ", l + 1, c + 1);
      scanf("%d", &matriz[l][c]);
    }
  }

  
  for(int l = 0; l < 5; l++){
    menor_da_linha = matriz[l][0];
    linha_do_menor = l;
    coluna_do_menor = 0;

    for(int c = 0; c < 7; c++){
      if(matriz[l][c] < menor_da_linha){
        menor_da_linha = matriz[l][c];
        linha_do_menor = l;
        coluna_do_menor = c;
      }
    }

    maior_da_coluna = matriz[0][coluna_do_menor];
    linha_do_maior = 0;
    for(int l = 0; l < 5; l++){

      if(maior_da_coluna < matriz[l][coluna_do_menor]){
        maior_da_coluna = matriz[l][coluna_do_menor];
        linha_do_maior = l;
      }
    }

    if(linha_do_maior == linha_do_menor){
      verificador = 1;
    }

    if(verificador == 1){
      printf("%d é ponto de sela da matriz e se encontra na linha %d e coluna %d\n", matriz[linha_do_menor][coluna_do_menor], linha_do_menor + 1, coluna_do_menor + 1);
    }
  }

  if(verificador == 0){
    printf("A matriz não possui ponto de sela.\n");
  }

for(int l = 0; l < 5; l++){
  for(int c = 0; c < 7; c++){
    printf("%d ", matriz[l][c]);
  }
  printf("\n");
}  
}