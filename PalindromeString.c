#include <stdio.h>
#include <string.h>
#include <ctype.h>


void isPalindrome(char str[]) {
    int start = 0;
    int end = strlen(str) - 1;

    
    for (int i = 0; i <= end; i++) {
        str[i] = tolower(str[i]);
    }

    
    while (start < end) {
        if (str[start] != str[end]) {
            printf("\"%s\" is not a Palindrome\n", str);
            return;
        }
        start++;
        end--;
    }

    printf("\"%s\" is a Palindrome\n", str);
}

int main() {
    char str[100];
    printf("Enter a string: ");
    scanf("%s", str);

    isPalindrome(str);

    return 0;
}
