#include <stdio.h>
int main()
{
  int i=1,j=1;

  while (i<=3)
  {
    printf("Outerloop iteration: %d\n",i);
    while (j<=3)    
    {
      printf("Inner loop iteration: %d\n",j );
      j++;
        
    }
    j=1;
    i++;
  }
     
  return 0;
}