#include <stdio.h>
int main()
{
  char name[20];

  printf("Enter name: " );
  scanf("%s", name);
  printf("Hello, %s", name);
  return 0;
}