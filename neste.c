// WAP to find the lagest number using nested if else 
// WAP to check leap year

#include <stdio.h>
int main()
{
  int year;

  printf("Enter the year: ");
  scanf("%d", &year);

  // if((year %4==0  && year%100 !=0) || year%400==0){
  //   printf("%d is leap year", year);
  // }
  // else{
  //   printf("%d is not a leap year", year);
  // }
  if(year%4==0){
    if (year%100 !=0){
       if(year%400==0){
        printf("leap year");
       }
       else{
        printf("not a leap year");
       }
    } 
    else{
      printf("leap year");
    }
  }
  else{
    printf("not a leap year");
      
  }
    
  return 0;
}