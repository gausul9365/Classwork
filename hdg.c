#include <stdio.h>

int main() {
    int n;
    int arr[100]; 

     
    printf("Enter the number of elements (1 to 100): ");
    scanf("%d", &n);

   
    if (n <= 0 || n > 100) {
        printf("Invalid input! Please enter a number between 1 and 100.\n");
        return 1;
    }

    
    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

   
    printf("The elements in the array are:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", *(arr + i)); 
    }

    printf("\n"); 
    return 0;
}
