#include <stdio.h>

int main(void) {
  char palavra[10], palavra_invertida[10], j;

  printf("Escreva uma palavra de 10 caracteres.\n");
  for (int i = 0; i < 10; i++){
    printf("Digite o caracter %d: ", i + 1);
    scanf("%s", &palavra[i]);
  }
  
  printf("Palavra: %s\n", palavra);

  j = 0;
  for (int i = 9; i >= 0; i--){
    palavra_invertida[j] = palavra[i];
    j++;
  }

  for (int i = 0; i < 10; i++){
    printf("%c", palavra_invertida[i]);
  }
  printf("\n");
}