#include <stdio.h>

int main() {
    int arr[10];
    int sum = 0;
    float average;

    printf("Enter 10 numbers:\n");
    for (int i = 0; i < 10; i++) {
        printf("Element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }
    
    for (int i = 0; i < 10; i++) {
        sum += arr[i];
    }

    average = sum / 10.0; 

    printf("\nSum of the elements: %d\n", sum);
    printf("Average of the elements: %.2f\n", average);

    return 0;
}
