#include <stdio.h>
int sum(int*a,int *b){
  int Sum = *a + *b;
  return Sum;
}

int main()
{
int a =10;
int b = 23;

int result = sum(&a,&b);
printf("%d\n", result);

  return 0;
}