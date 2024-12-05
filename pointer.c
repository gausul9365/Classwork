#include <stdio.h>
int main()
{
  int* pc,c;
 
    c =5;

    pc = &c;
    c =1; // location  doesnt channge when changing the valuew
    
    printf("%d\n", c);
    printf("%d\n", pc);
      
  return 0;
}