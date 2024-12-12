#include <stdio.h>
int main()
{
  int a = 20;
  int b = 30;

  int *a1 = &a;
  int *b1 = &b;

  int sum = *a1 + *b1; 
  printf("%d\n", sum);
    
  
  return 0;
}