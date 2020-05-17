#include <stdio.h>

int main(void) {
  char gabarito[8], prova[8], corretor[8];
  int notas[10], numero_aluno[10], acerto, aprovados;
  float porcen_aprovados;

  aprovados = 0; 

  //Lendo Gabarito
  for (int i = 0; i < 8; i++){
    printf("Resposta questão %d: ", i + 1);
    scanf("%s", &gabarito[i]);
  
  }
  //j == quantidade de alunos
  for (int j = 0; j < 10; j++){
    printf("Digite o numero do aluno: ");
    scanf("%d", &numero_aluno[j]);
    
    acerto = 0;

    //Pegando respostas do aluno
    for (int i = 0; i < 8; i++){
      printf("O que você respondeu na questão %d: ", i + 1);
      scanf("%s", &prova[i]);
 
      if (prova[i] == gabarito[i]){
        acerto++;
      }
    }

    notas[j] = acerto;

    if (notas[j] >= 6){
      aprovados++;
    }
    
  }

  porcen_aprovados = (aprovados / 10) * 100;
  printf("A porcentagem de aprovação foi de %f %%", porcen_aprovados);

  for (int j = 0; j < 10; j++){
    printf("O aluno numero %d, tirou nota %d.\n", numero_aluno[j], notas[j]);
  }
}