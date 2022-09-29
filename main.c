#include <stdio.h>

int main(void) {
  int numero[10];


  for(int i = 0; i<10; i++){
    printf("Digite o %dº número: ",i+1);
    scanf("%d",&numero[i]);
    }

  int numeroler;


  printf("\n\n");

  printf("Digite um número: ");
  scanf("%d",&numeroler);

  int posicao = -5;

  for(int i = 0; i<10; i++){
    if(numeroler == numero[i]){
      posicao = i +1;
    }
  }


  printf("\n\n");

  
  if(posicao == -5){
    printf("Número não encontrado.");
  }

  if(posicao != -5){
    printf("Número encontrado na posição %d.",posicao);
  }
  return 0;
}
