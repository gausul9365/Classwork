#include <stdio.h>
int main()
{
  int i, j;

  int count = 0;

  for(int i=0; i<5; i++){
    for (int j = 0; j < 5; j++)
    {
      count++;
    }
    
  }


  printf("%d",count);
  return 0;
}

