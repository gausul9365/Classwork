#include <stdio.h>
void sum();
void main()
{

  printf("Calculate the sum of two number: ");

  sum();

}

void sum(){
  int a, b;
  printf("\n Enter two  numbers\n");
  scanf("%d  %d", &a,&b);
  printf("The sum is %d\n", a+b);
  
    
}