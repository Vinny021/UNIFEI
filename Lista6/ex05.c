#include <stdio.h>

int main(){
  char palavra[100], palavra_codificada[100];
  int codificador, i;

  printf("Digite a palavra desejada: ");
  fgets(palavra, 100, stdin);

  printf("Quantas posições serão puladas: ");
  scanf("%d", &codificador);

  //Repetira o laço enquanto não encontrar um valor nulo
  for (i = 0; palavra[i] != '\0'; i++){
    palavra_codificada[i] = palavra[i] + codificador;
  }

  printf("n: %d\n", codificador);
  printf("String: %s\n", palavra);
  printf("String Codificada: %s\n", palavra_codificada);

}