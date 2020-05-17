#include <stdio.h>

int main(void) {
  int resultados[20], num1, num2, num3, num4, num5, num6;

  for (int i = 0; i < 20; i++){
    printf("Digite o resultado %d: ", i + 1);
    scanf("%d", &resultados[i]);
  }

  num1 = 0;
  num2 = 0;
  num3 = 0;
  num4 = 0;
  num5 = 0;
  num6 = 0;

  for (int i = 0; i < 20; i++){
    if (resultados[i] == 1){
      num1++;
    }
    if (resultados[i] == 2){
      num2++;
    }
    if (resultados[i] == 3){
      num3++;
    }
    if (resultados[i] == 4){
      num4++;
    }
    if (resultados[i] == 5){
      num5++;
    }
    if (resultados[i] == 6) {
      num6++;
    }
  }
  
  if (num1 != 0){
    printf("Numero 1 Aparições %d\n", num1);
  }
  if (num2 != 0){
    printf("Numero 2 Aparições %d\n", num2);
  }
  if (num3 != 0){
    printf("Numero 3 Aparições %d\n", num3);
  }
  if (num4 != 0){
    printf("Numero 4 Aparições %d\n", num4);
  }
  if (num5 != 0){
    printf("Numero 5 Aparições %d\n", num5);
  }
  if (num6 != 0){
    printf("Numero 6 Aparições %d\n", num6);
  }
}