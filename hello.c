#include <stdio.h>

// int main(){
//   printf("Hello world!");
//   return 0;
// }

// int main(){
//   int myNum =15;
//   printf("%d", myNum);
//   return 0;
// }

// #include <stdio.h>
// int main()
// {
//   int myNum = 15;
//   float myFloatNum = 5.99;
//   char myLetter = 'D';

//   printf("%d\n", myNum);
//   printf("%.2f\n", myFloatNum);
//   printf("%c", myLetter);
//   return 0;
// }

// #include <stdio.h>
// int main()
// {
//   int myNum  = 15;
//   char arr[] = {"a", "b", "c", "d","s"};

//   int size =sizeof(arr)/sizeof(arr[0]);
//   for(int i =0; i<size; i++){
//     printf("%s ",arr[i]);
//   }
//   return 0;
// }


// #include <stdio.h>
// int main()
// {
//   int studentID = 15;
//   int studentAge =23;
//   float studentFee = 160300.10;
//   char studentGrade = 'B';

//   printf("%d\n", studentID);
//   printf("%d\n", studentAge);
//   printf("%fn", studentFee); 
//   printf("%s", studentGrade);  
//   return 0;
// }

#include <stdio.h>
int main()
{
  const int int_const = 25;
  const char char_const = 'A';
  const float float_const =15.66;

  printf(" Printing value of the Integer Constant %d\n", int_const);
  printf(" Printing value of the Integer Constant %c\n", char_const);
  printf(" Printing value of the Integer Constant %.2f\n", float_const);
    
  return 0;
}

