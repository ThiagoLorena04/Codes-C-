#include <stdio.h>
#define MAX 4

int main(){

  int vetor[10];
  int maior, posicao;

  for(int i =0; i<10; i++){

    printf("Leia o seu array na posicao %d: ", i);
    scanf("%d" , &vetor[i]);
  }

  maior = vetor[0];
  posicao = 0;

  for(int i = 0; i < 10; i++)
  {
    if (vetor[i] > maior)
    {
      maior = vetor[i];
      posicao = i;
    }
    
  }

 printf("A posicao do maior elemento (%d) e: %d\n", posicao, maior);
}