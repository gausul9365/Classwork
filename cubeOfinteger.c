#include <stdio.h>
#include <math.h>
int main()
{
  double a = 32;
  double b = 2;

  double cube = a*a*a;
  double cubeUsingPow=  pow(b,3);
 
  printf("cube using pow: %.1lf\n",cubeUsingPow );
  
  printf("%.1lf\n", cube);
    
    
  return 0;
}