#include <stdio.h>
int main()
{
  int a1[2][2] = {{1,2},{4,5}};
  int a2[2][2] = {{6,3},{8,9}};
  int final[2][2] = {0};
  
  for(int i=0; i<2; i++){
    for(int j=0; j<2; j++ ){
      for(int k =0; k<2; i=k++){
         final[i][j] += a1[i][k]*a2[k][j];
      }
    }
  }

  for(int i=0; i<2; i++){
    for(int j=0; j<2; j++){
       printf("%d ", final[i][j]);
    }
    printf("\n");
        
  }

  return 0;
}