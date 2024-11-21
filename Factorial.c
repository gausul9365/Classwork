#include <stdio.h>


int Recursion(int n){
  if(n == 0){
    return 1;
  }

  return n*Recursion(n-1);
}

int main()
{

  int number = 5;
  printf("Factorial of %d is: %d\n", number, Recursion(number));
  return 0;
}

