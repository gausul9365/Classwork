#include <stdio.h>
int main()
{
  int myNumber[] = {25,50,75,100};
  int n = sizeof(myNumber) / sizeof(myNumber[0]);
  int i;
  for (int i = 0; i < n; i++)
  {
    printf("%d ", myNumber[i]);
  }
  
  return 0;
} 