//WAP to check the characrter ois in upper case or lowercose by taking inopout from user 
#include <stdio.h>

int main() {
    char ch;
    printf("Enter a character: ");
    scanf("%c", &ch);

    
    if (ch >= 'A' && ch <= 'Z') {
        printf("The character '%c' is an uppercase letter.\n", ch);
    }
    
    else if (ch >= 'a' && ch <= 'z') {
        printf("The character '%c' is a lowercase letter.\n", ch);
    }
    
    else {
        printf("The character '%c' is not an alphabet letter.\n", ch);
    }

    return 0;
}
