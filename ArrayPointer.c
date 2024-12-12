#include <stdio.h>
int main()
{
  int p[5] = {8,9,10,11,12};

  int *ptr = p;
  for(int i =0; i<5; i++){

    printf("&p[%d] = %p \t p[%d] = %d\n", i, ptr+i, i, *(ptr+i));

    printf("%d\n", ptr);
    printf("%d\n", ptr +3); //when we  add any number to the pointer then it add as initial addresss + number * size and then point to the new address and perform calculation on this

    // in pointer all opeeration are done using the address of memory location of that vaiable
    
      
      

  }
  return 0;
}