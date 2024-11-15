#include <stdio.h>

int main() {
    float num1, num2, num3;

    printf("Enter first number: ");
    scanf("%f", &num1);
    printf("Enter second number: ");
    scanf("%f", &num2);
    printf("Enter third number: ");
    scanf("%f", &num3);

  
    if(num1>num2 && num1>num3){
      printf("%f is greatest",num1 );   
    }
    else if(num2>num1 && num2>num3){
      printf("%f is greatest",num2 );
    }
    else{
      printf("%f is greatest",num3 );
    }
    return 0;
}