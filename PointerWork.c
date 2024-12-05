#include <stdio.h>
int main()
{
  int* pc, c;

  c =22;
  pc = &c;  /* take the address of c */
  printf("Address of c:%p\n",&c );
  printf("Value of c:%d\n\n",c );
  pc = &c;
  printf("Address of pointer pc: %p\n",pc );
  printf("Content of pointer pc: %d\n\n",*pc );
  c = 11;
  printf("Address of Pointer pc: %p\n",pc);
  printf("Content of Pointer pc: %p\n\n",*pc);

  *pc = 2;
  printf("Address of c: %p\n",&c );
  printf("Address of c: %d\n\n",*pc );
    
    
  return 0;
}