#include <stdio.h>
int sum();

void main()
{
  int result;
  printf("\nCalculte the sum of two number:");
    result = sum();
    printf("%d",result);
      
}
int sum(){
  int a,b;
  printf("\nEnter the first number:");
  scanf("%d %d",&a, &b);
  return a+b;
}