#include <stdio.h>


void isPalindrome(int n) {
    int original = n; 
    int reversed = 0;
    
    
    while (n > 0) {
        int digit = n % 10;   
        reversed = reversed * 10 + digit; 
        n = n / 10;             
    }
    
   
    if (reversed == original) {
        printf("%d is a Palindrome\n", original);
    } else {
        printf("%d is not a Palindrome\n", original);
    }
}

int main() {
    int n = 121; 
    isPalindrome(n);

    return 0;
}
