// Call by value: A copy of variable is passed to the function
// Call by reference: An Address of the variables is passed to the funtion
// Actual Parameter: The parameter passed to the function 
// Formal Parameter: The parameter recieved by the function


#include <stdio.h>
#include <math.h>
void swapx(int x, int y);
int main()
{
  int a=10; 
  int b=20;
  swapx(a,b);
  printf("In the caller: \na =%db=%d\n",a,b );
  return 0;
}
void swapx(int x, int y){
  int t;
  t=x;
  x=y;
  y=t;
  printf("Inside the function:\nx=%d y=%d\n",x,y );
}