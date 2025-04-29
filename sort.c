#include <stdio.h>
#include <stdlib.h>

int main() {
    int n, *numbers;

    
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    
    numbers = (int *)malloc(n * sizeof(int));
   

    
    printf("Enter %d numbers:\n", n);
    for (int i = 0; i < n; i++) {
        printf("Number %d: ", i + 1);
        scanf("%d", &numbers[i]);
    } 

    
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (numbers[j] > numbers[j + 1]) {
               
                int temp = numbers[j];
                numbers[j] = numbers[j + 1];
                numbers[j + 1] = temp;
            }
        }
    }

   
    printf("\nNumbers in ascending order:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", numbers[i]);
    }
    printf("\n");

   
    free(numbers);

    return 0;
}
