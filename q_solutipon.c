#include <stdio.h>
int main() {
    int arr[7];
    int odd[7];
    int even[7];
    int n = 6;

    printf("Enter the array elements: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);  
    }

    int o = 0;
    int e = 0; 

    for (int i = 0; i < n; i++) {
        if (arr[i] % 2 == 0) {
            even[e] = arr[i];
            e++;
        } else {
            odd[o++] = arr[i];
        }
    }

    printf("\nEven numbers are: ");
    for (int i = 0; i < e; i++) {  
        printf("%d ", even[i]);
    }
    printf("\n");

    printf("Odd numbers are: ");
    for (int i = 0; i < o; i++) {  
        printf("%d ", odd[i]);
    }
    printf("\n");

    return 0;
}
