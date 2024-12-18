#include <stdio.h>
int main(void)
{
  char name[] = "Khurram ALI";
  printf("%c", *name);
  printf("%c",*(name +1) );
  printf("%c",*(name +7) );
  char *namePtr;

  namePtr = name;
  printf("%c\n", *namePtr);
  printf("%c\n", *namePtr + 1);
  printf("%c\n", *namePtr + 7);
    
    
    
  return 0;
}