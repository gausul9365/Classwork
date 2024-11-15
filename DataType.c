// Data Types]

// 1. primitive data types
// 2. User defined Data types
// 3. Derived data types

// primary=> integer, character, Floating points, Double floating, Long
// range

// #include <stdio.h>
// int main()
// {

//   int a=9;
//   int b=-9;
//   int c=-89U;

//   long int  d =99998L;
//   printf("integer value with positive data %d\n", a);
//   printf("integer value with negative data %d\n", b);
//   printf("integer value with unsigned int data %u\n", c);
//   printf("integer value with long int data %ld\n", d);

//   printf("the size of int : %d", sizeof(int));

//   return 0;
// }

// #include <stdio.h>
// int main()
// {
//   float myFLoatNum = 3.5;

// printf("%f\n", myFLoatNum);
// printf("%.1f\n", myFLoatNum);
// printf("%.2f\n", myFLoatNum);
// printf("%.4f\n", myFLoatNum);

// return 0;

// }

// #include <stdio.h>
// int main()
// {

//   int intType;
//   float floatType;
//   double doubleType;
//   char charType;

//   printf("Size of int:%zu bytes\n",sizeof(intType) );
//   printf("Size of float:%zu bytes\n",sizeof(floatType) );
//   printf("Size of double:%zu bytes\n",sizeof(doubleType) );
//   printf("Size of char:%zu bytes\n",sizeof(charType) );

//   return 0;
// }

// #include <stdio.h>
// int main()
// {
//   int num; // Declare the variables
//   char ch;
//   float f;

//   // ---------integer----------
//   printf("Enter the Integer: ");//input the integer
//   scanf("%d", &num);

//   printf("\nEntered integer is: %d", num);//output the integer

//   while(getchar()!='\n');
//   printf("\nEnter the float:");
//   scanf("%f", &f);

//   printf("\nEntered float is:%f",f);

//   printf("\nEnter the character:");
//   scanf("%s", &ch);

//   printf("\n Entered character is: %c",ch);

//   return 0;
// }

// #include <stdio.h>
// int main()
// {
//   char ch[6];
//   printf("Enter your name:");
//   gets(ch);
//   puts(ch);
//   char c;
//   printf("Enter your Section: ");

//   c = getchar();

//   putchar(c);
  

//   return 0;
// }

#include <stdio.h>
int main()
{
  char nm[20];
  char dep[20];
  char name[20];
  int enroll;
  int yearofstudy;

  printf("Name:\n");
  printf("Department:\n");
    printf("Enroll:\n");
      printf("Year of Study:\n");

  return 0;
}
  

