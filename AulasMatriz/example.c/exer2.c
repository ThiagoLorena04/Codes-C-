#include <stdio.h>

int main(){

  int matriz[4][4];
  int matriz2[4][4];

  for(int i = 0; i < 4; i++){
    
    for(int k = 0; k < 4; k++){
      printf("\nDeclare valores para MATRIZ 2 na linha %d e coluna %d --> " , i , k);
      scanf("%d" , &matriz2[i][k]);
    }
  }

  for(int i = 0; i < 4; i++){
    
    for(int k = 0; k < 4; k++){
      printf("\nDeclare valores para MATRIZ 1 na linha %d e coluna %d --> " , i , k);
      scanf("%d" , &matriz[i][k]);
    }
  }
  
  int aux = 0; 
  int sub = 0;
  aux = aux + (matriz[2][2] * matriz[1][3]);
  sub = sub + (matriz[3][1] - matriz2[1][3]);

  printf("\n\nAqui esta o valor de aux: %d" , aux);

  printf("\n\nAqui esta o valor de sub: %d" , sub);

  
}