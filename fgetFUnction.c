#include <stdio.h>
int main()
{
  char name[300];
  printf("Enter name: " );

  FILE *fp = fopen("in.txt", "r");
  fgets(name , sizeof(name), fp);
  printf("Name: " );

  puts(name);
    
  return 0;
}