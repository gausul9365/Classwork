#include <stdio.h>
int main()
{
  int arr[3][3], i,j;
  for(int i =0; i<3; i++){
    for(int j=0; j<3; j++){

      printf("Enter arr[%d][%d]\n",i,j );
      scanf("%d", &arr[i][j]);
        
    }
  }

  printf("\nPrinting the element...\n");
  for( i =0; i<3; i++){
    printf("\n");
    for(j=0; j<3; j++){
      printf("%d\t", arr[i][j]);
        
    }
      
  }
    
  return 0;
}