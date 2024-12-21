// #include <stdio.h>

// int main() {
//     int n;
//     int arr[100]; 
    
//     printf("Enter the number of elements: ");
//     scanf("%d", &n);

   
//     printf("Enter %d elements:\n", n);
//     for (int i = 0; i < n; i++) {
//         scanf("%d", &arr[i]);
//     }

   
//     printf("The elements in the array are:\n");
//     for (int i = 0; i < n; i++) {
//         printf("%d ", *(arr + i)); 
//     }

//     printf("\n"); 
//     return 0;
// }

#include <stdio.h>

int main() {
    int n;

    
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    
    int arr[10]; 
    int *ptr = arr; 

    printf("Enter elements:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", ptr + i); 
    }

    printf("\nThe elements are:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", *(ptr + i));
    }

    return 0;
}
