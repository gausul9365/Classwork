#include <stdio.h>
#include <stdlib.h>

int main() {
    int n;

    
    printf("Enter the size of the array: ");
    scanf("%d", &n);

 
    int* arr = (int*)malloc(n * sizeof(int));defef
    

    
    if (arr == NULL) {
        printf("Memory allocation failed!\n");
        return 1;
    }

   
    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", arr + i);  
    }

    
    printf("The elements of the array are:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", *(arr + i));  
    }
    printf("\n");

   
    

    return 0;
}
