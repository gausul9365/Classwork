#include <stdio.h>
int main()
{
  
  char ch;
  printf("Enter the character: ");
  scanf("%c", &ch);

  ch = tolower(ch);

  if(ch== 'a' || ch == 'e' || ch == 'i' || ch== 'o' || ch == 'u'){
    printf("character is vovel");
      
  }
  else{
    printf("character is consonent");
      
  }

    
  return 0;
}