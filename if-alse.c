// #include <stdio.h>
// #include <string.h>
// int main()
// {
//   int x,y;
//   printf("Enter the value of x:");
//   scanf("%d", &x);
//   printf("Enter the value of y:");
//   scanf("%d", &y);

//   if (x>y)
//   {
//     printf("x is greater than y\n");   
//   }
//   if (x<y)
//   {
//     printf("x is less than y\n");   
//   }
//   if (x==y)
//   {
//     printf("x is eqaual to y\n"); 
//   }
//   printf("End the Program");

//   return 0;
// }

// #include <stdio.h>
// int main()
// {
//   int x, y;

//   printf("Enter the value of x:");
//   scanf("%d", &x);
//   printf("Enter the values of y:");
//   scanf("%d", &y);
    

//     if(x<y){
//         printf("y bada hai!");
          
//     }
//     else if(x>y){
//         printf("x chhota hai!"); 
//     }
//     else{
//       printf("baraber hai!"); 
//     }
    
//   return 0;
// }


#include <stdio.h>
#include <string.h>

int main(){
  int age;
  char gender[100];
  char nationality[83];

  printf("Enter the age:");
  scanf("%d", &age);

  printf("Enter the gender: ");
  scanf("%s", &gender);
  printf("Enter the nationality: ");
  scanf("%s", &nationality);

    if (age>=18 && strcmp (nationality,"indian")==0 && strcmp(gender, "male")==0)
    {
      printf("Eligible");
        
    }
    else {
      printf("not eligible");
        
    }
    
      
    return 0;
}