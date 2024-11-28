#include <stdio.h>

#define MAX_SIZE 100

void copyElement(const int arr[], int n) {
    if (n > MAX_SIZE) {
        printf("Array size exceeds maximum allowed size\n");
        return;
    }

    int copy[MAX_SIZE]; 
    for (int i = 0; i < n; i++) {
        copy[i] = arr[i];
    }
    printf("Copied array: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", copy[i]);
    }
    printf("\n");
}

int main() {
    const int arr[] = {332423, 3456, 34, 546, 4332, 6, 7623, 234};
    int n = sizeof(arr) / sizeof(arr[0]);

    copyElement(arr, n);

    return 0;
}
