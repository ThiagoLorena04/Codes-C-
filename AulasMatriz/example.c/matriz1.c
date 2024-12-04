#include <stdio.h>

int main(){

  int a[5];
  int b[5];
  int i;
  int numerorep = 0;

  for( i = 0; i < 5; i++)
  {
    printf("Escolha as valores para a posicao %d do vetor 1: ", i);
    scanf("%d", &a[i]);
  }

  printf("\n\n");

  for( i = 0; i < 5; i++)
  {
    printf("Escolha as valores para a posicao %d do vetor 2: " , i);
    scanf("%d", &b[i]);
  }
  
  for(int j = 0; j < 5; j++) 
  {
    for (int k = 0; k < 5; k++)
    {
      if (a[j] == b[k])
      numerorep = 1;
      printf("Temos um valore igual nas posicicoes %d do vetor 1 e %d do vetor 2 \n\n" , a[j], b[k]);
    }
    if (!numerorep)
    {
      printf("Nao temos numeros repetidos");
    }
  }
}