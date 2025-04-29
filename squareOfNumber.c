#include <stdio.h>
#include <stdlib.h>

int main() {
    int n; 
    int *numbers; 
    int *squares; 

   
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    
    numbers = (int *)calloc(n, sizeof(int));
    if (numbers == NULL) {
        printf("Memory allocation failed for numbers array.\n");
        return 1;
    }

    
    squares = (int *)calloc(n, sizeof(int));
    if (squares == NULL) {
        printf("Memory allocation failed for squares array.\n");
        free(numbers);
        return 1;
    }

   
    printf("Enter %d numbers:\n", n);
    for (int i = 0; i < n; i++) {
        printf("Number %d: ", i + 1);
        scanf("%d", &numbers[i]);
    }

  
    for (int i = 0; i < n; i++) {
        squares[i] = numbers[i] * numbers[i];
    }

    
    printf("\nNumber\tSquare\n");
    for (int i = 0; i < n; i++) {
        printf("%d\t%d\n", numbers[i], squares[i]);
    }

    
    free(numbers);
    free(squares);

    return 0;
}
