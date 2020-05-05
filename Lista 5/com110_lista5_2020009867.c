#include <stdio.h>
#include <math.h>

int main(){

  int escolha;
  double lado, perimetro, area, altura, base, cateto, hipotenusa, base_menor, espaco_desenho;

  do{
    //Menu
    printf("\n###############################################");
    printf("\n##############  MENU DE OPÇÕES ################");
    printf("\n###############################################");
    printf("\n#                                             #");
    printf("\n# Escolha uma forma geométrica:               #");
    printf("\n#                                             #");
    printf("\n# 1. Quadrado                                 #");
    printf("\n# 2. Retângulo                                #");
    printf("\n# 3. Triângulo Equilátero                     #");
    printf("\n# 4. Triângulo Retângulo (catetos iguais)     #");
    printf("\n# 5. Trapézio                                 #");
    printf("\n# 6. Sair                                     #");
    printf("\n#                                             #");
    printf("\n###############################################");
    printf("\n###############################################");

    //Escolha do usuario
    printf("\nOpção: ");
    scanf("%d", &escolha);

    //Forma desejada
    switch(escolha){
      case 1:
        //Nome da forma
        printf("\n=========================================");
        printf("\nQUADRADO");
        printf("\n=========================================");

        //Pega dados
        printf("\n");
        printf("\nDigite o lado do quadrado: ");
        scanf("%lf", &lado);

        //Processa dados
        area = lado * lado;
        perimetro = lado * 4;

        //mostra resultado
        printf("\n");
        printf("\nÁrea: %.2lf", area);
        printf("\nPerimetro: %.2lf", perimetro);
        printf("\n");
        printf("\n");

        //mostra imagem
        lado =lround(lado);

        for (int linha = 1; linha <= (lado + 2); linha ++){
          if (linha == 1){
            for (int coluna = 1; coluna <= (lado + 2); coluna ++){
              if (coluna == 1){
                printf("+");
              }
              else if (coluna == (lado + 2)){
                printf("+");
              }
              else{
                printf("+");
              }
            }
            printf("\n");
          }
          else if (linha == (lado + 2)){
            for (int coluna = 1; coluna <= (lado + 2); coluna ++){
              if (coluna == 1){
                printf("+");
              }
              else if (coluna == (lado + 2)){
                printf("+");
              }
              else{
                printf("+");
              }
            }
            printf("\n");
          }
          else{
            for (int coluna = 1; coluna <= (lado + 2); coluna ++){
              if (coluna == 1){
                printf("+");
              }
              else if (coluna == (lado + 2)){
                printf("+");
              }
              else{
                printf("@");
              }
            }
            printf("\n");            
          }
        } 
        printf("\n=========================================");
        printf("\n");
        break;

      //Forma desejada
      case 2:
        //Nome da forma
        printf("\n=========================================");
        printf("\nRETÂNGULO");
        printf("\n=========================================");

        //Pega dados
        printf("\nDigite a altura: ");
        scanf("%lf", &altura);
        printf("Digite a largura: ");
        scanf("%lf", &base);

        //Processa dados
        area = altura * base;
        perimetro = (altura * 2) + (base * 2);

        //Mostra resultados
        printf("\n");
        printf("\nÁrea: %.2lf", area);
        printf("\nPerimetro: %.2lf", perimetro);
        printf("\n");
        printf("\n");

        //Mostra imagem
        altura = lround(altura);
        base = lround(base);

        for(int linha = 1; linha <= (altura + 2); linha++){
          if (linha == 1){
            for(int coluna = 1; coluna <= (base + 2); coluna++){
              printf("+");
            }
            printf("\n");
          }
          else if (linha == (altura + 2)){
            for(int coluna = 1; coluna <= (base + 2); coluna++){
              printf("+");
            }
            printf("\n");
          }
          else{
            for(int coluna = 1; coluna <= (base + 2); coluna++){
            if (coluna == 1){
              printf("+");
            }
            else if (coluna == (base + 2)){
              printf("+");
            }
            else {
              printf("@");
            }
          }
          printf("\n");
          }
        }

        printf("\n=========================================");
        printf("\n");
        break;

      //Forma desejada
      case 3:
        //Nome da forma
        printf("\n=========================================");
        printf("\nTRIÂNGULO EQUILÁTERO");
        printf("\n=========================================");

        //Pega dados
        printf("\nDigite o tamanho do lado: ");
        scanf("%lf", &lado);

        //Processa dados
        area = (((powf(3, 0.5)) * lado) * lado) / 4;
        perimetro = lado * 3;
        altura = lado ;

        //Mostra resultados
        printf("\n");
        printf("\nÁrea: %.2lf", area);
        printf("\nPerimetro: %.2lf", perimetro);
        printf("\n");
        printf("\n");

        //Mostra imagem
        lado = floor(lado);
        altura = floor(altura);
        for (int linha = 1; linha <= (lado + 2); linha++){
          if (linha == (lado + 2)){
            for (int coluna; coluna <= (lado + 1); coluna++){
              printf("- ");
            }
          }
          else{
            for(int coluna = 1; coluna <= linha; coluna++){
            if (coluna == 1){  
              for(int espaco = 1; espaco <=  altura; espaco++){
                printf(" ");
              }
            printf("/");
            altura -= 1;
            }
            if (coluna == linha){
              printf("\\");
            }
            else if(coluna != linha){
              printf("@ ");
            }
          }
          printf("\n");
          }
        }
        
        printf("\n=========================================");   
        printf("\n");
        break;

      //Forma desejada
      case 4:

        //Nome da forma
        printf("\n=========================================");
        printf("\nTRIÂNGULO RETÂNGULO");
        printf("\n=========================================");

        //Pega dados
        printf("\nDigite o valor do cateto: ");
        scanf("%lf", &cateto);

        //Processa dados
        area = (cateto * cateto) / 2;
        hipotenusa = sqrt(2 * (cateto * cateto));
        perimetro = cateto + cateto + hipotenusa;

        //Mostra resultados
        printf("\nÁrea: %.2lf", area);
        printf("\nPerimetro: %.2lf", perimetro);
        printf("\n");
        printf("\n");

        //Mostra imagem
        for (int linha = 1; linha <= (cateto + 2); linha++){
          if (linha == (cateto + 2)){
            for (int coluna = 1; coluna <= (linha + 1); coluna++){
              printf(" ");
            }
          }
          else{
            for (int coluna = 1; coluna <= (linha + 1); coluna++){
              if (coluna == 1){
                printf("|");
              }
              else if(coluna == (linha + 1)){
                printf("\\");
              }
              else{
                printf("@");
              }
            }
            printf("\n");
          }
        }

        printf("\n=========================================");
        printf("\n");
        break;

      //Forma desejada
      case 5:
        //Nome da forma
        printf("\n=========================================");
        printf("\nTRAPÉZIO");
        printf("\n=========================================");

        //Pega dados
        printf("\nDigite o tamanho da base menor: ");
        scanf("%lf", &base_menor);
        printf("\nDigite o tamanha da base maior: ");
        scanf("%lf", &base);
        printf("\nDigite o tamanho da altura:");
        scanf("%lf", &altura);

        //Processa
        area = ((base + base_menor) * altura) / 2;
        cateto = (base - base_menor) / 2;
        lado = sqrt((altura * altura) + (cateto * cateto));
        perimetro = base + lado + base_menor + lado;

        //Mostra resultados
        printf("\nÁrea: %lf", area);
        printf("\nPerimetro: %lf", perimetro);
        printf("\n");
        printf("\n");

        //Mostra desenho

        base = floor(base);
        base_menor = floor(base_menor);
        altura = floor(altura);
        espaco_desenho = floor(altura);

        for (int linha = 1; linha <= (altura + 2) ; linha++){
          if (linha == 1){
            for (int coluna = 1; coluna <= (base_menor + espaco_desenho + 1); coluna++){
              printf("- ");
            }
            printf("\n");
          }
          else if(linha == altura + 2){
            for (int coluna = 1; coluna <= (base + 7); coluna++){
              printf("- ");
            }
          }
          else{
            for(int coluna = 1;coluna <= (base_menor + 2); coluna++){
            if (coluna == 1){
              for (int espaco = 1;espaco <= espaco_desenho; espaco++){
                printf("  ");
              }
              printf("/");
            }
            else if (coluna == (base_menor + 2)){
              printf("\\");
            }
            else{
              printf("@ ");
            }
          }
          espaco_desenho -= 1;
          base_menor += 2;
          printf("\n");
          }
        }

        printf("\n=========================================");
        printf("\n");
        break;
    }

  }while(escolha != 6);
  //Fim do programa
}