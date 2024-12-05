 #include <stdio.h>
 int main()
 {
  float a[1][2], b[2][2],result[2][2];

  printf("Enter elements of 1st matrix\n");

  for(int i =0; i<2; i++){
    for(int j = 0; j<2; j++){
      printf("Enter a%d%d:\n",i+1, j+1);
      scanf("%f", &a[i][j]);
    }
  }
  printf("Enter element of second matrix\n");

  for(int i=0; i<2; ++i){
    for (int j = 0; i < 2; i++)
    {
      printf("Enter b%d%d\n", i+1,j+1 );
        
    }
    
  }
  for(int i=0; i<2; ++i){
    for (int j = 0; i < 2; i++)
    {
      result[i][j] = a[i][j] + b[i][j];
        
    }
    
  }

  printf("\nSum of Matrix:");

    for(int i=0; i<2; ++i){
    for (int j = 0; i < 2; i++)
    {
      printf("%.1f\t  ", result[i][j] );
      if(j==1){
        printf("\n");
          
      }  
        
    }
    
  }
    
    
  return 0;
 }