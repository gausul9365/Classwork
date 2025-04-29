//WAp to allocate memory for n numbers and print numbers and after that use realloc function to reallocate memory for new n number and print numbers 

#include <stdio.h>
#include <stdlib.h>

int main() {
    int n, new_n; 
    int *numbers; 

   
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    
    numbers = (int *)calloc(n, sizeof(int));
    

   
    printf("Enter %d numbers:\n", n);
    for (int i = 0; i < n; i++) {
        printf("Number %d: ", i + 1);
        scanf("%d", &numbers[i]);
    }

   
    printf("\nNumbers before reallocating:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", numbers[i]);
    }
    printf("\n");

   


    printf("\nEnter the new number of elements: ");
    scanf("%d", &new_n);




    numbers = (int *)realloc(numbers, new_n * sizeof(int));
   



    
    if (new_n > n) {
        printf("Enter %d more numbers:\n", new_n - n);
        for (int i = n; i < new_n; i++) {
            printf("Number %d: ", i + 1);
            scanf("%d", &numbers[i]);
        }
    }

    
    printf("\nNumbers after reallocating:\n");
    for (int i = 0; i < new_n; i++) {
        printf("%d ", numbers[i]);
    }
    printf("\n");

    
    free(numbers);

    return 0;
}
