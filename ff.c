#include <stdio.h>

// WAP to swap three number using call  by refernece 
void swapNumbers(int *a, int *b, int *c) {
    int temp = *a;
    *a = *b;
    *b = *c;
    *c = temp;
}

int main() {
    int x, y, z;

    
    printf("Enter three numbers: ");
    scanf("%d %d %d", &x, &y, &z);

    printf("Before swapping: x = %d, y = %d, z = %d\n", x, y, z);

    
    swapNumbers(&x, &y, &z);

    printf("After swapping: x = %d, y = %d, z = %d\n", x, y, z);

    return 0;
}
